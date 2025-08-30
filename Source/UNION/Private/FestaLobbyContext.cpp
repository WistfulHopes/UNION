#include "FestaLobbyContext.h"
#include "FestaLobbyMemberContext.h"

UFestaLobbyContext::UFestaLobbyContext() {
    this->LobbyMemberContextClass = UFestaLobbyMemberContext::StaticClass();
}

void UFestaLobbyContext::SyncFestaRule(int32 festaId, int32 DefaultRuleId, UFestaLobbyContext::FOnSyncFestaRuleComplete OnComplete) {
}

bool UFestaLobbyContext::SyncBonusChanceData(const FCommon_FestaBonusChanceData& BonusChanceData) {
    return false;
}

void UFestaLobbyContext::OnFestaTopComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

bool UFestaLobbyContext::IsAddMemberComplete2() {
    return false;
}

void UFestaLobbyContext::GetTeamMemberFromIndex(int32 TeamIndex, TArray<FString>& MemberIds) const {
}

bool UFestaLobbyContext::GetBonusChanceData(int32& BonusChanceType, int32& BonusChanceParam) {
    return false;
}

bool UFestaLobbyContext::DebugGetSyncFestaData() const {
    return false;
}

void UFestaLobbyContext::DebugGetRecvFestaDataUserIds(TArray<FString>& UserIds) const {
}

void UFestaLobbyContext::DebugGetFestaTopResponse(FFestaFestaTopResponse& Response) const {
}


