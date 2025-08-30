#include "EntryGroup.h"

FEntryGroup::FEntryGroup() {
    this->GroupIndex = 0;
    this->TeamBoostUnlockGauge = 0;
    this->CurrentBoostCycle = 0;
    this->Rank = 0;
    this->StartRaceTime = 0.00f;
    this->BoostPhaseTransitionTimer = 0.00f;
    this->bIsTeamBoost = false;
    this->UserData = 0.00f;
}

