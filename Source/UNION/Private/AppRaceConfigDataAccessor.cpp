#include "AppRaceConfigDataAccessor.h"

UAppRaceConfigDataAccessor::UAppRaceConfigDataAccessor() {
}

void UAppRaceConfigDataAccessor::UpdatePartyRaceRivalLevelAdjust() {
}

void UAppRaceConfigDataAccessor::SetViewGhostReplay(bool bIsView) {
}

void UAppRaceConfigDataAccessor::SetUsingDonpaTicketRestart(bool bUsing) {
}

void UAppRaceConfigDataAccessor::SetUseRentalGadgetPlate(const bool InUse) {
}

void UAppRaceConfigDataAccessor::SetUELog(const FString& LogString) {
}

void UAppRaceConfigDataAccessor::SetTSRKeyAssignEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex) {
}

void UAppRaceConfigDataAccessor::SetTravelCourseTargetAll(bool InTargetAll) {
}

void UAppRaceConfigDataAccessor::SetTravelCourseSettingManualSetEnabled(bool InEnable) {
}

void UAppRaceConfigDataAccessor::SetTravelCourseScreenManualSetEnabled(bool InEnable) {
}

void UAppRaceConfigDataAccessor::SetTravelCourseManualSetEnabled(bool InEnable) {
}

void UAppRaceConfigDataAccessor::SetTimeTrialRewardReceived(bool bIsReceived) {
}

void UAppRaceConfigDataAccessor::SetTimeTrialGadgetPreset(const FUserGadgetPresetData InGadgetIds) {
}

void UAppRaceConfigDataAccessor::SetTimeTrialDisableGadgetIds(const TArray<EGadgetId> InGadgetIds) {
}

void UAppRaceConfigDataAccessor::SetTimeTrialCurrentStageVersion(const int32& InStageVersion) {
}

void UAppRaceConfigDataAccessor::SetSelectedStageTravelRingScreenType(int32 DomainIndex, ETravelRingScreenType ScreenType) {
}

void UAppRaceConfigDataAccessor::SetSelectedStageTravelRingIrregularEvent(int32 DomainIndex, EIrregularEventId IrregularEvent) {
}

void UAppRaceConfigDataAccessor::SetSelectedStageSettings(const TArray<FAppRaceStageSetting>& NewSettings) {
}

void UAppRaceConfigDataAccessor::SetSelectedStageSetting(int32 DomainIndex, const FAppRaceStageSetting& NewSetting, bool bAutoExtend) {
}

void UAppRaceConfigDataAccessor::SetSelectedStageIds(const TArray<EStageId>& NewIds, bool bResetOtherSetting) {
}

void UAppRaceConfigDataAccessor::SetSelectedStageId(int32 StageIndex, EStageId NewId, bool bResetSetting) {
}

void UAppRaceConfigDataAccessor::SetSelectedRaceType(ERaceType NewId) {
}

void UAppRaceConfigDataAccessor::SetSelectedRaceParkPresetId(EPartyRacePreset NewId) {
}

void UAppRaceConfigDataAccessor::SetSelectedPlayerCount(int32 InPlayerCount) {
}

