#include "AppRaceStageSetting.h"

FAppRaceStageSetting::FAppRaceStageSetting() {
    this->DomainIndex = EDomainIndex::DomainIndex0;
    this->StageId = EStageId::MainBegin;
    this->TravelRingScreenType = ETravelRingScreenType::Open;
    this->IrregularEventId = EIrregularEventId::None;
}

