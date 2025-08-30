#include "ReplayFixedCameraFocus.h"

AReplayFixedCameraFocus::AReplayFixedCameraFocus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraRoot = NULL;
    this->FocusTarget = NULL;
    this->FocusTargetActor = NULL;
    this->bUseFovBlend = false;
    this->StartFovBlend = 90.00f;
    this->EndFovBlend = 90.00f;
    this->InterpTime = 1.00f;
    this->EasingFunc = EEasingFunc::EaseOut;
    this->InterpExp = 4.00f;
}


