#include "PartyRaceMenuCustomizeRuleState.h"
#include "EMenuSequenceSubState.h"

UPartyRaceMenuCustomizeRuleState::UPartyRaceMenuCustomizeRuleState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SettingPartyRace");
    this->DefaultMenuState = EMenuSequenceSubState::SettingPartyRace;
    this->PartyRaceConfirmScene = NULL;
    this->CustomRaceDetailRuleScene = NULL;
    this->PartyRaceItemSwitch = NULL;
    this->PartyRaceCourseSwitch = NULL;
    this->PopupWindow = NULL;
    this->IsGuest = false;
}

void UPartyRaceMenuCustomizeRuleState::SetPrivateMatchCustomRaceRule() {
}

void UPartyRaceMenuCustomizeRuleState::SetPrevCustomMatchRule(const FPartyRacePresetSetting InRaceSetting, const FItemSwitchSetting InItemSwitch, const TArray<EStageId> InCourseSwitch) {
}

void UPartyRaceMenuCustomizeRuleState::SetIsGuest(bool Guest) {
}

void UPartyRaceMenuCustomizeRuleState::ResetCustomMatchRule() {
}

void UPartyRaceMenuCustomizeRuleState::OnDecideCheckRuleWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void UPartyRaceMenuCustomizeRuleState::LoadStageThumbnail() {
}

void UPartyRaceMenuCustomizeRuleState::LoadFinishStageThumbnail() {
}

APartyRaceMenuSequence* UPartyRaceMenuCustomizeRuleState::GetOwnerPartyRaceMenuSequence() {
    return NULL;
}


void UPartyRaceMenuCustomizeRuleState::ExitCustomizeRuleMenu() {
}

UUserWidget* UPartyRaceMenuCustomizeRuleState::CreateCheckPopupWindow(const FText InBodyText, const TArray<FText> InButtonText) {
    return NULL;
}

bool UPartyRaceMenuCustomizeRuleState::CheckSameRaceRule(const FPartyRacePresetSetting CheckRule) {
    return false;
}

bool UPartyRaceMenuCustomizeRuleState::CheckSameItemSwitch(const FItemSwitchSetting CheckItemSwitch) {
    return false;
}

bool UPartyRaceMenuCustomizeRuleState::CheckSameCustomMatchRule() {
    return false;
}

bool UPartyRaceMenuCustomizeRuleState::CheckSameCourseSwitch(const TArray<EStageId> CheckCourseSwitch) {
    return false;
}



