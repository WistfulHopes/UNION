#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECrossplayPlatform.h"
#include "EDriverId.h"
#include "EGadgetId.h"
#include "EItemId.h"
#include "EItemInfoType.h"
#include "ETutorialAction.h"
#include "HoldItemInfo.h"
#include "EDomainNumber.h"
#include "EMinimapIconType.h"
#include "ERacerReactionWindow.h"
#include "EUnionAttackItemInfoType.h"
#include "FireAttackItemInfo.h"
#include "RacerReactionVoice.h"
#include "UnionRaceStartDashParam.h"
#include "UnionRaceUIInterface.generated.h"

class AActor;
class UObject;
class URaceUISubApproachWarning;
class UUnionRaceMinimap;
class UUnionRaceUIResultRedStarRings;
class UUnionRacerStatusObject;
class UUnionRacers;

UINTERFACE(Blueprintable)
class UNIONRUN_API UUnionRaceUIInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONRUN_API IUnionRaceUIInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UseItem(int32 PlayerControllerIndex, int32 InItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpgradeItemMain(int32 PlayerControllerIndex, int32 InItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSpeed(int32 PlayerControllerIndex, int32 SpeedKMPH);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateRank(int32 PlayerControllerIndex, int32 ChangeAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMinimapIconByRacers(UUnionRacers* InRacers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateManualAimingUILocation(int32 PlayerControllerIndex, const FVector& Location, const FMatrix& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateHomingAimTargetedLocation(int32 PlayerControllerIndex, const FVector& PlayerLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateHomingAimLocation(int32 PlayerControllerIndex, const FVector& AimLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCharge(int32 PlayerControllerIndex, int32 Level, float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateByRacers(UUnionRacers* InRacers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateByHoldItemInfo(int32 PlayerControllerIndex, const FHoldItemInfo& InItemInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopLotteryItem(int32 PlayerControllerIndex, EItemInfoType ItemInfoType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetYellowDrillShortTimeSoundEnable(int32 PlayerControllerIndex, bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWarningItemId(int32 PlayerControllerIndex, int32 InItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWarningBeltVisible(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityRank(int32 PlayerControllerIndex, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityCharge(int32 PlayerControllerIndex, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SettingToHUDAttackInfoWidget(const int32 PlayerControllerIndex, const URaceUISubApproachWarning* InAttackWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTimeTrialLapInfo(int32 PlayerControllerIndex, int32 InLapCountNow, int32 InLapCountMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTimeInfo(int32 PlayerControllerIndex, int32 InMinutes, int32 InSecondes, int32 InMilliSec);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStartUIGaugeRate(int32 PlayerControllerIndex, float GaugeRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStartUICountText(int32 StartCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStartDashParamSetting(int32 PlayerControllerIndex, const FUnionRaceStartDashParam& InStartDashParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRivalStartUI(int32 PlayerControllerIndex, UUnionRacerStatusObject* RivalStatusObj);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRingNum(int32 PlayerControllerIndex, int32 InRingNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRingGroupColor(int32 PlayerControllerIndex, int32 GroupIndex, bool IsGroup, bool IsLocalMulti);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRingBoostGaugeNormalPercentDirect(int32 PlayerControllerIndex, float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRingBoostGaugeNormalPercent(int32 PlayerControllerIndex, float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRingBoostGaugeBoostPercent(int32 PlayerControllerIndex, float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetReturnDashUIVisibleWithAnim(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetReturnDashUIVisible(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetReturnDashUIGaugeRate(int32 PlayerControllerIndex, float GaugeRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetReturnDashSetting(int32 PlayerControllerIndex, float Pivot, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRedStarRingDisp(int32 PlayerControllerIndex, int32 RingIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRankIndex(int32 PlayerControllerIndex, int32 InRankIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRacerIndex(int32 PlayerControllerIndex, int32 InRacerIndex, bool IsLocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRacerApproachInfoVisible(int32 PlayerControllerIndex, uint8 RankAfterIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRacerApproachInfoPosition(float PosRate, float Distance, int32 PlayerControllerIndex, uint8 RankAfterIndex, EDriverId InDriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRaceMinimapRef(UUnionRaceMinimap* InRaceMinimap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetQuickDriftCharge(int32 PlayerControllerIndex, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerPlatformIcon(int32 ScreenIndex, int32 PlayerControllerIndex, ECrossplayPlatform InPlatform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerNamePosition(int32 ScreenIndex, int32 PlayerControllerIndex, FVector2D ScreenPosition, bool bIsView);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerName(int32 ScreenIndex, int32 PlayerControllerIndex, FVector2D ScreenPosition, const FText& Name, bool bIsView);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerCount(int32 PlayerCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPauseFlag(bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMinimapIconType(const int32& RacerIndex, const EMinimapIconType& InMinimapIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMinimapIconItem(const int32& RacerIndex, const EItemId& InItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetManualAimingUIVisible(int32 PlayerControllerIndex, bool bVisible, float Scale, bool IsScaleKeepInHoming);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemPanelVisible(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemPanelActive(int32 PlayerControllerIndex, bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemLifeTimeRate(int32 PlayerControllerIndex, EItemInfoType ItemInfoType, float NewRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemId(int32 PlayerControllerIndex, EItemInfoType ItemInfoType, int32 InItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIrregularInfiniteItem(int32 PlayerControllerIndex, EItemInfoType ItemInfoType, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIrregular(int32 PlayerControllerIndex, int32 EventId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGroupRingNum(int32 PlayerControllerIndex, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGadgetIconActive(int32 PlayerControllerIndex, EGadgetId gadget, bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableRedStarRing(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCourseSetting(const TSoftObjectPtr<UObject>& CourseTexture, float OrthoRate, float Angle, const FVector& Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBeforeHomingAimUIVisible(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBeforeHomingAimTargetedUIVisible(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAttackInfoPosition(URaceUISubApproachWarning* InAttackWidget, float PosRate, float Distance, int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAfterHomingAimUIVisible(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAfterHomingAimTargetedUIVisible(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveCourseMapActor(AActor* InAttackItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveAttackInfoWidget(UObject* InAttackItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RaceActionTutorialSuccess(int32 PlayerControllerIndex, ETutorialAction tutorialAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayFestaIndividualChargeEffect(int32 PlayerControllerIndex, int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenSerifWindowEx(int32 ScreenIndex, const FRacerReactionVoice& SerifUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenSerifWindow(int32 ScreenIndex, ERacerReactionWindow WindowId, const FText& TextId, int32 DriverId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyItemCountDownBlink(int32 PlayerControllerIndex, EItemInfoType ItemInfoType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LockOnManualAimingUI(int32 PlayerControllerIndex, bool bIsLockOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetWarningBeltVisible(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetStartDashButtonObject(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetReturnDashButtonObject(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUnionRaceUIResultRedStarRings* GetRedStarRings(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EDomainNumber GetCourseMapDomainNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAimingUIBaseScale();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireStartText(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireLotteryItem(int32 PlayerControllerIndex, EItemInfoType ItemInfoType, bool bIsSilent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireItemHitInfo(int32 PlayerControllerIndex, int32 InItemId, int32 AttackToPlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireInAnimStartUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireFinishText(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireCourseMapCharaSpin(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireAttackItemHitInfo_New(const FFireAttackItemInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireAttackItemHitInfo(int32 AttackedByPlayerControllerIndex, const uint8& InItemId, UUnionRacerStatusObject* AttackToRacerStatusObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireAttackInfo(int32 PlayerControllerIndex, int32 InItemId, int32 AttackedByPlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireAirTrickInfo(int32 PlayerControllerIndex, int32 SuccessCount, int32 SuccessBonusCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispOnRaceActionTutorial(int32 PlayerControllerIndex, ETutorialAction tutorialAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispOnInterimReport(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispOnControlReleaseItemEffect(int32 PlayerControllerIndex, EItemId ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispOnControlItemUse(int32 PlayerControllerIndex, EItemId ItemId, bool bIsFever);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispOnControlGuideFlight(int32 PlayerControllerIndex, bool bSuggestUpInput);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispOffRaceActionTutorial(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispOffControlReleaseItemEffect(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispOffControlItemUse(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DispOffControlGuideFlight(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DecideLotteryItem(int32 PlayerControllerIndex, EItemInfoType ItemInfoType, int32 InItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseSerifWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeRingBoostGaugeToNormal(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeRingBoostGaugeToBoost(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyJustBoost(int32 PlayerControllerIndex, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyBoost(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterFireManualAimingUI(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddToHUDAttackInfoWidget(const TArray<URaceUISubApproachWarning*>& InAttackWidget, const EUnionAttackItemInfoType& InItemType, const uint8& InId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddCourseMapActor(AActor* InAttackItem, EItemId InItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddAttackItemObject(UObject* InAttackItem);
    
};

