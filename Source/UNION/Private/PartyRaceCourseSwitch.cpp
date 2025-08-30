#include "PartyRaceCourseSwitch.h"

UPartyRaceCourseSwitch::UPartyRaceCourseSwitch() : UUserWidget(FObjectInitializer::Get()) {
    this->CourseSwitchWindow = NULL;
    this->CourseSwitchTag = EPartyRaceCourseSwitchTag::AnotherWorld;
    this->StageUnlockInfoAsset = NULL;
}

void UPartyRaceCourseSwitch::UpdateCourseSwitchData(UDataTable* DataTable) {
}

void UPartyRaceCourseSwitch::Update() {
}

bool UPartyRaceCourseSwitch::SetDecisionLastSelect() {
    return false;
}

void UPartyRaceCourseSwitch::SetCursorIndex(int32 Index) {
}

void UPartyRaceCourseSwitch::SetCursorIconFocusOutAll(int32 NotOutIndex) {
}

void UPartyRaceCourseSwitch::SetCursorIconFocus(bool bIsFocus) {
}

void UPartyRaceCourseSwitch::SelectAllIcon(bool bIsSelect) {
}

void UPartyRaceCourseSwitch::ResetFromBackUp() {
}

bool UPartyRaceCourseSwitch::IsSelectingSameButton(bool IsSelect) {
    return false;
}

void UPartyRaceCourseSwitch::Init(UDataTable* DataTable) {
}

int32 UPartyRaceCourseSwitch::GetCursorIndex() {
    return 0;
}

UPartyRaceCourseIcon* UPartyRaceCourseSwitch::GetCourseIcon(int32 Index) {
    return NULL;
}


void UPartyRaceCourseSwitch::DecisionIconIndex(int32 Index) {
}

bool UPartyRaceCourseSwitch::CheckIsSameSetting() const {
    return false;
}



void UPartyRaceCourseSwitch::ChangeTag(EPartyRaceCourseSwitchTag Tag) {
}

void UPartyRaceCourseSwitch::BackupCurrentSetting() {
}


