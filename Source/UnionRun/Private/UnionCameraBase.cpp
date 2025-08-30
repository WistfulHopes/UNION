#include "UnionCameraBase.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"

AUnionCameraBase::AUnionCameraBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->bAutoStart = false;
    this->bUseRacerCameraDomainNumber = false;
    this->bUseRacerCameraFOV = false;
    this->Priority = EUnionCameraPriority::Default;
    this->RacerIndex = -1;
    this->DomainNumber = EDomainNumber::InvalidDomainNumber;
    this->Camera->SetupAttachment(RootComponent);
}

bool AUnionCameraBase::RequestStartCamera() {
    return false;
}

bool AUnionCameraBase::RequestEndCamera() {
    return false;
}

bool AUnionCameraBase::IsInBlending() {
    return false;
}

bool AUnionCameraBase::IsCurrentViewTarget() {
    return false;
}


