#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EOutputExecsPin_SuccessFailed.h"
#include "ECarStatusType.h"
#include "PredictTestInfo.h"
#include "UnionRaceDebugParam.h"
#include "VehicleModelDefine.h"
#include "Common_DegreeData.h"
#include "Common_GadgetData.h"
#include "Common_MachineData.h"
#include "CustomRaceSetting.h"
#include "EAppSupportedPlatform.h"
#include "ECrossplayPlatform.h"
#include "ECustomRaceIrregularSetting.h"
#include "ECustomRaceRingLostSetting.h"
#include "ECustomRaceSettingPointUpChance.h"
#include "ECustomRaceThornBallType.h"
#include "ECustomRaceTripleCourseSetting.h"
#include "EDriverId.h"
#include "EFestaChanceUpType.h"
#include "EFestaRaceRule.h"
#include "EGadgetId.h"
#include "EGameModeId.h"
#include "EGrandPrixId.h"
#include "EGroupColorId.h"
#include "EGroupRaceRule.h"
#include "EIrregularEventId.h"
#include "EItemId.h"
#include "ELotteryTableType.h"
#include "EMCEventIrregularGate.h"
#include "EMCEventTravelCourseChange.h"
#include "EMachineColorPresetId.h"
#include "EMenuSpeedClassId.h"
#include "EObjectPlacementType.h"
#include "EPartyRacePreset.h"
#include "ERaceBonus.h"
#include "ERaceMirrorSetting.h"
#include "ERaceSettingComSpeed.h"
#include "ERaceSettingCourseSelecting.h"
#include "ERaceSettingGoalPoint.h"
#include "ERaceSettingGroupMode.h"
#include "ERaceSettingGrouping.h"
#include "ERaceSettingHandicap.h"
#include "ERaceSettingItemAppearanceRule.h"
#include "ERaceSettingMatchRule.h"
#include "ERaceSettingSpecialAutoGetItem.h"
#include "ERaceSettingSpecialGadgetUsing.h"
#include "ERaceSettingSpecialMCEvent.h"
#include "ERaceType.h"
#include "ERewardType.h"
#include "ERivalType.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "ETravelRingScreenType.h"
#include "ItemSwitchSetting.h"
#include "ItemSwitchSettingSave.h"
#include "ItemSwitchSettingSingle.h"
#include "MenuGroupRaceBonusData.h"
#include "MenuGroupRaceEnergyData.h"
#include "MenuGroupRaceRuleData.h"
#include "TimeTrialSetting.h"
#include "UserGadgetPresetData.h"
#include "UserMachineCustomizeData.h"
#include "AppRaceConfigData.h"
#include "AppRaceCountManageData.h"
#include "AppRacePlayerConfigData.h"
#include "AppRaceRacerConfigData.h"
#include "AppRaceStageSetting.h"
#include "GadgetPlateUIData.h"
#include "AppRaceConfigDataAccessor.generated.h"