void UAppRaceConfigDataAccessor::SetSelectedMachineType(int32 InPlayerIndex, ECarStatusType InMachineType, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceConfigDataAccessor::SetSelectedMachineID(int32 InPlayerIndex, int32 InNewId, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceConfigDataAccessor::SetSelectedGrandPrixId(EGrandPrixId NewId) {
}

void UAppRaceConfigDataAccessor::SetSelectedGameModeId(EGameModeId NewId) {
}

void UAppRaceConfigDataAccessor::SetSelectedGadgetPlateData(int32 InPlayerIndex, const FGadgetPlateUIData& InGadgetPlateData) {
}

void UAppRaceConfigDataAccessor::SetSelectedDriverId(int32 InPlayerIndex, EDriverId InNewId, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceConfigDataAccessor::SetSelectedClassId(ESpeedClassId NewId) {
}

void UAppRaceConfigDataAccessor::SetSelected2ndLapStageSetting(TArray<EStageId> StageIds) {
}

void UAppRaceConfigDataAccessor::SetRivalType(EDriverId DriverId, ERivalType RivalType) {
}

void UAppRaceConfigDataAccessor::SetRentalGadgetPlatePresetData(const FUserGadgetPresetData InPlateUIData) {
}

void UAppRaceConfigDataAccessor::SetRaceTestEnabled(bool bEnabled) {
}

void UAppRaceConfigDataAccessor::SetRaceTestConfigName(const FString& ConfigName) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingTravelCourseChange(EMCEventTravelCourseChange InMCEventTravelCourseChange) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingTopPointSettlement(int32 InSettingTopPointSettlement) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingThornBallType(ECustomRaceThornBallType InThornBallType) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingSpeedClassByMenuSpeedClass(const EMenuSpeedClassId InMenuSpeedClass, bool InOnlyRaceSpeedClass) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingSpeedClass(const ESpeedClassId InSpeedClass) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingRingLostSetting(ECustomRaceRingLostSetting InRaceSettingRingLostSetting) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingRaceCount(int32 InMaxRaceCount) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingPointUpChanceId(int32 ID) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingMCEventSwitchArr(const TArray<bool>& InMCEventSwitch) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingMCEvent(ERaceSettingSpecialMCEvent InRaceSettingSpecialMCEvent) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingMatchRule(const ERaceSettingMatchRule InMatchRule) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingItemAppearanceRule(ERaceSettingItemAppearanceRule InRaceSettingItemAppearanceRule) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingIrregularGate(EMCEventIrregularGate InMCEventIrregularGate) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingHandicap(ERaceSettingHandicap InRaceSettingHandicap) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingGroupMode(const ERaceSettingGroupMode InGroupMode) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingGrouping(const ERaceSettingGrouping InGroupSetting) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingGoalPoint(ERaceSettingGoalPoint RaceSettingGoalPoint) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingGadgetUsing(ERaceSettingSpecialGadgetUsing InRaceSettingSpecialGadgetUsing) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingCourseSelecting(ERaceSettingCourseSelecting InRaceSettingCourseSelecting) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingComSpeed(ERaceSettingComSpeed InRaceSettingComSpeed) {
}

void UAppRaceConfigDataAccessor::SetRaceSettingAutoGetItem(ERaceSettingSpecialAutoGetItem InRaceSettingSpecialAutoGetItem) {
}

void UAppRaceConfigDataAccessor::SetRacerRom1stMachineID(int32 InRacerIndex, int32 InNewId) {
}

void UAppRaceConfigDataAccessor::SetRacerPre1stBehaviorID(int32 InRacerIndex, int32 InNewId) {
}

void UAppRaceConfigDataAccessor::SetRacerName(int32 InRacerIndex, const FText& InRacerName) {
}

void UAppRaceConfigDataAccessor::SetRacerMachineType(int32 InRacerIndex, ECarStatusType InMachineType) {
}

void UAppRaceConfigDataAccessor::SetRacerMachineID(int32 InRacerIndex, int32 InNewId) {
}

void UAppRaceConfigDataAccessor::SetRacerMachineCustomizeData(int32 InRacerIndex, const FUserMachineCustomizeData& MachineCustomizeData) {
}

void UAppRaceConfigDataAccessor::SetRacerMachineCustomize(int32 InRacerIndex, const FVehicleModelDefine& InMachineCustomize) {
}

void UAppRaceConfigDataAccessor::SetRaceRivalRacerIndex(EDriverId DriverId, int32 RacerIndex) {
}

void UAppRaceConfigDataAccessor::SetRaceRivalLevel(EDriverId DriverId, uint8 RivalLevel) {
}

void UAppRaceConfigDataAccessor::SetRaceRivalDriverIds(const TArray<EDriverId>& DriverIds) {
}

void UAppRaceConfigDataAccessor::SetRaceRivalBaseLevel(EDriverId DriverId, uint8 RivalBaseLevel) {
}

void UAppRaceConfigDataAccessor::SetRacerGroupIndex(int32 InRacerIndex, int32 InGroupIndex) {
}

void UAppRaceConfigDataAccessor::SetRacerGadgetPlateData(int32 InRacerIndex, const FGadgetPlateUIData& InGadgetPlateData) {
}

void UAppRaceConfigDataAccessor::SetRacerDriverId(int32 InRacerIndex, EDriverId InNewId) {
}

void UAppRaceConfigDataAccessor::SetRacerCount(int32 InRacerCount) {
}

void UAppRaceConfigDataAccessor::SetRacerComLv(int32 InRacerIndex, int32 InComLv) {
}

void UAppRaceConfigDataAccessor::SetRacerCOMId(int32 InRacerIndex, int32 InCOMId) {
}

void UAppRaceConfigDataAccessor::SetRacerComControlType(int32 InRacerIndex, int32 InComControlType) {
}

void UAppRaceConfigDataAccessor::SetRaceHintAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex) {
}

void UAppRaceConfigDataAccessor::SetRaceDebugParamGenericInt(int32 NewValue) {
}

void UAppRaceConfigDataAccessor::SetRaceDebugParamFinalLap(bool NewValue) {
}

void UAppRaceConfigDataAccessor::SetRaceDebugParam(const FUnionRaceDebugParam& NewValue) {
}

void UAppRaceConfigDataAccessor::SetRaceBonusSetting(ERaceBonus RaceBonusSetting) {
}

void UAppRaceConfigDataAccessor::SetPredictTestInfo(FPredictTestInfo PredictTestInfo) {
}

void UAppRaceConfigDataAccessor::SetPlayedSquadPlayerCount(int32 InPlayerCount) {
}

void UAppRaceConfigDataAccessor::SetPartyRaceRivalLevelDown(bool IsLevelDown) {
}

void UAppRaceConfigDataAccessor::SetPartyRaceRivalLevelAdjust(int32 NewLevelAdjust) {
}

void UAppRaceConfigDataAccessor::SetOnlineRatingPrev(int32 InOnlineRatingPrev) {
}

void UAppRaceConfigDataAccessor::SetOnlineRating(int32 InOnlineRating) {
}

void UAppRaceConfigDataAccessor::SetOnlineRandomSeeds(const TArray<int32>& NewRandamSeeds) {
}

void UAppRaceConfigDataAccessor::SetOnlineRacerIndex(int32 InRacerIndex) {
}

void UAppRaceConfigDataAccessor::SetOnlineRaceResultWinCount(int32 InRaceResultWinCount) {
}

void UAppRaceConfigDataAccessor::SetOnlineRaceResultRank(int32 InRaceResultRank) {
}

void UAppRaceConfigDataAccessor::SetOnlineMatchCount(int32 InMatchCount) {
}

void UAppRaceConfigDataAccessor::SetOnlineEntryUserIds(const TArray<FString>& InEntryUserIds) {
}

void UAppRaceConfigDataAccessor::SetObjectPlacementTypeSetting(EObjectPlacementType ObjectPlacementType) {
}

void UAppRaceConfigDataAccessor::SetMaxRaceCount(int32 InNewMaxRaceCount, bool bCurrentCountReset) {
}

void UAppRaceConfigDataAccessor::SetMapVisibleAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex) {
}

void UAppRaceConfigDataAccessor::SetMainCourseAllSelectable(bool InAllSelectable) {
}

void UAppRaceConfigDataAccessor::SetMachineCustomize(int32 InPlayerIndex, const FVehicleModelDefine& InMachineCustomize, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceConfigDataAccessor::SetLotteryTableType(ELotteryTableType LotteryTableType) {
}

void UAppRaceConfigDataAccessor::SetLineGuideDisable(bool bDisable) {
}

void UAppRaceConfigDataAccessor::SetLeast1PlayFromPowerOn(bool InPlayed) {
}

void UAppRaceConfigDataAccessor::SetJoinRaceSquad(bool bIsSquad) {
}

void UAppRaceConfigDataAccessor::SetItemSwitchSettingMenuEnable(bool InEnable) {
}

void UAppRaceConfigDataAccessor::SetItemSwitchSettingAllFromSave(const FItemSwitchSettingSave& InItemSwitchSetting) {
}

void UAppRaceConfigDataAccessor::SetItemSwitchSettingAll(const FItemSwitchSetting& InItemSwitchSetting) {
}

void UAppRaceConfigDataAccessor::SetItemSwitchSetting(int32 InGroup, const FItemSwitchSettingSingle& InItemSwitchSetting) {
}

void UAppRaceConfigDataAccessor::SetIsSelectedMirrorCourse(bool InMirrorCourse) {
}

void UAppRaceConfigDataAccessor::SetIsRivalRaceFriendMatch(bool IsRivalRace) {
}

void UAppRaceConfigDataAccessor::SetIsFriendMatchHost(bool IsHost) {
}

void UAppRaceConfigDataAccessor::SetHandleAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex) {
}

void UAppRaceConfigDataAccessor::SetGroupRaceRuleSetting(EGroupRaceRule GroupRaceRuleSetting) {
}

void UAppRaceConfigDataAccessor::SetGroupColorId(int32 InGroupIndex, EGroupColorId InGroupColorId) {
}

void UAppRaceConfigDataAccessor::SetGhostOnline(bool bIsOnline) {
}

void UAppRaceConfigDataAccessor::SetGhostMachineDisable(bool bDisable) {
}

void UAppRaceConfigDataAccessor::SetGhostDataOnline(bool InGhostOnline) {
}

void UAppRaceConfigDataAccessor::SetGadgetPlateRankUp(bool bRankUp) {
}

void UAppRaceConfigDataAccessor::SetGadgetCustomizeLastSelected(int32 PlayerIndex, int32 GadgetIndex) {
}

void UAppRaceConfigDataAccessor::SetForceEnableMCEvent(bool InTargetAll) {
}

void UAppRaceConfigDataAccessor::SetFestaSpecialRuleContinuous(const bool InEnabled) {
}

void UAppRaceConfigDataAccessor::SetFestaRaceRuleSetting(EFestaRaceRule FestaRaceRuleSetting) {
}

void UAppRaceConfigDataAccessor::SetDefaultDisableItemArr(const TArray<EItemId>& InDisableItemArr) {
}

void UAppRaceConfigDataAccessor::SetCustomRaceTripleCourseSetting(ECustomRaceTripleCourseSetting TripleCourseSetting) {
}

void UAppRaceConfigDataAccessor::SetCustomRaceSettingPointUpChance(ECustomRaceSettingPointUpChance PointUpChanceSetting) {
}

void UAppRaceConfigDataAccessor::SetCustomRaceSettingBP(const FCustomRaceSetting& InCustomRaceSetting) {
}

void UAppRaceConfigDataAccessor::SetCustomRaceRingLostSetting(ECustomRaceRingLostSetting RingLostSetting) {
}

void UAppRaceConfigDataAccessor::SetCustomRaceIrregularSetting(ECustomRaceIrregularSetting IrregularSetting) {
}

void UAppRaceConfigDataAccessor::SetCurrentRaceCount(int32 InNewRaceCount) {
}

void UAppRaceConfigDataAccessor::SetCurrentDisableItemArr(const TArray<EItemId>& InDisableItemArr) {
}

void UAppRaceConfigDataAccessor::SetControllerGyroAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex) {
}

