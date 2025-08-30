#include "RewardGetDisplay.h"

URewardGetDisplay::URewardGetDisplay() : UUserWidget(FObjectInitializer::Get()) {
    this->RewardGetWindow = NULL;
    this->bWindowTimeClose = false;
    this->bRewardGetWindowSet = false;
    this->WindowCloseTime = 5.00f;
    this->WindowZOrder = 0;
    this->RewardCompleteWindow = NULL;
    this->TipsWindow = NULL;
}

void URewardGetDisplay::StartDisplay() {
}

void URewardGetDisplay::SetWindowParamFromAchievementData(const TArray<FRewardAchievementData>& InAchievementDataArray, bool bInWindowTimeClose, bool bInIgnoreRivalReward, int32 InWindowZOrder) {
}

void URewardGetDisplay::SetWindowParam(const TArray<FRewardGetWindowParam>& InParamArray, bool bInWindowTimeClose, int32 InWindowZOrder) {
}

void URewardGetDisplay::SetRewardGetWindowTitleText(const FText& InText) {
}

void URewardGetDisplay::SetRewardCompleteWindowTitleText(const FText& InText) {
}

void URewardGetDisplay::SetDisableTipsCheck(bool bInDisable) {
}

void URewardGetDisplay::OnTipsWindowClose() {
}

void URewardGetDisplay::OnRewardGetWindowClose() {
}

void URewardGetDisplay::OnRewardCompleteWindowClose() {
}

void URewardGetDisplay::EndDisplay(bool bInShiftCompleteDisplay) {
}

void URewardGetDisplay::DebugForceDisplayRewardCompleteWindow(EMachineId InDisplayMachineId) {
}

void URewardGetDisplay::CreateRewardGetWindow_Implementation(bool bInSetFocus) {
}


