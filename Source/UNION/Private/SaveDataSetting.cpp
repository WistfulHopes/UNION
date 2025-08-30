#include "SaveDataSetting.h"

ASaveDataSetting::ASaveDataSetting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ASaveDataSetting::OnReplayDataSaveComplete(ESaveDataStatus Status) {
}

void ASaveDataSetting::OnPlayLogDataSaveComplete(ESaveDataStatus Status) {
}

void ASaveDataSetting::OnNetDataSaveComplete(ESaveDataStatus Status) {
}

void ASaveDataSetting::OnNetDataLoadComplete(ESaveDataStatus Status) {
}

void ASaveDataSetting::OnConfigDataSaveComplete(ESaveDataStatus Status) {
}

void ASaveDataSetting::OnConfigDataLoadComplete(ESaveDataStatus Status) {
}

void ASaveDataSetting::OnAppDataSaveComplete(ESaveDataStatus Status) {
}

void ASaveDataSetting::OnAppDataLoadComplete(ESaveDataStatus Status) {
}

bool ASaveDataSetting::InitReplayData() {
    return false;
}

bool ASaveDataSetting::InitPlayLogData() {
    return false;
}

bool ASaveDataSetting::InitNetData() {
    return false;
}

bool ASaveDataSetting::InitConfigData() {
    return false;
}

bool ASaveDataSetting::InitAppData() {
    return false;
}


