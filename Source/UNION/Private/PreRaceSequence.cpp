#include "PreRaceSequence.h"
#include "PreRaceSequenceStateErrorWindow.h"

APreRaceSequence::APreRaceSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreRaceSequenceStateErrorWindowComponent = CreateDefaultSubobject<UPreRaceSequenceStateErrorWindow>(TEXT("StateErrorWindow"));
}

void APreRaceSequence::SetNextPreRaceSequenceState_Implementation(EPreRaceSequenceState InState, EPreRaceSequenceState PrevState) {
}

void APreRaceSequence::OnUpdateStateWaitP2PConnection_Implementation(float InDeltaTime) {
}

void APreRaceSequence::OnMemberPromote(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext) {
}

void APreRaceSequence::OnLobbyDelete(ULobbyContextBase* LobbyContext) {
}

void APreRaceSequence::OnInitStateWaitP2PConnection_Implementation() {
}

void APreRaceSequence::OnInitStateIdle_Implementation() {
}

void APreRaceSequence::OnInitStateExit_Implementation() {
}

void APreRaceSequence::OnExitStateWaitP2PConnection_Implementation() {
}

void APreRaceSequence::OnExitStateExit_Implementation() {
}

void APreRaceSequence::InitializeRaceResultData() {
}

bool APreRaceSequence::HasError() const {
    return false;
}

bool APreRaceSequence::HasAnyError() const {
    return false;
}

void APreRaceSequence::HandlingError() {
}

void APreRaceSequence::ExitMeasurementCallback(EPreRaceSeqErrorCode ErrorCode) {
}

void APreRaceSequence::ExitHostMigrationCallback(EPreRaceSeqErrorCode ErrorCode) {
}

void APreRaceSequence::ExitComSyncCallback(EPreRaceSeqErrorCode ErrorCode) {
}

void APreRaceSequence::ExitCheckLobbyMemberCallback(EPreRaceSeqErrorCode ErrorCode) {
}