void UAppRaceConfigDataAccessor::SetAverageOnlineRank(int32 InAverageAdjustOnlineRate) {
}

void UAppRaceConfigDataAccessor::SetAutoItemAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex) {
}

void UAppRaceConfigDataAccessor::SetAppRaceRacerConfigData(int32 InRacerIndex, const FAppRaceRacerConfigData& InNewData, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceConfigDataAccessor::SetAppRacePlayerConfigData(int32 InPlayerIndex, const FAppRacePlayerConfigData& InNewData, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceConfigDataAccessor::SetAppRaceConfigData(const FAppRaceConfigData& NewData) {
}

void UAppRaceConfigDataAccessor::SetApplyLocalPlayerRaceDebugParam(bool bInAllChange) {
}

void UAppRaceConfigDataAccessor::SetApplyAllPlayerRaceDebugParam(bool bInAllChange) {
}

void UAppRaceConfigDataAccessor::SetAlreadyRunStageIds(const TArray<EStageId>& InStageIds) {
}

void UAppRaceConfigDataAccessor::SetAirTrickAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex) {
}

void UAppRaceConfigDataAccessor::SetAcceleratorAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex) {
}

void UAppRaceConfigDataAccessor::ResetSelected2ndLapStageSetting() {
}

void UAppRaceConfigDataAccessor::ResetItemSwitchSettingAll() {
}

