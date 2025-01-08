// Fill out your copyright notice in the Description page of Project Settings.


#include "CordinateMovement.h"

// Sets default values
ACordinateMovement::ACordinateMovement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACordinateMovement::BeginPlay()
{
	Super::BeginPlay();

	setCoordinate(0, 0);
	UE_LOG(LogTemp, Warning, TEXT("Current Position : (%.0f, %.0f)"), getCurCoordinate().X, getCurCoordinate().Y);
	UE_LOG(LogTemp, Warning, TEXT("Move Start!\n"));
	move();
	
}

// Called every frame
void ACordinateMovement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACordinateMovement::move() {
	for (int i = 0; i < 10;++i) {
		int moveX = step();
		int moveY = step();
		UE_LOG(LogTemp, Warning, TEXT("%d Move X %d, Move Y %d (%.0f, %.0f)"), i+1, moveX, moveY,getCurCoordinate().X + moveX, getCurCoordinate().Y + moveY);
		setCoordinate(getCurCoordinate().X + moveX, getCurCoordinate().Y + moveY);
		createEvent(50);
		float curMoveDist = distance(getPreCoordinate(), getCurCoordinate());
		totDist += curMoveDist;
		UE_LOG(LogTemp, Warning, TEXT("move distace in this time is %.2f"), curMoveDist);
		
	}
	UE_LOG(LogTemp, Warning, TEXT("Move Finished! Total Distance : %.2f EventCount : %d"), getTotalDistance(), getEventCount());
}

int ACordinateMovement::step() {
	int RandomValue = FMath::RandRange(0, 1);

	return RandomValue;
}

float ACordinateMovement::distance(FVector2D first, FVector2D second) {
	float dx = first.X - second.X;
	float dy = first.Y - second.Y;
	return FMath::Sqrt(dx * dx + dy * dy);
}

void ACordinateMovement::createEvent(float probability) {
	int32 RandomValue = FMath::RandRange(1, 100);
	if (RandomValue <= probability) {
		UE_LOG(LogTemp, Warning, TEXT("Event Triggered!"));
		++evCnt;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Event Not Triggered"));
	}
	
}