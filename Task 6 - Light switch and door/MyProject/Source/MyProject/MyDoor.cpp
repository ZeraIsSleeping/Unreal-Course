// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDoor.h"

// Sets default values
AMyDoor::AMyDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));

	RootComponent = CollisionComponent;
	DoorMesh->SetupAttachment(RootComponent);

	doorIsOpen = false;
}

// Called when the game starts or when spawned
void AMyDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	timeSinceTick += DeltaTime;

	percentage = FMath::Clamp(timeSinceTick / OpenTime * 100.0f, 0.0f, 100.0f);

	if (percentage < 100)
	{
		// Raise or lower door
		float newZPosition;

		if (doorIsOpen)
		{
			newZPosition = FMath::Lerp(-6.0f, 38.0f, percentage / 100.0f);
		}
		else
		{
			newZPosition = FMath::Lerp(38.0f, -6.0f, percentage / 100.0f);
		}

		FVector newDoorLocation = DoorMesh->GetRelativeLocation();

		newDoorLocation.Z = newZPosition;

		DoorMesh->SetRelativeLocation(newDoorLocation);
	}
}

void AMyDoor::Use_Implementation()
{
	doorIsOpen = (doorIsOpen == true) ? false : true;

	timeSinceTick = 0;

	percentage = 0;
}