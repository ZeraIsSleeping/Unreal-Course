// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (IsSprinting == false)
	{
		timeSinceTickSprinting = 0;

		timeSinceTickNotSprinting += DeltaTime;

		staminaRegenPercent = FMath::Clamp(timeSinceTickNotSprinting / 5 * 100.0f, 0.0f, 100.0f);

		if (staminaRegenPercent >= 100.0f)
		{
			timeSinceTickRegen += DeltaTime;

			Stamina = FMath::Clamp(timeSinceTickRegen / 2, 0.0f, 1.0f);
		}
	}
	else
	{
		timeSinceTickNotSprinting = 0;
		timeSinceTickRegen = 0;

		timeSinceTickSprinting += DeltaTime;

		float newStamina = 1 - FMath::Clamp(timeSinceTickSprinting / 10, 0.0f, 1.0f);

		Stamina = newStamina;

		staminaRegenPercent = 0;
	}

	if (Stamina <= 0)
	{
		IsSprinting = false;
	}
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

