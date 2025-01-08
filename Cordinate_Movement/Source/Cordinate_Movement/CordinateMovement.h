// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CordinateMovement.generated.h"

UCLASS()
class CORDINATE_MOVEMENT_API ACordinateMovement : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACordinateMovement();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void move();
	int step();
	float distance(FVector2D first, FVector2D second);
	void createEvent(float probability);


	FVector2D getCurCoordinate() {
		return start[start.Num()-1];
	}
	FVector2D getPreCoordinate() {
		return start[start.Num() - 2];
	}
	float getTotalDistance() {
		return totDist;
	}
	int32 getEventCount() {
		return evCnt;
	}
	void setCoordinate(int32 x, int32 y) {
		start.Add(FVector2D(x, y));
	}


private:
	TArray<FVector2D> start;
	int32 evCnt = 0;
	float totDist;
	

};
