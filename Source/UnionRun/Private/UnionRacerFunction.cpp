#include "UnionRacerFunction.h"

UUnionRacerFunction::UUnionRacerFunction() {
}

bool UUnionRacerFunction::IsSameGroup(int32 InRacerIndexA, int32 InRacerIndexB) {
    return false;
}

bool UUnionRacerFunction::IsInScreen(const APlayerController* PlayerController, const FVector& Position) {
    return false;
}

UUnionRacers* UUnionRacerFunction::GetUnionRacers() {
    return NULL;
}

float UUnionRacerFunction::GetRankUpGaugeSpeed() {
    return 0.0f;
}

float UUnionRacerFunction::GetRankingSkipInterval() {
    return 0.0f;
}

int32 UUnionRacerFunction::GetRacerIndexByPlayerID(int32 PlayerId) {
    return 0;
}

int32 UUnionRacerFunction::GetRacerIndexByDriverID(EDriverId DriverId) {
    return 0;
}

int32 UUnionRacerFunction::GetRacerGroupIndex(int32 InRacerIndex) {
    return 0;
}

float UUnionRacerFunction::GetDistance(const FVector& Pos1, const FVector& Pos2) {
    return 0.0f;
}


