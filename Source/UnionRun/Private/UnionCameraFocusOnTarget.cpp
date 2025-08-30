#include "UnionCameraFocusOnTarget.h"
#include "Components/SceneComponent.h"

AUnionCameraFocusOnTarget::AUnionCameraFocusOnTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CameraRoot"));
    this->FocusTarget = CreateDefaultSubobject<USceneComponent>(TEXT("FocusTarget"));
    this->FocusTargetActor = NULL;
    this->bKeepCameraAbovePath = false;
    this->CheckUnderPathDistance = 300.00f;
    this->KeepAbovePathMerge = 100.00f;
    this->bBlendCamera = true;
    this->BlendCameraSpring_Stiffness = 5.00f;
    this->BlendCameraSpring_TargetVelocityAmount = 1.00f;
    this->CameraRoot->SetupAttachment(RootComponent);
    this->FocusTarget->SetupAttachment(RootComponent);
}


