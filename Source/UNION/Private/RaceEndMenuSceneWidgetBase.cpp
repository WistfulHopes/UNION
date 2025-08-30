#include "RaceEndMenuSceneWidgetBase.h"

URaceEndMenuSceneWidgetBase::URaceEndMenuSceneWidgetBase() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->ContentsInfo_ = NULL;
}

void URaceEndMenuSceneWidgetBase::SetupChallengeNotice(UUnionChallengeManager* ChallengeManager) {
}







UCommonRaceMenuContentsInfo* URaceEndMenuSceneWidgetBase::GetContentsInfo() const {
    return NULL;
}

UUnionUIButtonsPanel* URaceEndMenuSceneWidgetBase::GetButtonsPanel() {
    return NULL;
}

void URaceEndMenuSceneWidgetBase::BuildContents(const UCommonRaceMenuContentsInfo* InContentsInfo) {
}


