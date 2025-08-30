#include "PrivateMatchCheckMembersUI.h"

APrivateMatchCheckMembersUI::APrivateMatchCheckMembersUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReadyWidget = NULL;
    this->RuleWidget = NULL;
    this->RuleInfoWidget = NULL;
    this->InfoDisplayTime = 1.00f;
    this->bRivalChallenge = false;
    this->bIsVisibleRuleSettingButton = false;
    this->bIsInitializedParams = false;
}

void APrivateMatchCheckMembersUI::SwitchVisibileRuleCustomBtn_Implementation(bool bIsVisible) {
}

void APrivateMatchCheckMembersUI::SwitchVisibile_Implementation(bool bIsVisible) {
}

void APrivateMatchCheckMembersUI::SwitchTextRuleCustomBtn_Implementation(bool bIsRuleChange) {
}

void APrivateMatchCheckMembersUI::SetIsInitializedParamaters(bool Initialized) {
}

void APrivateMatchCheckMembersUI::SetFocusReadyWidget_Implementation(APlayerController* Controller) {
}

void APrivateMatchCheckMembersUI::RuleUpdated_Implementation(bool bDisplayInfo) {
}

void APrivateMatchCheckMembersUI::ReadyCheck_Implementation() {
}

void APrivateMatchCheckMembersUI::PlayOutAnimations_Implementation() {
}

void APrivateMatchCheckMembersUI::PlayInAnimations_Implementation() {
}

void APrivateMatchCheckMembersUI::OnFinishDisplayInfo() {
}

void APrivateMatchCheckMembersUI::OnDecidedButton() {
}

void APrivateMatchCheckMembersUI::JoinWaiting_Implementation() {
}

void APrivateMatchCheckMembersUI::Initialize_Implementation(bool bIsHost) {
}

bool APrivateMatchCheckMembersUI::GetVisibleRuleCustomBtn() {
    return false;
}

bool APrivateMatchCheckMembersUI::GetIsInitializedParamaters() {
    return false;
}

void APrivateMatchCheckMembersUI::ForceHideRuleUpdateInfo() {
}

void APrivateMatchCheckMembersUI::Finalize_Implementation() {
}


