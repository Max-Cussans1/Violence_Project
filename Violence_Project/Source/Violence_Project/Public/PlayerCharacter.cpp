// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	ammo = CurrentWeapon->ammo;
	clip = CurrentWeapon->clip;
	maxClip = CurrentWeapon->maxClip;
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

 //Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAction("Shoot", IE_Pressed, this, &APlayerCharacter::StartShooting);
	InputComponent->BindAction("Shoot", IE_Released, this, &APlayerCharacter::StopShooting);
	InputComponent->BindAction("Reload", IE_Pressed, this, &APlayerCharacter::SetReload);
}

void APlayerCharacter::Shoot()
{
	
	if (clip > 0)
	{
		
		if (CurrentWeapon)
		{
			FHitResult HitResult;
			FVector StartTrace = CurrentWeapon->WeaponMesh->GetSocketLocation("Muzzle"); //begin our trace where we put the muzzle socket in editor
			FVector ForwardVector = CurrentWeapon->WeaponMesh->GetSocketRotation("Muzzle").Vector(); //check the forward vector from our socket
			FVector EndTrace = (ForwardVector * 5000.f) + StartTrace;
			FCollisionQueryParams TraceParams;
			if (GetWorld()->LineTraceSingleByChannel(HitResult, StartTrace, EndTrace, ECC_Visibility, TraceParams))
			{
				//DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor(255, 0, 0), true);	//debug line to show our shot
				clip--; //lose a bullet in our clip
				HitLocation = HitResult.Location; //store the location for bullet decals/blood vfx

				//some useful debug prints
				if (GEngine)
				{
					//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("You hit: %s"), *HitResult.GetActor()->GetName()));
					//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Your current target's HP: %d"), CurrentTarget->Health));

				}

				if (HitResult.GetActor()->IsA(AEnemyCharacter::StaticClass())) //check if we've hit an enemy
				{
					hasHitEnemy = true;
					CurrentTarget = (AEnemyCharacter*)HitResult.GetActor(); //set our current target to the enemy we have hit and cast to our enemy class from actor

									/*ONSCREEN DEBUG TO CHECK WHERE SHOTS ARE AND WHERE THE HEAD SOCKET IS*/
					if (GEngine)
					{
					//GEngine->AddOnScreenDebugMessage(-1, 45.f, FColor::Red, FString::Printf(TEXT("X: %f"), HitResult.Location.X));
					//GEngine->AddOnScreenDebugMessage(-1, 45.f, FColor::Red, FString::Printf(TEXT("Y: %f"), HitResult.Location.Y));
					//GEngine->AddOnScreenDebugMessage(-1, 45.f, FColor::Red, FString::Printf(TEXT("Z: %f"), HitResult.Location.Z));
					//GEngine->AddOnScreenDebugMessage(-1, 45.f, FColor::Red, FString::Printf(TEXT("Head X: %f"), CurrentTarget->EnemyMesh->GetSocketLocation("Head").X));
					//GEngine->AddOnScreenDebugMessage(-1, 45.f, FColor::Red, FString::Printf(TEXT("Head Y: %f"), CurrentTarget->EnemyMesh->GetSocketLocation("Head").Y));
					//GEngine->AddOnScreenDebugMessage(-1, 45.f, FColor::Red, FString::Printf(TEXT("Head Z: %f"), CurrentTarget->EnemyMesh->GetSocketLocation("Head").Z));
					}
					
					if (CurrentTarget->Health > 0) //check if the enemy's not already dead
					{
						if (HitResult.Location.X <= CurrentTarget->EnemyMesh->GetSocketLocation("Head").X + 35 && HitResult.Location.X >= CurrentTarget->EnemyMesh->GetSocketLocation("Head").X - 35 &&
							HitResult.Location.Y <= CurrentTarget->EnemyMesh->GetSocketLocation("Head").Y + 35 && HitResult.Location.Y >= CurrentTarget->EnemyMesh->GetSocketLocation("Head").Y - 35 &&
							HitResult.Location.Z <= CurrentTarget->EnemyMesh->GetSocketLocation("Head").Z + 35 && HitResult.Location.Z >= CurrentTarget->EnemyMesh->GetSocketLocation("Head").Z - 35) //check if we headshot the enemy by checking around the Head socket in all directions
						{
							CurrentTarget->TakeDamage(100); //call the takedamage function in our enemy class with more damage since it's a headshot
							CurrentTarget->EnemyIsHeadshot = true;
						}
						else
						{
							CurrentTarget->TakeDamage(25); //call the takedamage function in our enemy class
							if (CurrentTarget->Health <= 0)
							{
								CurrentTarget->EnemyIsDead = true;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		SetReload();
	}
}

void APlayerCharacter::StartShooting()
{
	if (isReloading == false)
	{
		shooting = true;
	}
}

void APlayerCharacter::StopShooting()
{
	shooting = false;
}

void APlayerCharacter::Reload()
{
		//store difference of current clip - max clip size
		int diff = maxClip - clip;
		//add what's left from ammo to clip
		clip = clip + ammo;
		//take the difference away from our total ammo (the ammo we are putting into the clip)
		ammo = ammo - diff;
		//make sure we aren't going above the max clip size
		if (clip > maxClip)
		{
			clip = maxClip;
		}
		if (ammo < 0)
		{
			ammo = 0;
		}
}

void APlayerCharacter::SetReload()
{
	if (ammo > 0 && clip < 30)
	{
		isReloading = true;
		shooting = false;
	}
}