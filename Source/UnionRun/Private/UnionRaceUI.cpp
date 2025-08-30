#include "UnionRaceUI.h"

UUnionRaceUI::UUnionRaceUI() : UUserWidget(FObjectInitializer::Get()) {
    this->RaceSplitMode = EViewSplitMode::Split1;
    this->RaceMinimap = NULL;
    this->StartTextUI.AddDefaulted(4);
    this->JudgeStartUI.AddDefaulted(4);
    this->JudgeReturnDashUI.AddDefaulted(4);
    this->FinishTextUI.AddDefaulted(4);
    this->RingCountUI.AddDefaulted(4);
    this->AimingUI.AddDefaulted(4);
    this->ItemIconsState.AddDefaulted(4);
    this->ItemIconSet.AddDefaulted(4);
    this->ItemLotterySoundArr.AddDefaulted(4);
    this->YellowDrillShortTimeSoundArr.AddDefaulted(4);
    this->PackageRingPerformeCount.AddDefaulted(4);
    this->PackageRingPerformState.AddDefaulted(4);
    this->WarningArea.AddDefaulted(4);
    this->AttackWarningPerPlayer.AddDefaulted(4);
    this->RacerApproachInfo.AddDefaulted(4);
    this->HoldItemInfo.AddDefaulted(4);
    this->GadgetUI.AddDefaulted(4);
    this->HitInfoGroupUI.AddDefaulted(4);
    this->PlayerNameInfoUI.AddDefaulted(4);
    this->RivalStartUI.AddDefaulted(4);
    this->IsComArr.AddDefaulted(4);
    this->IsEnableRedStarRing = false;
    this->TimeTrialTime = NULL;
    this->IsRaceGroup = false;
    this->IsEndStateForPauseMenu = false;
    this->IsPaused = false;
}



void UUnionRaceUI::UpdateRaceHUD(float Delta) {
}

void UUnionRaceUI::UpdateMinimapIconByRacers_Implementation(UUnionRacers* InRacers) {
}



void UUnionRaceUI::UpdateHomingAimTargetedLocation_Implementation(int32 PlayerControllerIndex, const FVector& PlayerLocation) {
}

void UUnionRaceUI::UpdateHomingAimLocation_Implementation(int32 PlayerControllerIndex, const FVector& AimLocation) {
}

void UUnionRaceUI::UpdateByRacers_Implementation(UUnionRacers* InRacers) {
}

void UUnionRaceUI::UpdateByHoldItemInfo_Implementation(int32 PlayerControllerIndex, const FHoldItemInfo& InItemInfo) {
}

void UUnionRaceUI::UpdateAttackInfoPosition(UUserWidget* InAttackWidget, UWidget* InHUDWarningArea, float InPosRate) {
}

void UUnionRaceUI::SetWarningBeltVisible_Implementation(int32 PlayerControllerIndex, bool bVisible) {
}



void UUnionRaceUI::SetStartUIGaugeRate_Implementation(int32 PlayerControllerIndex, float GaugeRate) {
}

void UUnionRaceUI::SetStartDashParamSetting_Implementation(int32 PlayerControllerIndex, const FUnionRaceStartDashParam& InStartDashParam) {
}

void UUnionRaceUI::SetStartDashButtonUIVisible(const int32 PlayerControllerIndex, const bool bVisible) {
}


void UUnionRaceUI::SetRivalStartUI_Implementation(int32 PlayerControllerIndex, UUnionRacerStatusObject* RivalStatusObj) {
}



void UUnionRaceUI::SetReturnDashUIVisible_Implementation(int32 PlayerControllerIndex, bool bVisible) {
}

void UUnionRaceUI::SetReturnDashUIGaugeRate_Implementation(int32 PlayerControllerIndex, float GaugeRate) {
}

void UUnionRaceUI::SetReturnDashSetting_Implementation(int32 PlayerControllerIndex, float Pivot, float Range) {
}




void UUnionRaceUI::SetRacerIndex_Implementation(int32 PlayerControllerIndex, int32 InRacerIndex, bool NewIsLocalPlayer) {
}

void UUnionRaceUI::SetRacerApproachInfo(int32 PlayerControllerIndex, const TArray<URaceUISubApproachWarning*>& ApproachInfo) {
}

void UUnionRaceUI::SetRaceMinimapRef_Implementation(UUnionRaceMinimap* InRaceMinimap) {
}





