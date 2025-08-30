#include "RaceUISubBoost.h"

URaceUISubBoost::URaceUISubBoost() : UUserWidget(FObjectInitializer::Get()) {
    this->Level0InLoop = NULL;
    this->IrregularInLoop = NULL;
    this->JustinOut = NULL;
    this->BoostNumInOut = NULL;
    this->DspPatBoostNum = NULL;
    this->EffIregularImage = NULL;
    this->IsFastFirstGadget = false;
    this->IsFastSecondGadget = false;
    this->IsFastThirdGadget = false;
    this->IsStartVisibleNormal = false;
    this->IsInFever = false;
    this->IsBoosting = false;
    this->IsOpened = false;
}

void URaceUISubBoost::UpdateChargeInfo(int32 ChargeLevel, float ChargeRate) {
}

void URaceUISubBoost::SetWaitTimeJustBoostInGhostReplay(float Time) {
}

void URaceUISubBoost::SetVisibleHUD(bool IsVisible, float DeltaTime) {
}

bool URaceUISubBoost::IsViewGhostReplay() {
    return false;
}

bool URaceUISubBoost::IsFastThirdCharge(int32 RacerIndex) {
    return false;
}

bool URaceUISubBoost::IsFastSecondCharge(int32 RacerIndex) {
    return false;
}

bool URaceUISubBoost::IsFastFirstCharge(int32 RacerIndex) {
    return false;
}

bool URaceUISubBoost::GetIsOpened() const {
    return false;
}

void URaceUISubBoost::CheckBoostLevelInGhostReplay(int32 Level) {
}


