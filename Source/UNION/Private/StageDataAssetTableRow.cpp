#include "StageDataAssetTableRow.h"

FStageDataAssetTableRow::FStageDataAssetTableRow() {
    this->StageId = EStageId::MainBegin;
    this->bUseOnline = false;
    this->StageContentsType = EStageContentsType::LaunchStage;
    this->TimeTrialStageVersion = 0;
}

