// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon.h"


// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	TArray<USkeletalMeshComponent*> comps;
	this->GetComponents<USkeletalMeshComponent>(comps);
	if (comps.Num() > 0)
	{
		WeaponMesh = comps[0];
	}
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector getMuzzleLocation(USkeletalMeshComponent* SkeleMesh)
{
	return SkeleMesh->GetSocketLocation("Muzzle");
}

FVector getMuzzleRotation(USkeletalMeshComponent* SkeleMesh)
{
	return SkeleMesh->GetSocketRotation("Muzzle").Vector();
}
