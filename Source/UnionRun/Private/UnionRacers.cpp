#include "UnionRacers.h"

UUnionRacers::UUnionRacers() {
    this->GroupInfo = NULL;
    this->RaceHUD = NULL;
    this->SelectedTravelStage = EStageId::UnKnown;
}

void UUnionRacers::UpdateVehicles(float Delta) {
}

void UUnionRacers::UpdateVehicleInputs() {
}

void UUnionRacers::UpdateTestRace(float Delta) {
}

void UUnionRacers::UpdatePlayerNameHUD(float Delta) {
}

void UUnionRacers::UpdateDomain(float Delta) {
}

void UUnionRacers::UpdateBaggage(float Delta) {
}

FTimerHandle UUnionRacers::UnionRacers_SetTimerDelegate(FTimerDynamicDelegate Delegate, float Time, bool bLooping) {
    return FTimerHandle{};
}

void UUnionRacers::SetVehicle(const int32& InRacerIndex, APawn* InVehicle) {
}

void UUnionRacers::SetTickable(bool bTickable) {
}

void UUnionRacers::SetRaceLapInfo(const int32& InRacerIndex, UUnionRaceLapInfo* InRaceLapInfo) {
}

void UUnionRacers::SetLinkPlayerControllerIndexToRacerIndex(const int32& PlayerControllerIndex, const int32& InRacerIndex) {
}

bool UUnionRacers::IsPlayer(UUnionRacer* Racer) {
    return false;
}

bool UUnionRacers::IsOnlineCom(UUnionRacer* Racer) {
    return false;
}

bool UUnionRacers::IsOfflinePlayer(UUnionRacer* Racer) {
    return false;
}

void UUnionRacers::InitTestRace() {
}

void UUnionRacers::HidePlayerNameHUD() {
}

int32 UUnionRacers::GetTestRaceCount() {
    return 0;
}

UUnionRacerStatusObject* UUnionRacers::GetRacerStatusObject(int32 InRacerIndex) {
    return NULL;
}

UUnionRaceSituationObject* UUnionRacers::GetRacerSituationObject(int32 InRacerIndex) {
    return NULL;
}

int32 UUnionRacers::GetRacerRank(int32 Index) {
    return 0;
}

int32 UUnionRacers::GetRacerIndexByRank(const int32& InRank) {
    return 0;
}

int32 UUnionRacers::GetRacerIndexByPlayerControllerIndex(const int32& PlayerControllerIndex) const {
    return 0;
}

FVector UUnionRacers::GetRacer3DPositionAndDomainNumber(int32 Index, EDomainNumber& DomainNum) {
    return FVector{};
}

UUnionRacer* UUnionRacers::GetRacer(int32 InRacerIndex) {
    return NULL;
}

UUnionRaceLapInfo* UUnionRacers::GetRaceLapInfo(const int32& InRacerIndex) {
    return NULL;
}

UUnionRaceUI* UUnionRacers::GetRaceHUDRef() {
    return NULL;
}

int32 UUnionRacers::GetPlayerRank(int32 PlayerIndex) {
    return 0;
}

int32 UUnionRacers::GetPlayerControllerIndexByRacerIndex(const int32& InRacerIndex) const {
    return 0;
}

void UUnionRacers::GetLocalPlayers(TArray<UUnionRacer*>& OutRacers) {
}

int32 UUnionRacers::GetGamePauseOwnerRacerIndex() const {
    return 0;
}

int32 UUnionRacers::GetGamePauseOwnerPlayerControllerIndex() const {
    return 0;
}

EDriverId UUnionRacers::GetDriverIdByRacerIndex(const int32 InRacerIndex) {
    return EDriverId::Sonic;
}


bool UUnionRacers::Destroy() {
    return false;
}

void UUnionRacers::ClearVehicles() {
}

void UUnionRacers::ChangeVehicleDisplayMode(int32 InRacerIndex, EVehicleDisplayMode InVehicleDisplayMode) {
}

void UUnionRacers::ApplyVehicleInputs() {
}

void UUnionRacers::ApplyPauseInputs() {
}


