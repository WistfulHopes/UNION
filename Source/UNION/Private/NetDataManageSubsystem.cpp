#include "NetDataManageSubsystem.h"
#include "Templates/SubclassOf.h"

UNetDataManageSubsystem::UNetDataManageSubsystem() {
    this->CurrentPublicLobbyContext = NULL;
    this->CurrentPrivateLobbyContext = NULL;
    this->ConsecutiveRaceDataContext = NULL;
    this->AcceptLobbyInviteInfo = NULL;
    this->FontObject = NULL;
    this->SquadAutoPlay = NULL;
}

void UNetDataManageSubsystem::SetSearchLobbyId(const FLobbyId& InLobbyId) {
}

void UNetDataManageSubsystem::SetPublicLobbyContext(ULobbyContextBase* LobbyContext) {
}

void UNetDataManageSubsystem::SetPrivateLobbyContext(ULobbyContextBase* LobbyContext) {
}

void UNetDataManageSubsystem::SetAcceptLobbyInviteInfo(ULobbyJoinInfo* InAcceptLobbyInviteInfo) {
}

void UNetDataManageSubsystem::SendDebugChangeFairPlayPoint(int32 NewPoint) {
}

void UNetDataManageSubsystem::QuitPublicLobby(FLatentActionInfo LatentInfo) {
}

void UNetDataManageSubsystem::QuitPrivateLobby(FLatentActionInfo LatentInfo) {
}

void UNetDataManageSubsystem::OnSendDebugChangeRankMatchRate(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UNetDataManageSubsystem::OnSendDebugChangeFairPlayPoint(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

bool UNetDataManageSubsystem::IsJoiningPublicLobby(TSubclassOf<ULobbyContextBase> LobbyContextClass) const {
    return false;
}

bool UNetDataManageSubsystem::IsJoiningPrivateLobby(TSubclassOf<ULobbyContextBase> LobbyContextClass) const {
    return false;
}

void UNetDataManageSubsystem::GetSearchLobbyId(FLobbyId& OutLobbyId) {
}

ULobbyContextBase* UNetDataManageSubsystem::GetPublicLobbyContextByClass(TSubclassOf<ULobbyContextBase> LobbyContextClass) const {
    return NULL;
}

ULobbyContextBase* UNetDataManageSubsystem::GetPublicLobbyContext() const {
    return NULL;
}

ULobbyContextBase* UNetDataManageSubsystem::GetPrivateLobbyContextByClass(TSubclassOf<ULobbyContextBase> LobbyContextClass) const {
    return NULL;
}

ULobbyContextBase* UNetDataManageSubsystem::GetPrivateLobbyContext() const {
    return NULL;
}

ULobbyContextBase* UNetDataManageSubsystem::GetCurrentJoinedLobbyForMatchmaking(TSubclassOf<ULobbyContextBase> LobbyContextClass, bool& bIsPublicLobby) {
    return NULL;
}

UConsecutiveRaceDataContext* UNetDataManageSubsystem::GetConsecutiveRaceDataContext() const {
    return NULL;
}

ULobbyJoinInfo* UNetDataManageSubsystem::GetAcceptLobbyInviteInfo() const {
    return NULL;
}

void UNetDataManageSubsystem::FinalizeWirelessMode(const FOnWirelessModeOperarionComplete& OnComplete) {
}

void UNetDataManageSubsystem::DeleteConsecutiveRaceDataContext() {
}

ULobbyContextBase* UNetDataManageSubsystem::CreatePublicLobbyContextByMatchmakingResult(TSubclassOf<ULobbyContextBase> LobbyContextClass, int32 LocalUserNum, const FCreateOrConnectLobbyResult& MatchmakingResult) {
    return NULL;
}

ULobbyContextBase* UNetDataManageSubsystem::CreatePublicLobbyContext(TSubclassOf<ULobbyContextBase> LobbyContextClass) {
    return NULL;
}

ULobbyContextBase* UNetDataManageSubsystem::CreatePrivateLobbyContext(TSubclassOf<ULobbyContextBase> LobbyContextClass) {
    return NULL;
}

UConsecutiveRaceDataContext* UNetDataManageSubsystem::CreateConsecutiveRaceDataContext(TSubclassOf<UConsecutiveRaceDataContext> RaceDataContextClass) {
    return NULL;
}

bool UNetDataManageSubsystem::CheckVaildLobbyInviteInfo(ULobbyContextBase* LobbyContext, ELobbyType TargetLobbyType) {
    return false;
}


