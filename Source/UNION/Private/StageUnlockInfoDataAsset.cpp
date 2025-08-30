#include "StageUnlockInfoDataAsset.h"

UStageUnlockInfoDataAsset::UStageUnlockInfoDataAsset() {
}

bool UStageUnlockInfoDataAsset::CheckStageUnreleased(EStageId StageId) {
    return false;
}

bool UStageUnlockInfoDataAsset::CheckStageDLC(EStageId StageId, EContentId& DLCContent) {
    return false;
}


