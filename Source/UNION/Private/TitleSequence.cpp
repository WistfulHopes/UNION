#include "TitleSequence.h"

ATitleSequence::ATitleSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MenuSequence = NULL;
    this->MenuInputReceiveObject = NULL;
    this->DebugCommand = NULL;
    this->MilestoneSpecificDebugCommand = NULL;
    this->FullGameStorePopup = NULL;
}

void ATitleSequence::UnBindMenuInputReceive() {
}

void ATitleSequence::SetNextTitleSequenceState_Implementation(ETitleSequenceState InState) {
}

void ATitleSequence::OnUpdateStateTitleTop_Implementation(float DeltaTime) {
}

void ATitleSequence::OnUpdateStateFinishedAdvertiseLogoFlow_Implementation(float DeltaTime) {
}

void ATitleSequence::OnUpdateStateDetachUnavailableContent_Implementation(float DeltaTime) {
}

void ATitleSequence::OnUpdateStateConvertSaveDataForDemo_Implementation(float DeltaTime) {
}

void ATitleSequence::OnUpdateStateConvertSaveData_Implementation(float DeltaTime) {
}

void ATitleSequence::OnInitStateWarning_Implementation() {
}

void ATitleSequence::OnInitStateTitleTop_Implementation() {
}

void ATitleSequence::OnInitStateStore_Implementation() {
}

void ATitleSequence::OnInitStateMovie_Implementation() {
}

void ATitleSequence::OnInitStateLogos_Implementation() {
}

void ATitleSequence::OnInitStateLicense_Implementation() {
}

void ATitleSequence::OnInitStateGameQuit_Implementation() {
}

void ATitleSequence::OnInitStateFinishedAdvertiseLogoFlow_Implementation() {
}

void ATitleSequence::OnInitStateExit_Implementation() {
}

void ATitleSequence::OnInitStateDetachUnavailableContent_Implementation() {
}

void ATitleSequence::OnInitStateCreateAndLoadSaveData_Implementation() {
}

void ATitleSequence::OnInitStateConvertSaveDataForDemo_Implementation() {
}

void ATitleSequence::OnInitStateConvertSaveData_Implementation() {
}

void ATitleSequence::OnInitStateCheckPlatformPrivilege_Implementation() {
}

void ATitleSequence::OnInitStateAutoSaveInformation_Implementation() {
}

void ATitleSequence::OnInitStateAgreement_Implementation() {
}

void ATitleSequence::OnFaceButtonTopPressedTitle_Implementation(UObject* Object) {
}

void ATitleSequence::OnFaceButtonLeftPressedTitle_Implementation(UObject* Object) {
}

void ATitleSequence::OnExitStateFinishedAdvertiseLogoFlow_Implementation() {
}

void ATitleSequence::OnExitStateDetachUnavailableContent_Implementation() {
}

void ATitleSequence::OnExitStateCreateAndLoadSaveData_Implementation() {
}

void ATitleSequence::OnExitStateConvertSaveDataForDemo_Implementation() {
}

void ATitleSequence::OnExitStateConvertSaveData_Implementation() {
}

void ATitleSequence::OnBackKeyPressedTitle_Implementation(UObject* Object) {
}

void ATitleSequence::OnAcceptKeyPressedTitle_Implementation(UObject* Object) {
}

bool ATitleSequence::IsValidSaveDataAppRomVersion() const {
    return false;
}

TSoftObjectPtr<UTexture2D> ATitleSequence::GetStrapTexture() {
    return NULL;
}

ETitleSequenceState ATitleSequence::GetExitSequence() const {
    return ETitleSequenceState::CheckPlatformPrivilege;
}

ETitleSequenceState ATitleSequence::GetCurrentTitleState() {
    return ETitleSequenceState::CheckPlatformPrivilege;
}

void ATitleSequence::DecisionStoreEvent_Implementation(bool IsAccept) {
}

void ATitleSequence::BindMenuInputReceive() {
}


