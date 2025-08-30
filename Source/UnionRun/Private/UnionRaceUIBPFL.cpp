#include "UnionRaceUIBPFL.h"

UUnionRaceUIBPFL::UUnionRaceUIBPFL() {
}

void UUnionRaceUIBPFL::SetTextBalloonHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetTeamRankHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetSpeedNumHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetRingHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetRedStarRingHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetRankHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetRaceHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetLapHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetItemWarningHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetItemIconHUDVisibleAll(bool bVisible) {
}

void UUnionRaceUIBPFL::SetItemIconHUDVisible(bool bVisible, int32 PlayerControllerIndex, bool bFlagOnly) {
}

void UUnionRaceUIBPFL::SetHitInfoHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetGuideButtonHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetGadgetIconHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetDebugRaceHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetCourseMapHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetCharaHeadHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetBoostHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetAirTrickHUDVisible(bool bVisible) {
}

void UUnionRaceUIBPFL::SetAimingHUDVisible(bool bVisible) {
}

bool UUnionRaceUIBPFL::IsRareItemBP(const EItemId& InItemId) {
    return false;
}

bool UUnionRaceUIBPFL::IsIgnoreAttackWarningItemUseForBack(const EItemId& InItemId) {
    return false;
}

bool UUnionRaceUIBPFL::IsDebugAimingHidden() {
    return false;
}

bool UUnionRaceUIBPFL::IsAttackWarningItem(const EItemId& InItemId) {
    return false;
}

void UUnionRaceUIBPFL::HiddenRaceHUD() {
}

void UUnionRaceUIBPFL::GetYellowDrillSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetT_RexSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetSplashSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetSlimeSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetSlicerSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

bool UUnionRaceUIBPFL::GetSelectorLabelByDriverId(const EDriverId InDriverId, FString& OutLabel) {
    return false;
}

void UUnionRaceUIBPFL::GetRocketPunchSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetRacerApproachSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetMonsterTruckSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetKingBoomBooSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetHomingPunchSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetDarkChaoSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetBodyCutSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetBlackBombSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetAttackItemDistSettings(const EUnionAttackItemInfoType& Type, const uint8& InId, float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

void UUnionRaceUIBPFL::GetAnchorSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist) {
}

ERaceItemCategory UUnionRaceUIBPFL::CalcItemCategory(const EItemId& InItemId) {
    return ERaceItemCategory::None;
}


