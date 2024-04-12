// Fill out your copyright notice in the Description page of Project Settings.


#include "LightSwitch.h"
#include "Components/PointLightComponent.h"

// Sets default values
ALightSwitch::ALightSwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));

	RootComponent = CollisionComponent;
	PointLightComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ALightSwitch::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALightSwitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ALightSwitch::Use_Implementation()
{
	if (PointLightComponent)
	{
		if (PointLightComponent->IsVisible() == true)
		{
			PointLightComponent->SetVisibility(false);
		}
		else
		{
			PointLightComponent->SetVisibility(true);
		}
	}
}
