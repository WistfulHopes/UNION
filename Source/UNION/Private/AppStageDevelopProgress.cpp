#include "AppStageDevelopProgress.h"

FAppStageDevelopProgress::FAppStageDevelopProgress() {
    this->StageId = EStageId::MainBegin;
    this->IsComplete = false;
    this->IsEnableOnline = false;
    this->CompleteRate = 0.00f;
}

