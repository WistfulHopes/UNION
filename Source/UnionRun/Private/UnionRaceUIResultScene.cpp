#include "UnionRaceUIResultScene.h"

UUnionRaceUIResultScene::UUnionRaceUIResultScene() : UUserWidget(FObjectInitializer::Get()) {
    this->ResultLinesPanel = NULL;
    this->ResultAnimationMoving = false;
    this->_State = EUnionRaceUIResultSceneState::Invalid;
    this->m_IsEnableGhost = false;
}

void UUnionRaceUIResultScene::SetupLapTime() {
}






bool UUnionRaceUIResultScene::IsViewDiffLapTime(int32 LapNo) {
    return false;
}

bool UUnionRaceUIResultScene::IsEnableGhost() const {
    return false;
}

FText UUnionRaceUIResultScene::GetTotalLapTimeText() {
    return FText::GetEmpty();
}

int32 UUnionRaceUIResultScene::GetTotalLapTime() {
    return 0;
}


FText UUnionRaceUIResultScene::GetLapTimeText(int32 LapNo) {
    return FText::GetEmpty();
}

int32 UUnionRaceUIResultScene::GetLapTime(int32 LapNo) {
    return 0;
}

FText UUnionRaceUIResultScene::GetGhostDiffTotalLapTime(bool& OutIsUpTime, bool& OutIsSameTime) {
    return FText::GetEmpty();
}

FText UUnionRaceUIResultScene::GetGhostDiffLapTime(int32 LapNo, bool& OutIsUpTime, bool& OutIsSameTime) {
    return FText::GetEmpty();
}



