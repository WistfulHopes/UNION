#include "GarageCamera.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "GarageCameraMovementComponent.h"

AGarageCamera::AGarageCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->MovementComponent = CreateDefaultSubobject<UGarageCameraMovementComponent>(TEXT("Movement"));
    this->CameraComponent->SetupAttachment(RootComponent);
    this->MovementComponent->SetupAttachment(RootComponent);
}

UGarageCameraMovementComponent* AGarageCamera::GetMovementComponent() {
    return NULL;
}

UCameraComponent* AGarageCamera::GetCameraComponent() {
    return NULL;
}


