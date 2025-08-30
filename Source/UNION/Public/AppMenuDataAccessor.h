#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "EGrandPrixEndingId.h"
#include "EGroupRaceRule.h"
#include "EHintId.h"
#include "EMenuSpeedClassId.h"
#include "ERivalType.h"
#include "EStageId.h"
#include "ItemSwitchSetting.h"
#include "ItemSwitchSettingSingle.h"
#include "PartyRacePresetSetting.h"
#include "SoundHandle.h"
#include "AppMenuData.h"
#include "ECommonRaceMenuContentId.h"
#include "EEtceteraSequenceMainState.h"
#include "ETitleVisualId.h"
#include "ETopMenuPlayMode.h"
#include "AppMenuDataAccessor.generated.h"

UCLASS(Blueprintable)
class UNION_API UAppMenuDataAccessor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAppMenuDataAccessor();

    UFUNCTION(BlueprintCallable)
    static void SetTryGetCompensation(const bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetTitleVisualId(ETitleVisualId TitleVisualId);
    
    UFUNCTION(BlueprintCallable)
    static void SetTitleForce2ndVisual(bool Force);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeTrialSkipSelectClassOnetime(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSubMenuOnlineMode(bool bIsSubMenuOnlineMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedTopMenuPlayMode(ETopMenuPlayMode InTopMenuPlayMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedMenuSpeedClassId(EMenuSpeedClassId NewId, bool InOnlyRaceSpeedClass);
    
    UFUNCTION(BlueprintCallable)
    static void SetReservedRaceparkCleardDodonpaEvent(bool Reserve);
    
    UFUNCTION(BlueprintCallable)
    static void SetRacePauseMenuInSESoundHandle(const FSoundHandle& SoundHandle);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrivateMatchItemSwitchSettingAll(const FItemSwitchSetting& InItemSwitchSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrivateMatchItemSwitchSetting(int32 InGroup, const FItemSwitchSettingSingle& InItemSwitchSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrivateMatchCustomRaceSetting(const FPartyRacePresetSetting& InRaceSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrivateMatchCourseSwitchSetting(TArray<EStageId> StageIds);
    
    UFUNCTION(BlueprintCallable)
    static void SetNextEtceteraSequenceMainState(EEtceteraSequenceMainState EtceteraSequenceMainState);
    
    UFUNCTION(BlueprintCallable)
    static void SetNewFlagForMachineParts(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuDataPowerRivalIds(const TArray<EDriverId>& SetDriverIds);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuDataNormalRivalIds(const TArray<EDriverId>& SetDriverIds);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuDataLastChoiceRivalType(const ERivalType SetValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuDataLastChoiceRivalLevel(uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuDataLastChoiceDriverId(const EDriverId SetDriverId);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuDataBaseRivalLevel(uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetLastSelectedRaceMenu(ECommonRaceMenuContentId InLastSelected);
    
    UFUNCTION(BlueprintCallable)
    static void SetLastPlayFestaRuleId(EGroupRaceRule InPlayFestaRuleId);
    
    UFUNCTION(BlueprintCallable)
    static void SetHintRequest(EHintId InHintId, bool bInRequest);
    
    UFUNCTION(BlueprintCallable)
    static void SetExecuteStorePopupAutoRequest();
    
    UFUNCTION(BlueprintCallable)
    static void SetExecuteStorePopupAutoOnce();
    
    UFUNCTION(BlueprintCallable)
    static void SetExecuteAdvertiseOnce();
    
    UFUNCTION(BlueprintCallable)
    static void SetComeBackFromRace(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetClosedNoticeBetaTestWindow();
    
    UFUNCTION(BlueprintCallable)
    static void SetBetweenCharaMachine(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetBackToTopMenu(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetBackToTitle(bool bBackToTitle);
    
    UFUNCTION(BlueprintCallable)
    static void SetAppMenuData(const FAppMenuData& NewData);
    
    UFUNCTION(BlueprintCallable)
    static void ReserveGrandPrixEnding(EGrandPrixEndingId GrandPrixEndingId);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveMenuDataPowerRivalIds(const EDriverId RemoveDriverId);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveMenuDataNormalRivalIds(const EDriverId RemoveDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTryGetCompensation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTitleForce2ndVisual();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTimeTrialSkipSelectClassOnetime();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSubMenuOnlineMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReservedRaceparkCleardDodonpaEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsComeBackFromRace();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsClosedNoticeBetaTestWindow();
    
    UFUNCTION(BlueprintCallable)
    static bool IsBetweenCharaMachine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBackToTopMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBackToTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETitleVisualId GetTitleVisualId();
    
    UFUNCTION(BlueprintCallable)
    static ETopMenuPlayMode GetSelectedTopMenuPlayMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMenuSpeedClassId GetSelectedMenuSpeedClassId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGrandPrixEndingId GetReservedGrandPrixEnding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoundHandle GetRacePauseMenuInSESoundHandle();
    
    UFUNCTION(BlueprintCallable)
    static FItemSwitchSetting GetPrivateMatchItemSwitchSetting();
    
    UFUNCTION(BlueprintCallable)
    static FPartyRacePresetSetting GetPrivateMatchCustomRaceSetting();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EStageId> GetPrivateMatchCourseSwitchSetting();
    
    UFUNCTION(BlueprintCallable)
    static EEtceteraSequenceMainState GetNextEtceteraSequenceMainState();
    
    UFUNCTION(BlueprintCallable)
    static bool GetNewFlagForMachineParts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetNeedsDonpaTicketForRaceRetry();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EDriverId> GetMenuDataPowerRivalIds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<EDriverId> GetMenuDataNormalRivalIds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERivalType GetMenuDataLastChoiceRivalType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetMenuDataLastChoiceRivalLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDriverId GetMenuDataLastChoiceDriverId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetMenuDataBaseRivalLevel();
    
    UFUNCTION(BlueprintCallable)
    static ECommonRaceMenuContentId GetLastSelectedRaceMenu();
    
    UFUNCTION(BlueprintCallable)
    static EGroupRaceRule GetLastPlayFestaRuleId();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EHintId> GetHintRequestArray();
    
    UFUNCTION(BlueprintCallable)
    static bool GetHintRequest(EHintId InHintId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetExecuteStorePopupAutoRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetExecuteStorePopupAutoOnce();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetExecuteAdvertiseOnce();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEnableOnlinePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAppMenuData(FAppMenuData& OutData);
    
    UFUNCTION(BlueprintCallable)
    static void ClearMenuDataPowerRivalIds();
    
    UFUNCTION(BlueprintCallable)
    static void ClearMenuDataNormalRivalIds();
    
    UFUNCTION(BlueprintCallable)
    static void AddMenuDataPowerRivalIds(const EDriverId AddDriverId);
    
    UFUNCTION(BlueprintCallable)
    static void AddMenuDataNormalRivalIds(const EDriverId AddDriverId);
    
};

