#include "RaceStandings.h"

ARaceStandings::ARaceStandings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ResultHUD = NULL;
}

void ARaceStandings::ViewEndLoadInfo_Implementation() {
}

void ARaceStandings::ShowLoadInfo_Implementation() {
}

void ARaceStandings::SaveTimeTrialRecordData(ESpeedClassId InSpeedClass, EStageId InStageId) {
}

bool ARaceStandings::ResultAsyncLoadMenuResidentAsset(UAppSystemSubsystem* Subsystem) {
    return false;
}

void ARaceStandings::InitDisplay(bool UseTotalStandings) {
}

void ARaceStandings::Destroy_Implementation() {
}


