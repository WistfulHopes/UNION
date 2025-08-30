#include "GrandPrixUtilityLibrary.h"

UGrandPrixUtilityLibrary::UGrandPrixUtilityLibrary() {
}

void UGrandPrixUtilityLibrary::UnloadCommonData() {
}

void UGrandPrixUtilityLibrary::SetGrandPrixLastPlayedMenuSpeedClassId(const EMenuSpeedClassId SetClassId) {
}

void UGrandPrixUtilityLibrary::LoadCommonData() {
}

bool UGrandPrixUtilityLibrary::IsGrandPrixOpened(EGrandPrixId GrandPrixId) {
    return false;
}

bool UGrandPrixUtilityLibrary::IsGrandPrixEndingCleared(EGrandPrixEndingId EndingId) {
    return false;
}

bool UGrandPrixUtilityLibrary::IsFixedGrandPrix(EGrandPrixId GrandPrixId) {
    return false;
}

bool UGrandPrixUtilityLibrary::IsClearedNormalGrandPrix() {
    return false;
}

bool UGrandPrixUtilityLibrary::IsBonusUpChallenge(const uint8 NormalRivalLevel) {
    return false;
}

bool UGrandPrixUtilityLibrary::HasUnclearedGrandPrixEnding() {
    return false;
}

int32 UGrandPrixUtilityLibrary::GetRivalWinRewardEventThreshold() {
    return 0;
}

int32 UGrandPrixUtilityLibrary::GetRivalWinFirstRewardEventThreshold() {
    return 0;
}

uint8 UGrandPrixUtilityLibrary::GetRivalLevelMax() {
    return 0;
}

int32 UGrandPrixUtilityLibrary::GetRivalDominationTargetCount() {
    return 0;
}

int32 UGrandPrixUtilityLibrary::GetRivalDominationCount() {
    return 0;
}

TArray<bool> UGrandPrixUtilityLibrary::GetRedStarRingAcquisition(const EStageId InStageId) {
    return TArray<bool>();
}

uint8 UGrandPrixUtilityLibrary::GetPowerRivalAddLevel() {
    return 0;
}

uint8 UGrandPrixUtilityLibrary::GetMaxRivalLevel() {
    return 0;
}

uint8 UGrandPrixUtilityLibrary::GetMaxNormalRivalLevel() {
    return 0;
}

EMenuSpeedClassId UGrandPrixUtilityLibrary::GetGrandPrixLastPlayedMenuSpeedClassId() {
    return EMenuSpeedClassId::NormalSpeed;
}

EMenuSpeedClassId UGrandPrixUtilityLibrary::GetGrandPrixLastFocusedMenuSpeedClassId() {
    return EMenuSpeedClassId::NormalSpeed;
}

ESpeedClassId UGrandPrixUtilityLibrary::GetGrandPrixLastFocusedClassId() {
    return ESpeedClassId::NormalSpeed;
}

uint8 UGrandPrixUtilityLibrary::GetBlankIconHiddenCount() {
    return 0;
}

bool UGrandPrixUtilityLibrary::CheckOpenSuperSonicSpeed() {
    return false;
}

bool UGrandPrixUtilityLibrary::CheckGrandPrixRankEarnPointBonusExists() {
    return false;
}

TArray<EGrandPrixId> UGrandPrixUtilityLibrary::CalcSelectableGrandPrixIds() {
    return TArray<EGrandPrixId>();
}


