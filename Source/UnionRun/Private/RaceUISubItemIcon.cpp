#include "RaceUISubItemIcon.h"

URaceUISubItemIcon::URaceUISubItemIcon() : UUserWidget(FObjectInitializer::Get()) {
    this->UISoundPan = ESoundPan::Center;
    this->RingNum = NULL;
    this->RingNum_Addtive = NULL;
    this->Canvas_Panel_Icon = NULL;
    this->Canvas_Panel_ItemIconRoot = NULL;
    this->ArdGauge = NULL;
    this->PackageRing = NULL;
    this->ControllerButtonIcon = NULL;
    this->ItemIconMaterial = NULL;
    this->ItemIconAddtiveMaterial = NULL;
    this->AttributeFrameMaterial = NULL;
    this->AttributIconImage = NULL;
    this->AttributIconMaterial = NULL;
    this->ItemIdIndex = 0;
    this->RemainCount = 0;
    this->bMainIcon = true;
    this->bLotteryingAnim = false;
    this->bLoopAnimPlaying = false;
}

void URaceUISubItemIcon::StopCountDownBlink_Implementation() {
}

void URaceUISubItemIcon::StartCountDownBlink_Implementation() {
}

void URaceUISubItemIcon::SetupPackageRing_Implementation() {
}

void URaceUISubItemIcon::SetRingNumVisible(bool bVisible) {
}

void URaceUISubItemIcon::SetRingNum(int32 InRingCount) {
}

void URaceUISubItemIcon::SetLotteryDisplayItemIds(const TArray<uint8> ItemIds) {
}

void URaceUISubItemIcon::SetItemIdTexture(const TMap<EItemId, UTexture2D*>& InItemId_TextureMap) {
}

void URaceUISubItemIcon::SetItemIdIndex(int32 InItemIdIndex, int32 InRemainCount, bool bIgnoreAttribute, bool bOnLottery) {
}

void URaceUISubItemIcon::SetAttributeColorIndex(int32 InAttributeIndex) {
}

void URaceUISubItemIcon::PlayLoopAnim_Implementation() {
}

void URaceUISubItemIcon::OnFinishedOutAnim_Implementation() {
}

void URaceUISubItemIcon::OnFinishedInAnim_Implementation() {
}

void URaceUISubItemIcon::OnFinishedDecide_Implementation() {
}

void URaceUISubItemIcon::LotterySeqStart_Implementation(bool LotterySound) {
}

void URaceUISubItemIcon::LotteryDecideFinished_Implementation() {
}

void URaceUISubItemIcon::LotteryAnimStart_Implementation() {
}

void URaceUISubItemIcon::LotteryAnimEnd_Implementation() {
}

void URaceUISubItemIcon::ItemLostAnimStart_Implementation(bool bHideIcon) {
}

uint8 URaceUISubItemIcon::GetRandomLotteryDisplayItemId() {
    return 0;
}

void URaceUISubItemIcon::FireUseAnim() {
}

void URaceUISubItemIcon::DisplayHideAnim_Implementation(bool Display) {
}

void URaceUISubItemIcon::CloseLottery_Implementation() {
}


