#include "RaceSequenceStateSendRaceEnd.h"
#include "ERaceSequenceState.h"

URaceSequenceStateSendRaceEnd::URaceSequenceStateSendRaceEnd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SendRaceEnd");
    this->DefaultMenuState = ERaceSequenceState::SendRaceEnd;
    this->IsHost = false;
    this->bAlreadyCalledDisableTimeout = false;
    this->bIsEnableTimeoutCheck = false;
    this->bClientTimeout = false;
    this->ClientTimeoutTime = 60.00f;
    this->ElapsedTime = 0.00f;
}

void URaceSequenceStateSendRaceEnd::SetupUserOrder() {
}

void URaceSequenceStateSendRaceEnd::SetPlayerDataRelationWhenGoal() {
}

void URaceSequenceStateSendRaceEnd::ResetAlreadyCalledDisableTimeout() {
}

void URaceSequenceStateSendRaceEnd::NextState() {
}

bool URaceSequenceStateSendRaceEnd::isPlayerControlRacer(int32 InRacerIndex) {
    return false;
}

bool URaceSequenceStateSendRaceEnd::IsLeadNoOneInGroup(const int32 InRacerIndex, const FGroupBattleResult InGroupBattleResult) {
    return false;
}

bool URaceSequenceStateSendRaceEnd::IsBonusNoOneInGroup(const int32 InRacerIndex, const FGroupBattleResult InGroupBattleResult) {
    return false;
}

void URaceSequenceStateSendRaceEnd::GetResultSaveTimeTrialResult_Implementation(FResultSaveTimeTrialResultRequest& Request, bool& IsSuccess) {
}

void URaceSequenceStateSendRaceEnd::GetResultSaveRankMatchResultRequest_Implementation(FResultSaveRankMatchResultRequest& Request, bool& IsSuccess) {
}

void URaceSequenceStateSendRaceEnd::GetResultSaveFestaResultRequest_Implementation(FResultSaveFestaResultRequest& Request, bool& IsSuccess) {
}

void URaceSequenceStateSendRaceEnd::GetRacerFinalGroupBattleResult(bool& bSuccess, FGroupBattleResult& OutGroupBattleResult) {
}

void URaceSequenceStateSendRaceEnd::GetLobbyContextParam_Implementation() {
}

void URaceSequenceStateSendRaceEnd::EnableTimeoutCheck(FRaceSequenceStateSendRaceEndTimeout OnTimeout) {
}

void URaceSequenceStateSendRaceEnd::DisableTimeoutCheck() {
}

bool URaceSequenceStateSendRaceEnd::CheckSkipCurrentState() {
    return false;
}