void UAppRaceConfigDataAccessor::ResetCustomRaceSetting() {
}

void UAppRaceConfigDataAccessor::ResetCurrentRaceCount() {
}

void UAppRaceConfigDataAccessor::RemoveRaceRivalDriverId(EDriverId DriverId) {
}

bool UAppRaceConfigDataAccessor::ProceedRaceCount() {
    return false;
}

bool UAppRaceConfigDataAccessor::ProceedNextPredictTestCase() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsViewGhostReplay() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsValidSubsystem() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsUseRentalGadgetPlate() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsTSRKeyAssignEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::IsTimeTrialRewardReceived() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsSelected4P() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsSelected3P() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsSelected2P() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsSelected1P() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsRivalRaceFriendMatch() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsRaceTestEnabled() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsRacerPlayer(int32 InRacerIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::IsRaceRivalByRacerIndex(int32 RacerIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::IsRaceRivalByDriverId(EDriverId DriverId) {
    return false;
}

bool UAppRaceConfigDataAccessor::IsRacerCOMDefaultParts() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsRaceHintAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::IsPredictTestEnabled() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsMapVisibleAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::IsLineGuideDisable() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsJoiningSquadRace() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsItemSwitchSettingMenuEnable() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsHandleAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::IsGroupRaceSpeedClass() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsGroupRaceFestaColor() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsGroupRace() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsGhostOnline() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsGhostMachineDisable() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsFriendMatchHost() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsFinalRace() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsFestaSpecialRuleContinuous() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsFestaRule() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsExecutePointUpChanceMCEvent() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsControllerGyroAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::IsAutoItemAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::IsApplyLocalPlayerRaceDebugParam() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsApplyAllPlayerRaceDebugParam() {
    return false;
}

bool UAppRaceConfigDataAccessor::IsAirTrickAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::IsAcceleratorAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

void UAppRaceConfigDataAccessor::InsertRaceRivalDriverId(EDriverId DriverId) {
}

void UAppRaceConfigDataAccessor::InitRaceSetting(EGameModeId GameMode) {
}

bool UAppRaceConfigDataAccessor::InitPredictTest(const FString& PredictData) {
    return false;
}

void UAppRaceConfigDataAccessor::InitializeCustomRaceSetting() {
}

bool UAppRaceConfigDataAccessor::HasRaceRival() {
    return false;
}

bool UAppRaceConfigDataAccessor::GetUsingDonpaTicketRestart() {
    return false;
}

bool UAppRaceConfigDataAccessor::GetTravelCourseTargetAll() {
    return false;
}

bool UAppRaceConfigDataAccessor::GetTravelCourseSettingManualSetEnabled() {
    return false;
}

bool UAppRaceConfigDataAccessor::GetTravelCourseScreenManualSetEnabled() {
    return false;
}

bool UAppRaceConfigDataAccessor::GetTravelCourseManualSetEnabled() {
    return false;
}

FTimeTrialSetting UAppRaceConfigDataAccessor::GetTimeTrialSetting() {
    return FTimeTrialSetting{};
}

FUserGadgetPresetData UAppRaceConfigDataAccessor::GetTimeTrialGadgetPreset() {
    return FUserGadgetPresetData{};
}

TArray<EGadgetId> UAppRaceConfigDataAccessor::GetTimeTrialDisableGadgetIds() {
    return TArray<EGadgetId>();
}

int32 UAppRaceConfigDataAccessor::GetTimeTrialCurrentStageVersion() {
    return 0;
}

TArray<FAppRaceStageSetting> UAppRaceConfigDataAccessor::GetSelectedStageSettings() {
    return TArray<FAppRaceStageSetting>();
}

FAppRaceStageSetting UAppRaceConfigDataAccessor::GetSelectedStageSetting(int32 DomainIndex) {
    return FAppRaceStageSetting{};
}

TArray<EStageId> UAppRaceConfigDataAccessor::GetSelectedStageIds() {
    return TArray<EStageId>();
}

ERaceType UAppRaceConfigDataAccessor::GetSelectedRaceType() {
    return ERaceType::TravelRace;
}

bool UAppRaceConfigDataAccessor::GetSelectedRaceParkPresetIsIndividual() {
    return false;
}

EPartyRacePreset UAppRaceConfigDataAccessor::GetSelectedRaceParkPresetId() {
    return EPartyRacePreset::Casual;
}

int32 UAppRaceConfigDataAccessor::GetSelectedPlayerCount() {
    return 0;
}

ERaceMirrorSetting UAppRaceConfigDataAccessor::GetSelectedMirrorSetting() {
    return ERaceMirrorSetting::Normal;
}

void UAppRaceConfigDataAccessor::GetSelectedMachineType(int32 InPlayerIndex, ECarStatusType& OutMachineType, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceConfigDataAccessor::GetSelectedMachineID(int32 InPlayerIndex, int32& OutId, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

EGrandPrixId UAppRaceConfigDataAccessor::GetSelectedGrandPrixId() {
    return EGrandPrixId::InValid;
}

EGameModeId UAppRaceConfigDataAccessor::GetSelectedGameModeId() {
    return EGameModeId::None;
}

void UAppRaceConfigDataAccessor::GetSelectedGadgetPlateData(int32 InPlayerIndex, FGadgetPlateUIData& OutGadgetPlateData) {
}

void UAppRaceConfigDataAccessor::GetSelectedDriverId(int32 InPlayerIndex, EDriverId& OutId, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

ESpeedClassId UAppRaceConfigDataAccessor::GetSelectedClassId() {
    return ESpeedClassId::NormalSpeed;
}

TArray<EStageId> UAppRaceConfigDataAccessor::GetSelected2ndLapStageSetting() {
    return TArray<EStageId>();
}

ERivalType UAppRaceConfigDataAccessor::GetRivalTypesRacerIndex(int32 RacerIndex) {
    return ERivalType::None;
}

TArray<ERivalType> UAppRaceConfigDataAccessor::GetRivalTypes() {
    return TArray<ERivalType>();
}

FUserGadgetPresetData UAppRaceConfigDataAccessor::GetRentalGadgetPlatePresetData() {
    return FUserGadgetPresetData{};
}

FString UAppRaceConfigDataAccessor::GetRaceTestConfigName() {
    return TEXT("");
}

EMCEventTravelCourseChange UAppRaceConfigDataAccessor::GetRaceSettingTravelCourseChange() {
    return EMCEventTravelCourseChange::None;
}

int32 UAppRaceConfigDataAccessor::GetRaceSettingTopPointSettlement() {
    return 0;
}

ECustomRaceThornBallType UAppRaceConfigDataAccessor::GetRaceSettingThornBallType() {
    return ECustomRaceThornBallType::Normal;
}

ESpeedClassId UAppRaceConfigDataAccessor::GetRaceSettingSpeedClass() {
    return ESpeedClassId::NormalSpeed;
}

ECustomRaceRingLostSetting UAppRaceConfigDataAccessor::GetRaceSettingRingLostSetting() {
    return ECustomRaceRingLostSetting::Few;
}

int32 UAppRaceConfigDataAccessor::GetRaceSettingRaceCount() {
    return 0;
}

int32 UAppRaceConfigDataAccessor::GetRaceSettingPointUpChanceId() {
    return 0;
}

TArray<bool> UAppRaceConfigDataAccessor::GetRaceSettingMCEventSwitchArr() {
    return TArray<bool>();
}

ERaceSettingSpecialMCEvent UAppRaceConfigDataAccessor::GetRaceSettingMCEvent() {
    return ERaceSettingSpecialMCEvent::Disable;
}

ERaceSettingMatchRule UAppRaceConfigDataAccessor::GetRaceSettingMatchRule() {
    return ERaceSettingMatchRule::Point;
}

ERaceSettingItemAppearanceRule UAppRaceConfigDataAccessor::GetRaceSettingItemAppearanceRule() {
    return ERaceSettingItemAppearanceRule::Normal;
}

EMCEventIrregularGate UAppRaceConfigDataAccessor::GetRaceSettingIrregularGate() {
    return EMCEventIrregularGate::None;
}

ERaceSettingHandicap UAppRaceConfigDataAccessor::GetRaceSettingHandicap() {
    return ERaceSettingHandicap::NothingHandicap;
}

ERaceSettingGroupMode UAppRaceConfigDataAccessor::GetRaceSettingGroupMode() {
    return ERaceSettingGroupMode::Normal;
}

ERaceSettingGrouping UAppRaceConfigDataAccessor::GetRaceSettingGrouping() {
    return ERaceSettingGrouping::Individual;
}

ERaceSettingGoalPoint UAppRaceConfigDataAccessor::GetRaceSettingGoalPoint() {
    return ERaceSettingGoalPoint::Normal;
}

ERaceSettingSpecialGadgetUsing UAppRaceConfigDataAccessor::GetRaceSettingGadgetUsing() {
    return ERaceSettingSpecialGadgetUsing::EnableGadget;
}

ERaceSettingCourseSelecting UAppRaceConfigDataAccessor::GetRaceSettingCourseSelecting() {
    return ERaceSettingCourseSelecting::EveryTimeManualSelect;
}

ERaceSettingComSpeed UAppRaceConfigDataAccessor::GetRaceSettingComSpeed() {
    return ERaceSettingComSpeed::NothingCom;
}

ERaceSettingSpecialAutoGetItem UAppRaceConfigDataAccessor::GetRaceSettingAutoGetItem() {
    return ERaceSettingSpecialAutoGetItem::DisableAutoItemGet;
}

FString UAppRaceConfigDataAccessor::GetRacerUserId(int32 InRacerIndex) {
    return TEXT("");
}

void UAppRaceConfigDataAccessor::GetRacerRom1stMachineID(int32 InRacerIndex, int32& OutId) {
}

int32 UAppRaceConfigDataAccessor::GetRacerRate(int32 InRacerIndex) {
    return 0;
}

void UAppRaceConfigDataAccessor::GetRacerName(int32 InRacerIndex, FText& OutRacerName) {
}

void UAppRaceConfigDataAccessor::GetRacerMachineType(int32 InRacerIndex, ECarStatusType& OutMachineType) {
}

void UAppRaceConfigDataAccessor::GetRacerMachineID(int32 InRacerIndex, int32& OutId) {
}

void UAppRaceConfigDataAccessor::GetRacerMachineCustomizeData(int32 InRacerIndex, FUserMachineCustomizeData& MachineCustomizeData) {
}

void UAppRaceConfigDataAccessor::GetRacerMachineCustomize(int32 InRacerIndex, FVehicleModelDefine& OutMachineCustomize) {
}

TArray<int32> UAppRaceConfigDataAccessor::GetRaceRivalRacerIndices() {
    return TArray<int32>();
}

uint8 UAppRaceConfigDataAccessor::GetRaceRivalLevelRacerIndex(int32 RacerIndex) {
    return 0;
}

TArray<uint8> UAppRaceConfigDataAccessor::GetRaceRivalLevel() {
    return TArray<uint8>();
}

TArray<EDriverId> UAppRaceConfigDataAccessor::GetRaceRivalDriverIds() {
    return TArray<EDriverId>();
}

uint8 UAppRaceConfigDataAccessor::GetRaceRivalBaseLevelRacerIndex(int32 RacerIndex) {
    return 0;
}

TArray<uint8> UAppRaceConfigDataAccessor::GetRaceRivalBaseLevel() {
    return TArray<uint8>();
}

int32 UAppRaceConfigDataAccessor::GetRacerHonorTitleId(int32 InRacerIndex) {
    return 0;
}

void UAppRaceConfigDataAccessor::GetRacerGadgetPlateData(int32 InRacerIndex, FGadgetPlateUIData& OutGadgetPlateData) {
}

void UAppRaceConfigDataAccessor::GetRaceRequestData(EDriverId& OutDriverId, EStageId& OutMainStageId, FCommon_MachineData& OutMachineCustomizeData, FCommon_GadgetData& OutGadgetPlateData, FCommon_DegreeData& OutDegreeData) {
}

void UAppRaceConfigDataAccessor::GetRacerDriverId(int32 InRacerIndex, EDriverId& OutId) {
}

int32 UAppRaceConfigDataAccessor::GetRacerCount() {
    return 0;
}

bool UAppRaceConfigDataAccessor::GetRacerComLv(int32 InRacerIndex, int32& OutCOMLv) {
    return false;
}

bool UAppRaceConfigDataAccessor::GetRacerCOMId(int32 InRacerIndex, int32& OutCOMId) {
    return false;
}

bool UAppRaceConfigDataAccessor::GetRacerComControlType(int32 InRacerIndex, int32& OutComControlType) {
    return false;
}

int32 UAppRaceConfigDataAccessor::GetRaceDebugParamGenericInt() {
    return 0;
}

bool UAppRaceConfigDataAccessor::GetRaceDebugParamFinalLap() {
    return false;
}

FUnionRaceDebugParam UAppRaceConfigDataAccessor::GetRaceDebugParam() {
    return FUnionRaceDebugParam{};
}

ERaceBonus UAppRaceConfigDataAccessor::GetRaceBonusSetting() {
    return ERaceBonus::None;
}

FPredictTestInfo UAppRaceConfigDataAccessor::GetPredictTestInfo() {
    return FPredictTestInfo{};
}

int32 UAppRaceConfigDataAccessor::GetPlayerRacerIndex() {
    return 0;
}

int32 UAppRaceConfigDataAccessor::GetPlayedSquadPlayerCount() {
    return 0;
}

ECrossplayPlatform UAppRaceConfigDataAccessor::GetPlatformType(int32 InRacerIndex) {
    return ECrossplayPlatform::Xbox;
}

int32 UAppRaceConfigDataAccessor::GetPlatformIconIndex(int32 InRacerIndex) {
    return 0;
}

int32 UAppRaceConfigDataAccessor::GetPlatformIconComIndex() {
    return 0;
}

bool UAppRaceConfigDataAccessor::GetPartyRaceRivalLevelDown() {
    return false;
}

int32 UAppRaceConfigDataAccessor::GetPartyRaceRivalLevelAdjust() {
    return 0;
}

int32 UAppRaceConfigDataAccessor::GetOnlineRatingPrev() {
    return 0;
}

int32 UAppRaceConfigDataAccessor::GetOnlineRating() {
    return 0;
}

TArray<int32> UAppRaceConfigDataAccessor::GetOnlineRandomSeeds() {
    return TArray<int32>();
}

int32 UAppRaceConfigDataAccessor::GetOnlineRacerIndex() {
    return 0;
}

int32 UAppRaceConfigDataAccessor::GetOnlineRaceResultWinCount() {
    return 0;
}

int32 UAppRaceConfigDataAccessor::GetOnlineRaceResultRank() {
    return 0;
}

int32 UAppRaceConfigDataAccessor::GetOnlineMatchCount() {
    return 0;
}

TArray<FString> UAppRaceConfigDataAccessor::GetOnlineEntryUserIds() {
    return TArray<FString>();
}

EObjectPlacementType UAppRaceConfigDataAccessor::GetObjectPlacementTypeSetting() {
    return EObjectPlacementType::Common;
}

EMenuSpeedClassId UAppRaceConfigDataAccessor::GetMenuSpeedClassIdFromCustomRaceSetting() {
    return EMenuSpeedClassId::NormalSpeed;
}

FMenuGroupRaceRuleData UAppRaceConfigDataAccessor::GetMenuGroupRuleData() {
    return FMenuGroupRaceRuleData{};
}

FMenuGroupRaceEnergyData UAppRaceConfigDataAccessor::GetMenuGroupEnergyData() {
    return FMenuGroupRaceEnergyData{};
}

FMenuGroupRaceBonusData UAppRaceConfigDataAccessor::GetMenuGroupBonusData() {
    return FMenuGroupRaceBonusData{};
}

int32 UAppRaceConfigDataAccessor::GetMaxRaceCount() {
    return 0;
}

bool UAppRaceConfigDataAccessor::GetMainCourseAllSelectable() {
    return false;
}

void UAppRaceConfigDataAccessor::GetMachineCustomize(int32 InPlayerIndex, FVehicleModelDefine& OutMachineCustomize, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

ELotteryTableType UAppRaceConfigDataAccessor::GetLotteryTableType() {
    return ELotteryTableType::Unknown;
}

bool UAppRaceConfigDataAccessor::GetLeast1PlayFromPowerOn() {
    return false;
}

void UAppRaceConfigDataAccessor::GetItemSwitchSettingBP(FItemSwitchSetting& OutItemSwitchSetting) {
}

bool UAppRaceConfigDataAccessor::GetIsSelectedMirrorCourse() {
    return false;
}

bool UAppRaceConfigDataAccessor::GetIsRivalSkinExistsGameMode() {
    return false;
}

bool UAppRaceConfigDataAccessor::GetIsRivalExistsGameMode() {
    return false;
}

bool UAppRaceConfigDataAccessor::GetIsOnlineGameMode() {
    return false;
}

bool UAppRaceConfigDataAccessor::GetIsAddFairPointGameMode() {
    return false;
}

TArray<ERewardType> UAppRaceConfigDataAccessor::GetInGameGettingRewards() {
    return TArray<ERewardType>();
}

EGroupRaceRule UAppRaceConfigDataAccessor::GetGroupRaceRuleSetting() {
    return EGroupRaceRule::None;
}

EMachineColorPresetId UAppRaceConfigDataAccessor::GetGroupMachineColorPresetId(int32 InGroupIndex) {
    return EMachineColorPresetId::ColorPreset01;
}

int32 UAppRaceConfigDataAccessor::GetGroupIndex(int32 InRacerIndex) {
    return 0;
}

EGroupColorId UAppRaceConfigDataAccessor::GetGroupColorId(int32 InGroupIndex) {
    return EGroupColorId::None;
}

bool UAppRaceConfigDataAccessor::GetGhostDataOnline() {
    return false;
}

bool UAppRaceConfigDataAccessor::GetGadgetPlateRankUp() {
    return false;
}

int32 UAppRaceConfigDataAccessor::GetGadgetCustomizeLastSelected(int32 PlayerIndex) {
    return 0;
}

bool UAppRaceConfigDataAccessor::GetForceEnableMCEvent() {
    return false;
}

EFestaRaceRule UAppRaceConfigDataAccessor::GetFestaRaceRuleSetting() {
    return EFestaRaceRule::NoFesta;
}

EFestaChanceUpType UAppRaceConfigDataAccessor::GetFestaChanceUpType() {
    return EFestaChanceUpType::None;
}

int32 UAppRaceConfigDataAccessor::GetFestaChanceUpRatio() {
    return 0;
}

ECrossplayPlatform UAppRaceConfigDataAccessor::GetEAppSupportedPlatformToECrossplayPlatform(EAppSupportedPlatform InAppSupportedPlatform) {
    return ECrossplayPlatform::Xbox;
}

TArray<EItemId> UAppRaceConfigDataAccessor::GetDefaultDisableItemArr() {
    return TArray<EItemId>();
}

ECustomRaceTripleCourseSetting UAppRaceConfigDataAccessor::GetCustomRaceTripleCourseSetting() {
    return ECustomRaceTripleCourseSetting::Enable;
}

ECustomRaceSettingPointUpChance UAppRaceConfigDataAccessor::GetCustomRaceSettingPointUpChance() {
    return ECustomRaceSettingPointUpChance::Enable;
}

void UAppRaceConfigDataAccessor::GetCustomRaceSettingBP(FCustomRaceSetting& OutCustomRaceSetting) {
}

ECustomRaceRingLostSetting UAppRaceConfigDataAccessor::GetCustomRaceRingLostSetting() {
    return ECustomRaceRingLostSetting::Few;
}

ECustomRaceIrregularSetting UAppRaceConfigDataAccessor::GetCustomRaceIrregularSetting() {
    return ECustomRaceIrregularSetting::Nothing;
}

int32 UAppRaceConfigDataAccessor::GetCurrentRaceCount() {
    return 0;
}

TArray<EItemId> UAppRaceConfigDataAccessor::GetCurrentDisableItemArr() {
    return TArray<EItemId>();
}

int32 UAppRaceConfigDataAccessor::GetCrossplayPlatformIconIndex(ECrossplayPlatform Platform) {
    return 0;
}

int32 UAppRaceConfigDataAccessor::GetAverageOnlineRank() {
    return 0;
}

void UAppRaceConfigDataAccessor::GetAppRaceRacerConfigData(int32 InRacerIndex, FAppRaceRacerConfigData& OutData, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceConfigDataAccessor::GetAppRacePlayerConfigData(int32 InPlayerIndex, FAppRacePlayerConfigData& OutData, EOutputExecsPin_SuccessFailed& OutExecsPin) {
}

void UAppRaceConfigDataAccessor::GetAppRaceCountManageData(FAppRaceCountManageData& OutData) {
}

void UAppRaceConfigDataAccessor::GetAppRaceConfigData(FAppRaceConfigData& OutData) {
}

TArray<EStageId> UAppRaceConfigDataAccessor::GetAlreadyRunStageIds() {
    return TArray<EStageId>();
}

bool UAppRaceConfigDataAccessor::FlipTSRKeyAssignEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::FlipRaceHintAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::FlipMapVisibleAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::FlipHandleAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::FlipControllerGyroAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::FlipAutoItemAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::FlipAirTrickAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

bool UAppRaceConfigDataAccessor::FlipAcceleratorAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex) {
    return false;
}

EDriverId UAppRaceConfigDataAccessor::ConvRaceRivalRacerIndexToDriverId(int32 RacerIndex) {
    return EDriverId::Sonic;
}

int32 UAppRaceConfigDataAccessor::ConvRaceRivalDriverIdToRacerIndex(EDriverId DriverId) {
    return 0;
}

void UAppRaceConfigDataAccessor::ClearSelected2ndLapStageSetting() {
}

void UAppRaceConfigDataAccessor::ClearRaceRivalDriverIds() {
}

void UAppRaceConfigDataAccessor::ClearInGameGettingRewards() {
}

void UAppRaceConfigDataAccessor::ClearAlreadyRunStageIds() {
}

EMenuSpeedClassId UAppRaceConfigDataAccessor::CalcViewMenuSpeedClassId(bool& IsGroupSpeed) {
    return EMenuSpeedClassId::NormalSpeed;
}

bool UAppRaceConfigDataAccessor::CalcIsFreeRunFinalLap() {
    return false;
}

void UAppRaceConfigDataAccessor::ApplyDisableItemArr() {
}

void UAppRaceConfigDataAccessor::AnalyzeResults() {
}

void UAppRaceConfigDataAccessor::AddRaceRivalDriverId(EDriverId DriverId) {
}

void UAppRaceConfigDataAccessor::AddInGameGettingRewards(ERewardType AddRewardType) {
}

void UAppRaceConfigDataAccessor::AddGroupColorToMachine(int32 InGroupIndex) {
}

void UAppRaceConfigDataAccessor::AddAlreadyRunStageIds(const TArray<EStageId>& InStageIds) {
}

void UAppRaceConfigDataAccessor::AddAlreadyRunStageId(EStageId InStageId) {
}


