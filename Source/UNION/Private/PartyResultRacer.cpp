#include "PartyResultRacer.h"

FPartyResultRacer::FPartyResultRacer() {
    this->RacerIndex = 0;
    this->DriverId = EDriverId::Sonic;
    this->TeamNo = 0;
    this->TeamIndex = 0;
    this->PlayerNo = 0;
    this->RankNo = 0;
    this->NowTotalGoalTime = 0.00f;
    this->goalTime = 0.00f;
    this->NowTotalPoint = 0;
    this->PointAdd = 0;
    this->RateRank = ERateRank::None;
}

