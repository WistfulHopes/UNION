#include "RaceUISubAiming.h"

URaceUISubAiming::URaceUISubAiming() : UUserWidget(FObjectInitializer::Get()) {
    this->RaceHUD = NULL;
    this->Overlay01 = NULL;
    this->Overlay02 = NULL;
    this->AimingImage = NULL;
    this->LockOnImage = NULL;
    this->WaitAnim = NULL;
    this->LockOnAnim = NULL;
    this->LostAnim = NULL;
    this->ShotAnim = NULL;
    this->CanvasSlot = NULL;
    this->AimingMID = NULL;
}

void URaceUISubAiming::StopSound(bool bPause) {
}

void URaceUISubAiming::SetRaceHUD(UUnionRaceUI* inRaceHud, int32 localPlayerNum) {
}

void URaceUISubAiming::ReStartAimingUseBeforeSound(int32 PlayerControllerIndex) {
}

void URaceUISubAiming::InitParam() {
}


