#include "LobbyCourseSelectData.h"

FLobbyCourseSelectData::FLobbyCourseSelectData() {
    this->LobbyTravelRingManager = NULL;
    this->CourseSelectUIScene = NULL;
    this->OwnPlayerIndex = 0;
    this->PrimaryLobbyContext = NULL;
    this->RaceRaceSettingCourseSelecting = ERaceSettingCourseSelecting::EveryTimeManualSelect;
    this->OwnPlayerIsHost = false;
}