void UUnionRaceUI::SetItemIconsState(int32 PlayerControllerIndex, const EUnionRaceHUDItemIconsState& InState) {
}




void UUnionRaceUI::SetDebugItemWarningHidden(bool flag) {
}

void UUnionRaceUI::SetDebugGuideButtonHidden(bool flag) {
}

void UUnionRaceUI::SetDebugBoostHidden(bool flag) {
}

void UUnionRaceUI::SetDebugAimingHidden(bool flag) {
}





void UUnionRaceUI::SetBeforeHomingAimUIVisible_Implementation(int32 PlayerControllerIndex, bool bVisible) {
}

void UUnionRaceUI::SetBeforeHomingAimTargetedUIVisible_Implementation(int32 PlayerControllerIndex, bool bVisible) {
}



void UUnionRaceUI::SetAfterHomingAimUIVisible_Implementation(int32 PlayerControllerIndex, bool bVisible) {
}

void UUnionRaceUI::SetAfterHomingAimTargetedUIVisible_Implementation(int32 PlayerControllerIndex, bool bVisible) {
}

void UUnionRaceUI::RemoveAttackInfoWidget_Implementation(UObject* InAttackItem) {
}


void UUnionRaceUI::OnPackageRingEffectSoundStart(APackageRingEffect* EffectActor) {
}

void UUnionRaceUI::OnPackageRingEffectFinished(APackageRingEffect* EffectActor) {
}


bool UUnionRaceUI::IsViewGhostReplay() {
    return false;
}

bool UUnionRaceUI::IsPubCameraPlayRace() {
    return false;
}

bool UUnionRaceUI::IsPlayingReplay() {
    return false;
}

bool UUnionRaceUI::IsLocalPlayer(int32 PlayerControllerIndex) const {
    return false;
}

bool UUnionRaceUI::IsGhostOnline() {
    return false;
}

bool UUnionRaceUI::IsDebugGuideButtonHidden() {
    return false;
}

bool UUnionRaceUI::IsDebugBoostHidden() {
    return false;
}

bool UUnionRaceUI::IsDebugAimingHidden() {
    return false;
}

bool UUnionRaceUI::IsBehindCurrentCamera(const int32 PlayerControllerIndex, FVector WorldLocation) {
    return false;
}

void UUnionRaceUI::InitCpp() {
}



bool UUnionRaceUI::GetWarningBeltVisible_Implementation(int32 PlayerControllerIndex) {
    return false;
}

FUserGadgetPresetData UUnionRaceUI::GetTimeTiralGadgetPresetData() {
    return FUserGadgetPresetData{};
}

UObject* UUnionRaceUI::GetStartDashButtonObject_Implementation(int32 PlayerControllerIndex) {
    return NULL;
}

UObject* UUnionRaceUI::GetReturnDashButtonObject_Implementation(int32 PlayerControllerIndex) {
    return NULL;
}

UUnionRaceUIResultRedStarRings* UUnionRaceUI::GetRedStarRings_Implementation(int32 PlayerControllerIndex) {
    return NULL;
}

int32 UUnionRaceUI::GetItemPackageRingCount_New(int32 PlayerControllerIndex, EItemInfoType ItemInfoType) {
    return 0;
}

int32 UUnionRaceUI::GetItemPackageRingCount(int32 PlayerControllerIndex, bool IsMain) {
    return 0;
}

void UUnionRaceUI::GetItemIconsState(int32 PlayerControllerIndex, EUnionRaceHUDItemIconsState& OutState) {
}

int32 UUnionRaceUI::GetItemHoldCount_New(int32 PlayerControllerIndex, EItemInfoType ItemInfoType) {
    return 0;
}

int32 UUnionRaceUI::GetItemHoldCount(int32 PlayerControllerIndex, bool IsMain) {
    return 0;
}


void UUnionRaceUI::FireCourseMapCharaSpin_Implementation(int32 RacerIndex) {
}

void UUnionRaceUI::FireAirTrickInfo_Implementation(int32 PlayerControllerIndex, int32 SuccessCount, int32 SuccessBonusCount) {
}

void UUnionRaceUI::DbgDrawTeamGaugeRate(int32 PlayerControllerIndex, float TransChargeRate, float LocalChargeRate, float GaugePercent, bool IsForce, bool IsBoost) {
}

void UUnionRaceUI::DbgDrawTeamGaugeData(int32 PlayerControllerIndex) {
}

void UUnionRaceUI::AddAttackItemObject_Implementation(UObject* InAttackItem) {
}


