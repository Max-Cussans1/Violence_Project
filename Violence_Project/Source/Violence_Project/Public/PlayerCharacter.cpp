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

}

void APlayerCharacter::Shoot()
{
	
	if (CurrentWeapon->clip > 0)
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

				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("You hit: %s"), *HitResult->Actor->GetName()));
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Your ammo: %d"), CurrentWeapon->ammo));
				}
				delete HitResult;
				delete TraceParams;
			}
		}
	}
	else
	{
		Reload();
	}
}

void APlayerCharacter::StartShooting()
{
	shooting = true;
}

void APlayerCharacter::StopShooting()
{
	shooting = false;
}

void APlayerCharacter::Reload()
{
	if (CurrentWeapon->ammo >= CurrentWeapon->maxClip)
	{
		CurrentWeapon->clip = CurrentWeapon->maxClip;
	}
	else
	{
		CurrentWeapon->clip += CurrentWeapon->ammo;
	}
	CurrentWeapon->ammo -= CurrentWeapon->maxClip;
	if (CurrentWeapon->ammo <= 0)
	{
		CurrentWeapon->ammo = 0;
	}

}