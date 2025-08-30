#include "UnionRaceSituationObject.h"

UUnionRaceSituationObject::UUnionRaceSituationObject() {
    this->Rank = -1;
    this->PrevRank = -1;
    this->LeadingRacerIndex = -1;
    this->LeadingRateDiff = -1.00f;
    this->LeadingDistDiff = -1.00f;
    this->FollowingRacerIndex = -1;
    this->FollowingRatioDiff = -1.00f;
    this->FollowingDistDiff = -1.00f;
    this->rivalDistDiff = 0.00f;
    this->oddNumRankSeconds = 0.00f;
    this->bTeamEnergyCharging = false;
    this->bInFootCutRing = false;
}

void UUnionRaceSituationObject::SetTeamEnergyCharging(bool bCharging) {
}

void UUnionRaceSituationObject::SetRivalDistDiff(float NewRivalDistDiff) {
}

void UUnionRaceSituationObject::SetRank(int32 NewRank) {
}

void UUnionRaceSituationObject::SetPrevRank(int32 NewRank) {
}

void UUnionRaceSituationObject::SetOddNumRankSeconds(float NewOddNumRankSeconds) {
}

void UUnionRaceSituationObject::SetLeadingRatioDiff(float leadingDistance) {
}

void UUnionRaceSituationObject::SetLeadingRacerIndex(int32 RacerIndex) {
}

void UUnionRaceSituationObject::SetLeadingDistDiff(float leadingDistance) {
}

void UUnionRaceSituationObject::SetFollowingRatioDiff(float followingDistance) {
}

void UUnionRaceSituationObject::SetFollowingRacerIndex(int32 RacerIndex) {
}

void UUnionRaceSituationObject::SetFollowingDistDiff(float followingDistance) {
}

bool UUnionRaceSituationObject::IsTeamEnergyCharging() {
    return false;
}

bool UUnionRaceSituationObject::IsFootCutting() {
    return false;
}

float UUnionRaceSituationObject::GetRivalDistDiff() const {
    return 0.0f;
}

int32 UUnionRaceSituationObject::GetRank() const {
    return 0;
}

int32 UUnionRaceSituationObject::GetPrevRank() const {
    return 0;
}

float UUnionRaceSituationObject::GetOddNumRankSeconds() const {
    return 0.0f;
}

float UUnionRaceSituationObject::GetLeadingRatioDiff() const {
    return 0.0f;
}

int32 UUnionRaceSituationObject::GetLeadingRacerIndex() const {
    return 0;
}

float UUnionRaceSituationObject::GetLeadingDistDiff() const {
    return 0.0f;
}

float UUnionRaceSituationObject::GetFollowingRatioDiff() const {
    return 0.0f;
}

int32 UUnionRaceSituationObject::GetFollowingRacerIndex() const {
    return 0;
}

float UUnionRaceSituationObject::GetFollowingDistDiff() const {
    return 0.0f;
}


