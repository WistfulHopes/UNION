#include "ReplayMoveCameraFocus.h"

AReplayMoveCameraFocus::AReplayMoveCameraFocus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraRoot = NULL;
    this->SpringArmComponent = NULL;
    this->bUseRotBlend = false;
    this->EndArmLength = 500.00f;
    this->InterpTime = 1.00f;
    this->EasingFunc = EEasingFunc::EaseOut;
    this->InterpExp = 4.00f;
}


