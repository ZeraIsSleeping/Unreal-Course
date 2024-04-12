// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "UseableInterface.h"
#include "MyDoor.generated.h"

UCLASS()
class MYPROJECT_API AMyDoor : public AActor, public IUseableInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* DoorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OpenTime;

	bool doorIsOpen;

	float timeSinceTick;

	float percentage;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Use_Implementation() override;
};
