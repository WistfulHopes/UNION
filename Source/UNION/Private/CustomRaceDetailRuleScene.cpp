#include "CustomRaceDetailRuleScene.h"

UCustomRaceDetailRuleScene::UCustomRaceDetailRuleScene() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
}

void UCustomRaceDetailRuleScene::UnbindAllSelectEvent() {
}

void UCustomRaceDetailRuleScene::SetupSelectEvent() {
}

void UCustomRaceDetailRuleScene::SetPresetSettingFromSave(const FPartyRacePresetSettingSave& Setting) {
}

void UCustomRaceDetailRuleScene::SetPresetSetting(const FPartyRacePresetSetting& Setting) {
}

void UCustomRaceDetailRuleScene::SaveLastFocusedSetting() {
}

void UCustomRaceDetailRuleScene::SaveCustomSelectEvent(ECustomRaceSettingLine SettingLineIndex, int32 LastIndex) {
}

void UCustomRaceDetailRuleScene::ResetFromBackUp() {
}

void UCustomRaceDetailRuleScene::OnTripleCourseSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnTopPointSettlementSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnSpeedClassSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnRingLostSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnRaceCountSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnRaceBonusSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnPointUpChanceSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnObjectPlacementTypeSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnMCEventSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnMatchRuleSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnItemAppearanceRuleSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnIrregularSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnHandicapSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnGroupSettingSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnGoalPointSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnGadgetUsingSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnFestaRaceRuleSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnCourseSelectingSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnComSpeedSelect(int32 Index) {
}

void UCustomRaceDetailRuleScene::OnAutoGetItemSelect(int32 Index) {
}


bool UCustomRaceDetailRuleScene::CheckIsRuleSame() const {
    return false;
}



void UCustomRaceDetailRuleScene::BackupCurrentSetting(bool IsGuest) {
}


