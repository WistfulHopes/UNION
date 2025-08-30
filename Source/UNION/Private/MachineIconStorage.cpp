#include "MachineIconStorage.h"

UMachineIconStorage::UMachineIconStorage() {
}

void UMachineIconStorage::Subsystem_OnComplete(ELocalStorageStatus InStatus) {
}

void UMachineIconStorage::SaveSync(EMachineId InMachineID, UTextureRenderTarget2D* InRenderTexture, SaveLoadResult& OutResult) {
}

UTexture2D* UMachineIconStorage::LoadSync(EMachineId InMachineID, SaveLoadResult& OutResult) {
    return NULL;
}

void UMachineIconStorage::GetFileName(EMachineId InMachineID, FString& OutFileName) const {
}


