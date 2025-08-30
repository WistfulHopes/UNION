#include "LoginProcessor.h"

ALoginProcessor::ALoginProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WarningViewer = NULL;
    this->ServerSavedataDeleteWindow = NULL;
    this->LoginPointState = ELoginPointState::NoneState;
}


void ALoginProcessor::OnTerraLoginComplete(bool bError, bool bSavedataDeleted) {
}

void ALoginProcessor::OnStartLoginProcess() {
}

void ALoginProcessor::OnServerSavedataDeleted() {
}

void ALoginProcessor::OnSendNsaIdTokenComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void ALoginProcessor::OnSaveUserNetworkSettingsComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void ALoginProcessor::OnRomVersionComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void ALoginProcessor::OnQueryServerTimeComplete(FDateTime UtcTimestamp, bool Error) {
}

void ALoginProcessor::OnNotifyFriendInviteComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void ALoginProcessor::OnNetDataComplete(ESaveDataStatus Status) {
}

void ALoginProcessor::OnMasterDataComplete(bool bWasSuccessful, int32 ErrorCode) {
}

void ALoginProcessor::OnGetFriendListComplete(bool bWasSuccessful, const FFriendGetFriendListResponse& list) {
}

void ALoginProcessor::OnGetDataComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void ALoginProcessor::OnEosLogoutComplete(int32 LocalUserNum, bool bWasSuccessful) {
}

void ALoginProcessor::OnEosLoginComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ErrorMessage) {
}

void ALoginProcessor::OnEnsureNsaIdTokenComplete(bool bWasSuccessful, const FString& ErrorMessage) {
}

void ALoginProcessor::OnDecisionServerSaveDataDelete(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ALoginProcessor::OnCrmKickStart(bool Status) {
}

void ALoginProcessor::OnCheckFairPointComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void ALoginProcessor::OnBlockListComplete(bool bWasSuccessful) {
}

void ALoginProcessor::OnAppDataComplete(ESaveDataStatus Status) {
}




