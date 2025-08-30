#include "MatchingSequenceStateMatching.h"
#include "EMenuSequenceSubState.h"

UMatchingSequenceStateMatching::UMatchingSequenceStateMatching(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("MATCHING");
    this->DefaultMenuState = EMenuSequenceSubState::Matching;
    this->LocalState = EMatchingLocalState::JoinOrCreateLobby;
    this->LobbyType = EMatchingLobbyType::None;
}

void UMatchingSequenceStateMatching::WaitHostConnectionComplete() {
}

void UMatchingSequenceStateMatching::WaitClientP2PConnectComplete() {
}

bool UMatchingSequenceStateMatching::WaitAsyncP2PConnectCompete() {
    return false;
}

void UMatchingSequenceStateMatching::SetupOnlinePeerRaceConfig(int32 LocalUserNum) {
}

void UMatchingSequenceStateMatching::SetLocalState(EMatchingLocalState NewLocalState) {
}

void UMatchingSequenceStateMatching::SetLobbyType(EMatchingLobbyType InLobbyType) {
}

void UMatchingSequenceStateMatching::SendStartP2PSignal(bool bIsResend) {
}

void UMatchingSequenceStateMatching::SendEndPreRace() {
}

void UMatchingSequenceStateMatching::SendClientP2PSignal() {
}

void UMatchingSequenceStateMatching::RegisterMemberAtSendP2PSignal() {
}

void UMatchingSequenceStateMatching::LoadMatchingSequenceActor(EMatchingLobbyType InLobbyType) {
}

bool UMatchingSequenceStateMatching::IsWaitFinish() {
    return false;
}

bool UMatchingSequenceStateMatching::IsLobbyHost(int32 LocalUserNum) const {
    return false;
}

bool UMatchingSequenceStateMatching::IsFinishedP2P() {
    return false;
}

bool UMatchingSequenceStateMatching::IsEnableP2PSubsystem() {
    return false;
}

bool UMatchingSequenceStateMatching::IsEnableP2PStartWithMatching() {
    return false;
}

bool UMatchingSequenceStateMatching::IsEnableLegacyStateMatching() {
    return false;
}

bool UMatchingSequenceStateMatching::IsEnableAsyncP2P() {
    return false;
}

EMatchingLobbyType UMatchingSequenceStateMatching::GetLobbyType() {
    return EMatchingLobbyType::None;
}

int32 UMatchingSequenceStateMatching::GetLobbyMemberCount() const {
    return 0;
}

UCommonLobbyContext* UMatchingSequenceStateMatching::GetLobbyContext() const {
    return NULL;
}

FString UMatchingSequenceStateMatching::GetComputerNameString() const {
    return TEXT("");
}

void UMatchingSequenceStateMatching::FinishMatchingSetup_Implementation() {
}

void UMatchingSequenceStateMatching::EndWaitFinish() {
}

void UMatchingSequenceStateMatching::DebugOverWrite(int32 JoinPlayerCount, int32 OnlineIndex) {
}

void UMatchingSequenceStateMatching::ClientP2PComplete() {
}


