#include "UserPartyRaceData.h"

FUserPartyRaceData::FUserPartyRaceData() {
    this->SelectedRivalTeamId = ERivalTeamId::Alpha01;
    this->LastSelectedRivalTeamId = ERivalTeamId::Alpha01;
    this->RivalTeamCutinNextPlayRequested = false;
    this->RivalTeamAllEliminatedCount = 0;
}

