#include "RaceErrorHandlingSequence.h"

ARaceErrorHandlingSequence::ARaceErrorHandlingSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ARaceErrorHandlingSequence::SetNextSequenceState_Implementation(ERaceErrorHandlingState InState) {
}

void ARaceErrorHandlingSequence::QuitLobbyFinishedCallback() {
}

void ARaceErrorHandlingSequence::OnUpdateStateHandling_Implementation(float DeltaTime) {
}

void ARaceErrorHandlingSequence::OnInitStateQuitLobby_Implementation() {
}

void ARaceErrorHandlingSequence::OnInitStateIdle_Implementation() {
}

void ARaceErrorHandlingSequence::OnInitStateHandling_Implementation() {
}

void ARaceErrorHandlingSequence::OnInitStateExit_Implementation() {
}

void ARaceErrorHandlingSequence::OnInitStateEOSLogout_Implementation() {
}

void ARaceErrorHandlingSequence::OnInitStateAddFairPoint_Implementation() {
}

void ARaceErrorHandlingSequence::OnExitStateHandling_Implementation() {
}

void ARaceErrorHandlingSequence::FinishedAddFairPoint(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}


