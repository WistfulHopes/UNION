#include "StageUnlockInfoStruct.h"

FStageUnlockInfoStruct::FStageUnlockInfoStruct() {
    this->StageId = EStageId::MainBegin;
    this->Unreleased = false;
    this->IsDLC = false;
    this->contentId = EContentId::Content01;
}

