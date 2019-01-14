// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class VIOLENCE_PROJECT_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();
	USkeletalMeshComponent* WeaponMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int maxClip = 30;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int clip = 30;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int ammo = 3 * clip;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	float fireRate = 0.1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
