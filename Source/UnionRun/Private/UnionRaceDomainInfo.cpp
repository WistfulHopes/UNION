#include "UnionRaceDomainInfo.h"

FUnionRaceDomainInfo::FUnionRaceDomainInfo() {
    this->DomainIndex = 0;
    this->StageId = EStageId::MainBegin;
    this->LightChannel = 0;
    this->TravelRingScreenType = ETravelRingScreenType::Open;
    this->IrregularEventId = EIrregularEventId::None;
}

