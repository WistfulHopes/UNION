#include "SquadLobbyControlComponent.h"
#include "SquadContext.h"

USquadLobbyControlComponent::USquadLobbyControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SquadContextClass = USquadContext::StaticClass();
}

void USquadLobbyControlComponent::OnCompleteJoinSquad(bool bSuccessful, const FLobbyOperationResult& Result) {
}


void USquadLobbyControlComponent::JoinSquadBySearchLobbyId_Callback(FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void USquadLobbyControlComponent::JoinSquadBySearchLobbyId() {
}

void USquadLobbyControlComponent::JoinSquadByInviteInfo_Callback(FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void USquadLobbyControlComponent::JoinSquadByInviteInfo() {
}

void USquadLobbyControlComponent::CheckHasPlanningToJoinLobby(bool& bHasAcceptInvite, bool& bHasSearchLobbyId, bool& bShouldQuitLobby) const {
}


