// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "Weapon.h"
#include "GameFramework/Character.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "PlayerCharacter.generated.h"

UCLASS()


class VIOLENCE_PROJECT_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	AWeapon* CurrentWeapon;
	UPROPERTY(BlueprintReadOnly)
	bool shooting = false;
	UPROPERTY(BlueprintReadWrite)
	bool isReloading = false;

	//variables to store current weapon's stuff
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int ammo;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int clip;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int maxClip;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	void Shoot();
	UFUNCTION(BlueprintCallable)
	void Reload();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private: 
	void StartShooting();
	void StopShooting();
	void SetReload();
	
};