UCLASS(Blueprintable)
class UNION_API UAppRaceConfigDataAccessor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppRaceConfigDataAccessor();

    UFUNCTION(BlueprintCallable)
    static void UpdatePartyRaceRivalLevelAdjust();
    
    UFUNCTION(BlueprintCallable)
    static void SetViewGhostReplay(bool bIsView);
    
    UFUNCTION(BlueprintCallable)
    static void SetUsingDonpaTicketRestart(bool bUsing);
    
    UFUNCTION(BlueprintCallable)
    static void SetUseRentalGadgetPlate(const bool InUse);
    
    UFUNCTION(BlueprintCallable)
    static void SetUELog(const FString& LogString);
    
    UFUNCTION(BlueprintCallable)
    static void SetTSRKeyAssignEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetTravelCourseTargetAll(bool InTargetAll);
    
    UFUNCTION(BlueprintCallable)
    static void SetTravelCourseSettingManualSetEnabled(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetTravelCourseScreenManualSetEnabled(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetTravelCourseManualSetEnabled(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTrialRewardReceived(bool bIsReceived);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTrialGadgetPreset(const FUserGadgetPresetData InGadgetIds);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTrialDisableGadgetIds(const TArray<EGadgetId> InGadgetIds);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTrialCurrentStageVersion(const int32& InStageVersion);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedStageTravelRingScreenType(int32 DomainIndex, ETravelRingScreenType ScreenType);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedStageTravelRingIrregularEvent(int32 DomainIndex, EIrregularEventId IrregularEvent);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedStageSettings(const TArray<FAppRaceStageSetting>& NewSettings);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedStageSetting(int32 DomainIndex, const FAppRaceStageSetting& NewSetting, bool bAutoExtend);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedStageIds(const TArray<EStageId>& NewIds, bool bResetOtherSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedStageId(int32 StageIndex, EStageId NewId, bool bResetSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedRaceType(ERaceType NewId);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedRaceParkPresetId(EPartyRacePreset NewId);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedPlayerCount(int32 InPlayerCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedMachineType(int32 InPlayerIndex, ECarStatusType InMachineType, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedMachineID(int32 InPlayerIndex, int32 InNewId, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedGrandPrixId(EGrandPrixId NewId);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedGameModeId(EGameModeId NewId);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedGadgetPlateData(int32 InPlayerIndex, const FGadgetPlateUIData& InGadgetPlateData);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedDriverId(int32 InPlayerIndex, EDriverId InNewId, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedClassId(ESpeedClassId NewId);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelected2ndLapStageSetting(TArray<EStageId> StageIds);
    
    UFUNCTION(BlueprintCallable)
    static void SetRivalType(EDriverId DriverId, ERivalType RivalType);
    
    UFUNCTION(BlueprintCallable)
    static void SetRentalGadgetPlatePresetData(const FUserGadgetPresetData InPlateUIData);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceTestEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceTestConfigName(const FString& ConfigName);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingTravelCourseChange(EMCEventTravelCourseChange InMCEventTravelCourseChange);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingTopPointSettlement(int32 InSettingTopPointSettlement);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingThornBallType(ECustomRaceThornBallType InThornBallType);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingSpeedClassByMenuSpeedClass(const EMenuSpeedClassId InMenuSpeedClass, bool InOnlyRaceSpeedClass);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingSpeedClass(const ESpeedClassId InSpeedClass);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingRingLostSetting(ECustomRaceRingLostSetting InRaceSettingRingLostSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingRaceCount(int32 InMaxRaceCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingPointUpChanceId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingMCEventSwitchArr(const TArray<bool>& InMCEventSwitch);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingMCEvent(ERaceSettingSpecialMCEvent InRaceSettingSpecialMCEvent);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingMatchRule(const ERaceSettingMatchRule InMatchRule);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingItemAppearanceRule(ERaceSettingItemAppearanceRule InRaceSettingItemAppearanceRule);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingIrregularGate(EMCEventIrregularGate InMCEventIrregularGate);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingHandicap(ERaceSettingHandicap InRaceSettingHandicap);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingGroupMode(const ERaceSettingGroupMode InGroupMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingGrouping(const ERaceSettingGrouping InGroupSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingGoalPoint(ERaceSettingGoalPoint RaceSettingGoalPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingGadgetUsing(ERaceSettingSpecialGadgetUsing InRaceSettingSpecialGadgetUsing);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingCourseSelecting(ERaceSettingCourseSelecting InRaceSettingCourseSelecting);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingComSpeed(ERaceSettingComSpeed InRaceSettingComSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceSettingAutoGetItem(ERaceSettingSpecialAutoGetItem InRaceSettingSpecialAutoGetItem);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerRom1stMachineID(int32 InRacerIndex, int32 InNewId);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerPre1stBehaviorID(int32 InRacerIndex, int32 InNewId);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerName(int32 InRacerIndex, const FText& InRacerName);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerMachineType(int32 InRacerIndex, ECarStatusType InMachineType);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerMachineID(int32 InRacerIndex, int32 InNewId);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerMachineCustomizeData(int32 InRacerIndex, const FUserMachineCustomizeData& MachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerMachineCustomize(int32 InRacerIndex, const FVehicleModelDefine& InMachineCustomize);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceRivalRacerIndex(EDriverId DriverId, int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceRivalLevel(EDriverId DriverId, uint8 RivalLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceRivalDriverIds(const TArray<EDriverId>& DriverIds);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceRivalBaseLevel(EDriverId DriverId, uint8 RivalBaseLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerGroupIndex(int32 InRacerIndex, int32 InGroupIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerGadgetPlateData(int32 InRacerIndex, const FGadgetPlateUIData& InGadgetPlateData);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerDriverId(int32 InRacerIndex, EDriverId InNewId);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerCount(int32 InRacerCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerComLv(int32 InRacerIndex, int32 InComLv);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerCOMId(int32 InRacerIndex, int32 InCOMId);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacerComControlType(int32 InRacerIndex, int32 InComControlType);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceHintAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceDebugParamGenericInt(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceDebugParamFinalLap(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceDebugParam(const FUnionRaceDebugParam& NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceBonusSetting(ERaceBonus RaceBonusSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetPredictTestInfo(FPredictTestInfo PredictTestInfo);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayedSquadPlayerCount(int32 InPlayerCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartyRaceRivalLevelDown(bool IsLevelDown);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartyRaceRivalLevelAdjust(int32 NewLevelAdjust);
    
    UFUNCTION(BlueprintCallable)
    static void SetOnlineRatingPrev(int32 InOnlineRatingPrev);
    
    UFUNCTION(BlueprintCallable)
    static void SetOnlineRating(int32 InOnlineRating);
    
    UFUNCTION(BlueprintCallable)
    static void SetOnlineRandomSeeds(const TArray<int32>& NewRandamSeeds);
    
    UFUNCTION(BlueprintCallable)
    static void SetOnlineRacerIndex(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetOnlineRaceResultWinCount(int32 InRaceResultWinCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetOnlineRaceResultRank(int32 InRaceResultRank);
    
    UFUNCTION(BlueprintCallable)
    static void SetOnlineMatchCount(int32 InMatchCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetOnlineEntryUserIds(const TArray<FString>& InEntryUserIds);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectPlacementTypeSetting(EObjectPlacementType ObjectPlacementType);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxRaceCount(int32 InNewMaxRaceCount, bool bCurrentCountReset);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapVisibleAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainCourseAllSelectable(bool InAllSelectable);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineCustomize(int32 InPlayerIndex, const FVehicleModelDefine& InMachineCustomize, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void SetLotteryTableType(ELotteryTableType LotteryTableType);
    
    UFUNCTION(BlueprintCallable)
    static void SetLineGuideDisable(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    static void SetLeast1PlayFromPowerOn(bool InPlayed);
    
    UFUNCTION(BlueprintCallable)
    static void SetJoinRaceSquad(bool bIsSquad);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemSwitchSettingMenuEnable(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemSwitchSettingAllFromSave(const FItemSwitchSettingSave& InItemSwitchSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemSwitchSettingAll(const FItemSwitchSetting& InItemSwitchSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemSwitchSetting(int32 InGroup, const FItemSwitchSettingSingle& InItemSwitchSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsSelectedMirrorCourse(bool InMirrorCourse);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsRivalRaceFriendMatch(bool IsRivalRace);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsFriendMatchHost(bool IsHost);
    
    UFUNCTION(BlueprintCallable)
    static void SetHandleAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetGroupRaceRuleSetting(EGroupRaceRule GroupRaceRuleSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetGroupColorId(int32 InGroupIndex, EGroupColorId InGroupColorId);
    
    UFUNCTION(BlueprintCallable)
    static void SetGhostOnline(bool bIsOnline);
    
    UFUNCTION(BlueprintCallable)
    static void SetGhostMachineDisable(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    static void SetGhostDataOnline(bool InGhostOnline);
    
    UFUNCTION(BlueprintCallable)
    static void SetGadgetPlateRankUp(bool bRankUp);
    
    UFUNCTION(BlueprintCallable)
    static void SetGadgetCustomizeLastSelected(int32 PlayerIndex, int32 GadgetIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceEnableMCEvent(bool InTargetAll);
    
    UFUNCTION(BlueprintCallable)
    static void SetFestaSpecialRuleContinuous(const bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetFestaRaceRuleSetting(EFestaRaceRule FestaRaceRuleSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultDisableItemArr(const TArray<EItemId>& InDisableItemArr);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomRaceTripleCourseSetting(ECustomRaceTripleCourseSetting TripleCourseSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomRaceSettingPointUpChance(ECustomRaceSettingPointUpChance PointUpChanceSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomRaceSettingBP(const FCustomRaceSetting& InCustomRaceSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomRaceRingLostSetting(ECustomRaceRingLostSetting RingLostSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomRaceIrregularSetting(ECustomRaceIrregularSetting IrregularSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentRaceCount(int32 InNewRaceCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentDisableItemArr(const TArray<EItemId>& InDisableItemArr);
    
    UFUNCTION(BlueprintCallable)
    static void SetControllerGyroAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetAverageOnlineRank(int32 InAverageAdjustOnlineRate);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoItemAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetAppRaceRacerConfigData(int32 InRacerIndex, const FAppRaceRacerConfigData& InNewData, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void SetAppRacePlayerConfigData(int32 InPlayerIndex, const FAppRacePlayerConfigData& InNewData, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void SetAppRaceConfigData(const FAppRaceConfigData& NewData);
    
    UFUNCTION(BlueprintCallable)
    static void SetApplyLocalPlayerRaceDebugParam(bool bInAllChange);
    
    UFUNCTION(BlueprintCallable)
    static void SetApplyAllPlayerRaceDebugParam(bool bInAllChange);
    
    UFUNCTION(BlueprintCallable)
    static void SetAlreadyRunStageIds(const TArray<EStageId>& InStageIds);
    
    UFUNCTION(BlueprintCallable)
    static void SetAirTrickAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetAcceleratorAssistEnabled(int32 InPlayerIndex, bool bInNewEnabled, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSelected2ndLapStageSetting();
    
    UFUNCTION(BlueprintCallable)
    static void ResetItemSwitchSettingAll();
    
    UFUNCTION(BlueprintCallable)
    static void ResetCustomRaceSetting();
    
    UFUNCTION(BlueprintCallable)
    static void ResetCurrentRaceCount();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveRaceRivalDriverId(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static bool ProceedRaceCount();
    
    UFUNCTION(BlueprintCallable)
    static bool ProceedNextPredictTestCase();
    
    UFUNCTION(BlueprintCallable)
    static bool IsViewGhostReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUseRentalGadgetPlate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTSRKeyAssignEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTimeTrialRewardReceived();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSelected4P();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSelected3P();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSelected2P();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSelected1P();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRivalRaceFriendMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRaceTestEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRacerPlayer(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRaceRivalByRacerIndex(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRaceRivalByDriverId(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRacerCOMDefaultParts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRaceHintAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPredictTestEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMapVisibleAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLineGuideDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsJoiningSquadRace();
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemSwitchSettingMenuEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHandleAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGroupRaceSpeedClass();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGroupRaceFestaColor();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGroupRace();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGhostOnline();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGhostMachineDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFriendMatchHost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFinalRace();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFestaSpecialRuleContinuous();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFestaRule();
    
    UFUNCTION(BlueprintCallable)
    static bool IsExecutePointUpChanceMCEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsControllerGyroAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoItemAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsApplyLocalPlayerRaceDebugParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsApplyAllPlayerRaceDebugParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAirTrickAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAcceleratorAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static void InsertRaceRivalDriverId(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static void InitRaceSetting(EGameModeId GameMode);
    
    UFUNCTION(BlueprintCallable)
    static bool InitPredictTest(const FString& PredictData);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeCustomRaceSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasRaceRival();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUsingDonpaTicketRestart();
    
    UFUNCTION(BlueprintCallable)
    static bool GetTravelCourseTargetAll();
    
    UFUNCTION(BlueprintCallable)
    static bool GetTravelCourseSettingManualSetEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool GetTravelCourseScreenManualSetEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool GetTravelCourseManualSetEnabled();
    
    UFUNCTION(BlueprintCallable)
    static FTimeTrialSetting GetTimeTrialSetting();
    
    UFUNCTION(BlueprintCallable)
    static FUserGadgetPresetData GetTimeTrialGadgetPreset();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EGadgetId> GetTimeTrialDisableGadgetIds();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTimeTrialCurrentStageVersion();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAppRaceStageSetting> GetSelectedStageSettings();
    
    UFUNCTION(BlueprintCallable)
    static FAppRaceStageSetting GetSelectedStageSetting(int32 DomainIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EStageId> GetSelectedStageIds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERaceType GetSelectedRaceType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSelectedRaceParkPresetIsIndividual();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPartyRacePreset GetSelectedRaceParkPresetId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSelectedPlayerCount();
    
    UFUNCTION(BlueprintCallable)
    static ERaceMirrorSetting GetSelectedMirrorSetting();
    
    UFUNCTION(BlueprintCallable)
    static void GetSelectedMachineType(int32 InPlayerIndex, ECarStatusType& OutMachineType, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void GetSelectedMachineID(int32 InPlayerIndex, int32& OutId, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGrandPrixId GetSelectedGrandPrixId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGameModeId GetSelectedGameModeId();
    
    UFUNCTION(BlueprintCallable)
    static void GetSelectedGadgetPlateData(int32 InPlayerIndex, FGadgetPlateUIData& OutGadgetPlateData);
    
    UFUNCTION(BlueprintCallable)
    static void GetSelectedDriverId(int32 InPlayerIndex, EDriverId& OutId, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESpeedClassId GetSelectedClassId();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EStageId> GetSelected2ndLapStageSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERivalType GetRivalTypesRacerIndex(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ERivalType> GetRivalTypes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUserGadgetPresetData GetRentalGadgetPlatePresetData();
    
    UFUNCTION(BlueprintCallable)
    static FString GetRaceTestConfigName();
    
    UFUNCTION(BlueprintCallable)
    static EMCEventTravelCourseChange GetRaceSettingTravelCourseChange();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRaceSettingTopPointSettlement();
    
    UFUNCTION(BlueprintCallable)
    static ECustomRaceThornBallType GetRaceSettingThornBallType();
    
    UFUNCTION(BlueprintCallable)
    static ESpeedClassId GetRaceSettingSpeedClass();
    
    UFUNCTION(BlueprintCallable)
    static ECustomRaceRingLostSetting GetRaceSettingRingLostSetting();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRaceSettingRaceCount();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRaceSettingPointUpChanceId();
    
    UFUNCTION(BlueprintCallable)
    static TArray<bool> GetRaceSettingMCEventSwitchArr();
    
    UFUNCTION(BlueprintCallable)
    static ERaceSettingSpecialMCEvent GetRaceSettingMCEvent();
    
    UFUNCTION(BlueprintCallable)
    static ERaceSettingMatchRule GetRaceSettingMatchRule();
    
    UFUNCTION(BlueprintCallable)
    static ERaceSettingItemAppearanceRule GetRaceSettingItemAppearanceRule();
    
    UFUNCTION(BlueprintCallable)
    static EMCEventIrregularGate GetRaceSettingIrregularGate();
    
    UFUNCTION(BlueprintCallable)
    static ERaceSettingHandicap GetRaceSettingHandicap();
    
    UFUNCTION(BlueprintCallable)
    static ERaceSettingGroupMode GetRaceSettingGroupMode();
    
    UFUNCTION(BlueprintCallable)
    static ERaceSettingGrouping GetRaceSettingGrouping();
    
    UFUNCTION(BlueprintCallable)
    static ERaceSettingGoalPoint GetRaceSettingGoalPoint();
    
    UFUNCTION(BlueprintCallable)
    static ERaceSettingSpecialGadgetUsing GetRaceSettingGadgetUsing();
    
    UFUNCTION(BlueprintCallable)
    static ERaceSettingCourseSelecting GetRaceSettingCourseSelecting();
    
    UFUNCTION(BlueprintCallable)
    static ERaceSettingComSpeed GetRaceSettingComSpeed();
    
    UFUNCTION(BlueprintCallable)
    static ERaceSettingSpecialAutoGetItem GetRaceSettingAutoGetItem();
    
    UFUNCTION(BlueprintCallable)
    static FString GetRacerUserId(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetRacerRom1stMachineID(int32 InRacerIndex, int32& OutId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRacerRate(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetRacerName(int32 InRacerIndex, FText& OutRacerName);
    
    UFUNCTION(BlueprintCallable)
    static void GetRacerMachineType(int32 InRacerIndex, ECarStatusType& OutMachineType);
    
    UFUNCTION(BlueprintCallable)
    static void GetRacerMachineID(int32 InRacerIndex, int32& OutId);
    
    UFUNCTION(BlueprintCallable)
    static void GetRacerMachineCustomizeData(int32 InRacerIndex, FUserMachineCustomizeData& MachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void GetRacerMachineCustomize(int32 InRacerIndex, FVehicleModelDefine& OutMachineCustomize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetRaceRivalRacerIndices();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetRaceRivalLevelRacerIndex(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> GetRaceRivalLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EDriverId> GetRaceRivalDriverIds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetRaceRivalBaseLevelRacerIndex(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> GetRaceRivalBaseLevel();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRacerHonorTitleId(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetRacerGadgetPlateData(int32 InRacerIndex, FGadgetPlateUIData& OutGadgetPlateData);
    
    UFUNCTION(BlueprintCallable)
    static void GetRaceRequestData(EDriverId& OutDriverId, EStageId& OutMainStageId, FCommon_MachineData& OutMachineCustomizeData, FCommon_GadgetData& OutGadgetPlateData, FCommon_DegreeData& OutDegreeData);
    
    UFUNCTION(BlueprintCallable)
    static void GetRacerDriverId(int32 InRacerIndex, EDriverId& OutId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRacerCount();
    
    UFUNCTION(BlueprintCallable)
    static bool GetRacerComLv(int32 InRacerIndex, int32& OutCOMLv);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRacerCOMId(int32 InRacerIndex, int32& OutCOMId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetRacerComControlType(int32 InRacerIndex, int32& OutComControlType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRaceDebugParamGenericInt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRaceDebugParamFinalLap();
    
    UFUNCTION(BlueprintCallable)
    static FUnionRaceDebugParam GetRaceDebugParam();
    
    UFUNCTION(BlueprintCallable)
    static ERaceBonus GetRaceBonusSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPredictTestInfo GetPredictTestInfo();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerRacerIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayedSquadPlayerCount();
    
    UFUNCTION(BlueprintCallable)
    static ECrossplayPlatform GetPlatformType(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlatformIconIndex(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlatformIconComIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPartyRaceRivalLevelDown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPartyRaceRivalLevelAdjust();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineRatingPrev();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineRating();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetOnlineRandomSeeds();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineRacerIndex();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineRaceResultWinCount();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineRaceResultRank();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetOnlineMatchCount();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetOnlineEntryUserIds();
    
    UFUNCTION(BlueprintCallable)
    static EObjectPlacementType GetObjectPlacementTypeSetting();
    
    UFUNCTION(BlueprintCallable)
    static EMenuSpeedClassId GetMenuSpeedClassIdFromCustomRaceSetting();
    
    UFUNCTION(BlueprintCallable)
    static FMenuGroupRaceRuleData GetMenuGroupRuleData();
    
    UFUNCTION(BlueprintCallable)
    static FMenuGroupRaceEnergyData GetMenuGroupEnergyData();
    
    UFUNCTION(BlueprintCallable)
    static FMenuGroupRaceBonusData GetMenuGroupBonusData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxRaceCount();
    
    UFUNCTION(BlueprintCallable)
    static bool GetMainCourseAllSelectable();
    
    UFUNCTION(BlueprintCallable)
    void GetMachineCustomize(int32 InPlayerIndex, FVehicleModelDefine& OutMachineCustomize, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static ELotteryTableType GetLotteryTableType();
    
    UFUNCTION(BlueprintCallable)
    static bool GetLeast1PlayFromPowerOn();
    
    UFUNCTION(BlueprintCallable)
    static void GetItemSwitchSettingBP(FItemSwitchSetting& OutItemSwitchSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsSelectedMirrorCourse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsRivalSkinExistsGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsRivalExistsGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsOnlineGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsAddFairPointGameMode();
    
    UFUNCTION(BlueprintCallable)
    static TArray<ERewardType> GetInGameGettingRewards();
    
    UFUNCTION(BlueprintCallable)
    static EGroupRaceRule GetGroupRaceRuleSetting();
    
    UFUNCTION(BlueprintCallable)
    static EMachineColorPresetId GetGroupMachineColorPresetId(int32 InGroupIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGroupIndex(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static EGroupColorId GetGroupColorId(int32 InGroupIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGhostDataOnline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetGadgetPlateRankUp();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGadgetCustomizeLastSelected(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool GetForceEnableMCEvent();
    
    UFUNCTION(BlueprintCallable)
    static EFestaRaceRule GetFestaRaceRuleSetting();
    
    UFUNCTION(BlueprintCallable)
    static EFestaChanceUpType GetFestaChanceUpType();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFestaChanceUpRatio();
    
    UFUNCTION(BlueprintCallable)
    static ECrossplayPlatform GetEAppSupportedPlatformToECrossplayPlatform(EAppSupportedPlatform InAppSupportedPlatform);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EItemId> GetDefaultDisableItemArr();
    
    UFUNCTION(BlueprintCallable)
    static ECustomRaceTripleCourseSetting GetCustomRaceTripleCourseSetting();
    
    UFUNCTION(BlueprintCallable)
    static ECustomRaceSettingPointUpChance GetCustomRaceSettingPointUpChance();
    
    UFUNCTION(BlueprintCallable)
    static void GetCustomRaceSettingBP(FCustomRaceSetting& OutCustomRaceSetting);
    
    UFUNCTION(BlueprintCallable)
    static ECustomRaceRingLostSetting GetCustomRaceRingLostSetting();
    
    UFUNCTION(BlueprintCallable)
    static ECustomRaceIrregularSetting GetCustomRaceIrregularSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentRaceCount();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EItemId> GetCurrentDisableItemArr();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCrossplayPlatformIconIndex(ECrossplayPlatform Platform);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAverageOnlineRank();
    
    UFUNCTION(BlueprintCallable)
    static void GetAppRaceRacerConfigData(int32 InRacerIndex, FAppRaceRacerConfigData& OutData, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable)
    static void GetAppRacePlayerConfigData(int32 InPlayerIndex, FAppRacePlayerConfigData& OutData, EOutputExecsPin_SuccessFailed& OutExecsPin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAppRaceCountManageData(FAppRaceCountManageData& OutData);
    
    UFUNCTION(BlueprintCallable)
    static void GetAppRaceConfigData(FAppRaceConfigData& OutData);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EStageId> GetAlreadyRunStageIds();
    
    UFUNCTION(BlueprintCallable)
    static bool FlipTSRKeyAssignEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool FlipRaceHintAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool FlipMapVisibleAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool FlipHandleAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool FlipControllerGyroAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool FlipAutoItemAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool FlipAirTrickAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool FlipAcceleratorAssistEnabled(int32 InPlayerIndex, bool& bOutValidIndex);
    
    UFUNCTION(BlueprintCallable)
    static EDriverId ConvRaceRivalRacerIndexToDriverId(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 ConvRaceRivalDriverIdToRacerIndex(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSelected2ndLapStageSetting();
    
    UFUNCTION(BlueprintCallable)
    static void ClearRaceRivalDriverIds();
    
    UFUNCTION(BlueprintCallable)
    static void ClearInGameGettingRewards();
    
    UFUNCTION(BlueprintCallable)
    static void ClearAlreadyRunStageIds();
    
    UFUNCTION(BlueprintCallable)
    static EMenuSpeedClassId CalcViewMenuSpeedClassId(bool& IsGroupSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CalcIsFreeRunFinalLap();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyDisableItemArr();
    
    UFUNCTION(BlueprintCallable)
    static void AnalyzeResults();
    
    UFUNCTION(BlueprintCallable)
    static void AddRaceRivalDriverId(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static void AddInGameGettingRewards(ERewardType AddRewardType);
    
    UFUNCTION(BlueprintCallable)
    static void AddGroupColorToMachine(int32 InGroupIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddAlreadyRunStageIds(const TArray<EStageId>& InStageIds);
    
    UFUNCTION(BlueprintCallable)
    static void AddAlreadyRunStageId(EStageId InStageId);
    
};

