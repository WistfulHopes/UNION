#include "RaceSequence.h"

ARaceSequence::ARaceSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bFirstPlayerGoaled = false;
    this->RivalRenderTarget2D = NULL;
    this->FooterMenu = NULL;
    this->LoadingWidgetRef = NULL;
    this->RaceBeforeRuleInfoUIRef = NULL;
    this->Racers = NULL;
    this->RaceSituationManager = NULL;
    this->RaceHUD = NULL;
    this->RaceInfoNotifier = NULL;
    this->IsPromoteMember = false;
    this->CheckQuitPublicLobbyMemberElapsedTime = 0.00f;
}

void ARaceSequence::UnregisterRaceInfoListener(UObject* InListenerObject) {
}

void ARaceSequence::StopUpdateRace() {
}

int32 ARaceSequence::SetReservedRaceSequenceExitCode() {
    return 0;
}

void ARaceSequence::SetRaceSequenceExitCode(ERaceSequenceExitCode InValue) {
}

void ARaceSequence::SetRaceHUDRef(UUnionRaceUI* InRaceHUDRef) {
}

void ARaceSequence::SetNextRaceSequenceState(ERaceSequenceState InState) {
}



void ARaceSequence::SetAfterCeremonyFlag(bool bAfter) {
}


void ARaceSequence::ReserveRaceSequenceExitCode(ERaceSequenceExitCode InExitCode) {
}

void ARaceSequence::RegisterRaceInfoListener(UObject* InListenerObject) {
}

void ARaceSequence::OnStatusObjectEvent(const int32& InEventId, const int32& InRacerIndex) {
}

void ARaceSequence::OnPlatformEvent(const FUnionPlatformEventInfo& EventInfo) {
}

void ARaceSequence::OnInitStateIdle_Implementation() {
}

void ARaceSequence::OnInitStateExit_Implementation() {
}

void ARaceSequence::OnDeviceDisconnectedEvent() {
}

bool ARaceSequence::IsUpdateRace() {
    return false;
}

void ARaceSequence::InitializeRaceResultData() {
}

bool ARaceSequence::HasFatalError() {
    return false;
}

int32 ARaceSequence::GetReservedExitCode() const {
    return 0;
}

UUnionRacers* ARaceSequence::GetRacersRef() {
    return NULL;
}

UUnionRaceInfoNotifier* ARaceSequence::GetRaceInfoNotifier() {
    return NULL;
}

UUnionRaceUI* ARaceSequence::GetRaceHUDRef() {
    return NULL;
}

UCommonMenuFooterMenu* ARaceSequence::GetFooterMenu() {
    return NULL;
}

int32 ARaceSequence::GetErrorLevel() {
    return 0;
}

bool ARaceSequence::GetAfterCeremonyFlag() {
    return false;
}

void ARaceSequence::BtsOnErrorSend() {
}

void ARaceSequence::ApplyRaceOptionSettings() {
}




