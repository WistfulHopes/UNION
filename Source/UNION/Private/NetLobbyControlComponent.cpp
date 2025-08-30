#include "NetLobbyControlComponent.h"

UNetLobbyControlComponent::UNetLobbyControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UNetLobbyControlComponent::StartMatchmakingForLobbyMember(UCommonLobbyContext* LobbyContext, FOnGameMatchmakingComplete OnComplete) {
}

void UNetLobbyControlComponent::StartMatchmaking(int32 LocalUserNum, FOnGameMatchmakingComplete OnComplete) {
}

bool UNetLobbyControlComponent::SetupLocalMemberRaceAttributes(FLobbySubsystemOnLobbyOperationComplete OnComplete) {
    return false;
}


void UNetLobbyControlComponent::OnMemberUpdate_Implementation(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext) {
}

void UNetLobbyControlComponent::OnMemberPromote_Implementation(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext) {
}

void UNetLobbyControlComponent::OnMemberDisconnect_Implementation(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext, bool bWasKicked) {
}

void UNetLobbyControlComponent::OnMemberConnect_Implementation(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext) {
}

void UNetLobbyControlComponent::OnLobbyUpdate_Implementation(ULobbyContextBase* LobbyContext) {
}

void UNetLobbyControlComponent::OnLobbyOperationCompleteSimple(bool bSuccessful, const FLobbyOperationResult& Result) {
}

void UNetLobbyControlComponent::OnLobbyDelete_Implementation(ULobbyContextBase* LobbyContext) {
}



void UNetLobbyControlComponent::OnErrorFromLobbyContext(int32 ErrorCode, EAppNetErrorCode ErrorCodeEnum, const FString& ErrorMessage) {
}

bool UNetLobbyControlComponent::IsLobbyHostLocalMember() const {
    return false;
}

void UNetLobbyControlComponent::InitLobbyContext_Implementation(int32 LocalUserNum) {
}

void UNetLobbyControlComponent::HandleError(int32 ErrorCode, const FString& ErrorMessage) {
}

void UNetLobbyControlComponent::GetSquadPlayerData(int32 PlayerLobbyIndex, FLobbyPlayerData& OutLobbyPlayerData, bool& bOutIsOwnPlayer, ECommonLobbyMemberState& OutMemberState) const {
}

UCommonLobbyContext* UNetLobbyControlComponent::GetPrimaryLobbyContext() const {
    return NULL;
}

void UNetLobbyControlComponent::GetLocalPlayerData(FLobbyPlayerData& OutLobbyPlayerData, bool& bOutIsOwnPlayer, ECommonLobbyMemberState& OutMemberState) const {
}

void UNetLobbyControlComponent::GetLobbyPlayerData(int32 PlayerLobbyIndex, FLobbyPlayerData& OutLobbyPlayerData, bool& bOutIsOwnPlayer, ECommonLobbyMemberState& OutMemberState) const {
}

UCommonLobbyContext* UNetLobbyControlComponent::CreatePrimaryLobbyContextByMatchmakingResult(int32 LocalUserNum, const FCreateOrConnectLobbyResult& MatchmakingResult) const {
    return NULL;
}

UCommonLobbyContext* UNetLobbyControlComponent::CreatePrimaryLobbyContext(int32 LocalUserNum) const {
    return NULL;
}

UMatchmakingRequestContext* UNetLobbyControlComponent::CreateMatchmakingContext(int32 LocalUserNum) const {
    return NULL;
}

bool UNetLobbyControlComponent::ConvertRacerNameToLobbyName(UCommonLobbyMemberContext* MemberContext, FString& OutName) {
    return false;
}


