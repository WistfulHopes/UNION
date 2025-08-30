#include "ActivityObjectIdData.h"

FActivityObjectIdData::FActivityObjectIdData() {
    this->GameActivityId = EGameModeId::None;
    this->GameTaskType = EGameTaskType::None;
    this->GrandPrixId = EGrandPrixId::InValid;
    this->RivalId = EDriverId::Sonic;
    this->RivalTeamId = ERivalTeamId::Alpha01;
    this->StageId = EStageId::MainBegin;
    this->SpeedClassId = ESpeedClassId::NormalSpeed;
}

