#include "SceneCaptureComponentEx.h"

USceneCaptureComponentEx::USceneCaptureComponentEx(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCaptureEveryFrame = false;
    this->bCaptureOnMovement = false;
    this->bAlwaysPersistRenderingState = true;
    this->bUseCustomProjectionMatrix = true;
    this->bEnableClipPlane = true;
    this->OwnerMeshComponent_ = NULL;
    this->MaterialInstance_ = NULL;
}


