// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "UseableInterface.h"
#include "LightSwitch.generated.h"

UCLASS()
class MYPROJECT_API ALightSwitch : public AActor, public IUseableInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightSwitch();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Light Settings")
	class UPointLightComponent* PointLightComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Use_Implementation() override;
};
