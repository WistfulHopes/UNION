#include "RaceTestPathCameraPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"

ARaceTestPathCameraPawn::ARaceTestPathCameraPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->RotateYawRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RotateYawRoot"));
    this->RotatePitchRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RotatePitchRoot"));
    this->TPCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->RotatePitchRoot->SetupAttachment(RotateYawRoot);
    this->RotateYawRoot->SetupAttachment(RootComponent);
    this->TPCameraComponent->SetupAttachment(RotatePitchRoot);
}


