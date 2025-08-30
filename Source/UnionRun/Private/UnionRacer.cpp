#include "UnionRacer.h"

UUnionRacer::UUnionRacer() {
    this->Vehicle = NULL;
    this->RaceLapInfo = NULL;
    this->RacerStatus = NULL;
    this->RaceSituation = NULL;
}

void UUnionRacer::UpdateVehicleInput() {
}

void UUnionRacer::UpdateVehicle(float Delta) {
}

void UUnionRacer::UpdateTestRace(float Delta) {
}

FTimerHandle UUnionRacer::UnionRacer_SetTimerDelegate(FTimerDynamicDelegate Delegate, float Time, bool bLooping) {
    return FTimerHandle{};
}

void UUnionRacer::SetViewSplitId(EViewSplitId InViewSplitId) {
}

void UUnionRacer::SetVehicle(APawn* InVehicle) {
}

void UUnionRacer::SetTickable(bool bTickable) {
}

void UUnionRacer::SetRacerIndex(int32 InRacerIndex) {
}

void UUnionRacer::SetRaceLapInfo(UUnionRaceLapInfo* InRaceLapInfo) {
}

void UUnionRacer::SetPlayerControllerIndex(int32 InPlayerControllerIndex) {
}

EViewSplitId UUnionRacer::GetViewSplitId() const {
    return EViewSplitId::None;
}

int32 UUnionRacer::GetTestRaceCount() {
    return 0;
}

UUnionRacerStatusObject* UUnionRacer::GetRacerStatusObject() {
    return NULL;
}

UUnionRaceSituationObject* UUnionRacer::GetRacerSituationObject() {
    return NULL;
}

void UUnionRacer::GetRacerIndex(int32& OutRacerIndex) {
}

UUnionRaceLapInfo* UUnionRacer::GetRaceLapInfo() {
    return NULL;
}

void UUnionRacer::GetPlayerControllerIndex(int32& OutPlayerControllerIndex) {
}


bool UUnionRacer::Destroy() {
    return false;
}

void UUnionRacer::ClearVehicle() {
}

void UUnionRacer::ChangeVehicleDisplayMode(EVehicleDisplayMode InVehicleDisplayMode) {
}

void UUnionRacer::ApplyVehicleInput() {
}

bool UUnionRacer::ApplyPauseInput() {
    return false;
}


