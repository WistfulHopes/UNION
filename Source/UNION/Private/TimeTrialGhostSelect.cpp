#include "TimeTrialGhostSelect.h"

UTimeTrialGhostSelect::UTimeTrialGhostSelect() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->bIsTimeClear = false;
}

void UTimeTrialGhostSelect::SubModeSetup_Implementation(const EStageId InStageId) {
}

bool UTimeTrialGhostSelect::IsTargetTimeClear(EStageId StageId) {
    return false;
}


