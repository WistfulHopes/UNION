#include "SaveDataManageSubsystem.h"

USaveDataManageSubsystem::USaveDataManageSubsystem() {
    this->AutoSaveIconWidget = NULL;
    this->_AppSaveGame = NULL;
    this->_PlayLogSaveGame = NULL;
    this->_OptionConfigSaveGame = NULL;
    this->_ReplaySaveGame = NULL;
    this->_NetSaveGame = NULL;
}

void USaveDataManageSubsystem::StartAutoSavingAnimation() {
}

void USaveDataManageSubsystem::SaveAutoReplayAsync(EStageId StageId) {
}

ESaveDataStatus USaveDataManageSubsystem::SaveAutoPlayLogSync() {
    return ESaveDataStatus::OK;
}

void USaveDataManageSubsystem::SaveAutoPlayLogAsync() {
}

ESaveDataStatus USaveDataManageSubsystem::SaveAutoOptionConfigSync() {
    return ESaveDataStatus::OK;
}

void USaveDataManageSubsystem::SaveAutoOptionConfigAsync() {
}

ESaveDataStatus USaveDataManageSubsystem::SaveAutoNetSync() {
    return ESaveDataStatus::OK;
}

void USaveDataManageSubsystem::SaveAutoNetAsync() {
}

ESaveDataStatus USaveDataManageSubsystem::SaveAutoAppSync() {
    return ESaveDataStatus::OK;
}

void USaveDataManageSubsystem::SaveAutoAppAsync() {
}

void USaveDataManageSubsystem::OnSaveErrorPopupClosedFunc() {
}

void USaveDataManageSubsystem::OnSaveCompleteFunc(const FString& SlotName, const int32 UserIndex, bool bSuccess) {
}

void USaveDataManageSubsystem::OnLoadCompleteFunc(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame) {
}

void USaveDataManageSubsystem::OnInitReplaySaveCompleteFunc(const FString& SlotName, const int32 UserIndex, bool bSuccess) {
}

ESaveDataStatus USaveDataManageSubsystem::LoadReplayConfigSyncByIndex(int32 ReplaySlotIndex) {
    return ESaveDataStatus::OK;
}

void USaveDataManageSubsystem::LoadReplayConfigAsync(EStageId StageId) {
}

ESaveDataStatus USaveDataManageSubsystem::LoadAutoPlayLogSync() {
    return ESaveDataStatus::OK;
}

void USaveDataManageSubsystem::LoadAutoPlayLogAsync() {
}

ESaveDataStatus USaveDataManageSubsystem::LoadAutoOptionConfigSync() {
    return ESaveDataStatus::OK;
}

void USaveDataManageSubsystem::LoadAutoOptionConfigAsync() {
}

ESaveDataStatus USaveDataManageSubsystem::LoadAutoNetSync() {
    return ESaveDataStatus::OK;
}

void USaveDataManageSubsystem::LoadAutoNetAsync() {
}

void USaveDataManageSubsystem::LoadAutoDemoAppAsync() {
}

ESaveDataStatus USaveDataManageSubsystem::LoadAutoAppSync() {
    return ESaveDataStatus::OK;
}

void USaveDataManageSubsystem::LoadAutoAppAsync() {
}

bool USaveDataManageSubsystem::IsValidReplayRomVersion(int32& OutRomVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsValidReplayDataVersion(int32& OutCurVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsValidPlayLogRomVersion(int32& OutRomVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsValidPlayLogDataVersion(int32& OutCurVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsValidOptionConfigRomVersion(int32& OutRomVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsValidOptionConfigDataVersion(int32& OutCurVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsValidNetRomVersion(int32& OutRomVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsValidNetDataVersion(int32& OutCurVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsValidAppRomVersion(int32& OutRomVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsValidAppDataVersion(int32& OutCurVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsLoadedReplaySaveData(EStageId StageId, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsLoadedPlayLogSaveData(ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsLoadedOptionConfigSaveData(ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsLoadedNetSaveData(ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsLoadedAppSaveData(ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::IsBusy() {
    return false;
}

void USaveDataManageSubsystem::InitSaveAutoReplayAsyncByStage(EStageId StageId) {
}

void USaveDataManageSubsystem::InitSaveAutoReplayAsyncBySlot(int32 ReplaySlotIndex) {
}

void USaveDataManageSubsystem::GetUserNetworkSettingsFromLocalData(FUserSaveUserNetworkSettingsRequest& OutRequest) {
}

UReplaySaveGame* USaveDataManageSubsystem::GetReplaySaveGamePtr() {
    return NULL;
}

int32 USaveDataManageSubsystem::GetReplaySaveCount(ESaveDataStatus& OutStatus) {
    return 0;
}

UPlayLogSaveGame* USaveDataManageSubsystem::GetPlayLogSaveGamePtr() {
    return NULL;
}

int32 USaveDataManageSubsystem::GetPlayLogSaveCount(ESaveDataStatus& OutStatus) {
    return 0;
}

UOptionConfigSaveGame* USaveDataManageSubsystem::GetOptionConfigSaveGamePtr() {
    return NULL;
}

int32 USaveDataManageSubsystem::GetOptionConfigSaveCount(ESaveDataStatus& OutStatus) {
    return 0;
}

UNetSaveGame* USaveDataManageSubsystem::GetNetSaveGamePtr() {
    return NULL;
}

int32 USaveDataManageSubsystem::GetNetSaveCount(ESaveDataStatus& OutStatus) {
    return 0;
}

UAppSaveGame* USaveDataManageSubsystem::GetAppSaveGamePtr() {
    return NULL;
}

int32 USaveDataManageSubsystem::GetAppSaveCount(ESaveDataStatus& OutStatus) {
    return 0;
}

bool USaveDataManageSubsystem::ExistsAutoReplaySaveGameByStage(EStageId StageId, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::ExistsAutoReplaySaveGameByIndex(int32 ReplaySlotIndex, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::ExistsAutoReplayPS4SaveGameByIndex(int32 ReplaySlotIndex, ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::ExistsAutoPlayLog(ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::ExistsAutoOptionConfig(ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::ExistsAutoNet(ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::ExistsAutoAppPS4(ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::ExistsAutoAppDemo(ESaveDataStatus& OutStatus) {
    return false;
}

bool USaveDataManageSubsystem::ExistsAutoApp(ESaveDataStatus& OutStatus) {
    return false;
}

void USaveDataManageSubsystem::EndAutoSavingAnimation() {
}


