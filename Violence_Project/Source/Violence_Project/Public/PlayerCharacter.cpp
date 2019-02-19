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
			FHitResult* HitResult = new FHitResult();
			FVector StartTrace = CurrentWeapon->WeaponMesh->GetSocketLocation("Muzzle");
			FVector ForwardVector = CurrentWeapon->WeaponMesh->GetSocketRotation("Muzzle").Vector();
			FVector EndTrace = (ForwardVector * 5000.f) + StartTrace;
			FCollisionQueryParams* TraceParams = new FCollisionQueryParams;
			
			if (GetWorld()->LineTraceSingleByChannel(*HitResult, StartTrace, EndTrace, ECC_Visibility, *TraceParams))
			{
				DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor(255, 0, 0), true);
				clip--;

				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("You hit: %s"), *HitResult->Actor->GetName()));
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Your ammo: %d"), ammo));
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Your current magazine: %d"), clip));
				}

				delete HitResult;
				delete TraceParams;
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