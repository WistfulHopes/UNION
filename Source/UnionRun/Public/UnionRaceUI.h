#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "Animation/WidgetAnimationEvents.h"
#include "EItemInfoType.h"
#include "EViewSplitMode.h"
#include "HoldItemInfo.h"
#include "SoundHandle.h"
#include "UserGadgetPresetData.h"
#include "EUnionRaceHUDItemIconsState.h"
#include "EUnionRaceHUDPackageRingState.h"
#include "UnionItemInfoInterface.h"
#include "UnionRaceHUDPlayerNameUI.h"
#include "UnionRaceHUDWarning.h"
#include "UnionRaceHUDWarningPerPlayer.h"
#include "UnionRaceInfoInterface.h"
#include "UnionRaceStartDashParam.h"
#include "UnionRaceUIInterface.h"
#include "UnionRaceUI.generated.h"

class APackageRingEffect;
class UCanvasPanelSlot;
class UImage;
class UMaterialInstanceDynamic;
class UObject;
class URaceUISubAiming;
class URaceUISubAirTrickInfo;
class URaceUISubApproachWarning;
class URaceUISubBoost;
class URaceUISubLap;
class URaceUISubPlayerName;
class URaceUISubRing;
class URaceUISubTeamHUD;
class URaceUISubTimeTrialTime;
class UURaceUISubItemIconSet;
class UUnionRaceGadgetUI;
class UUnionRaceHitInfoGroup;
class UUnionRaceMinimap;
class UUnionRaceReturnDashUI;
class UUnionRaceStartUI;
class UUnionRaceUIResultRedStarRings;
class UUnionRacerStatusObject;
class UUnionRacers;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceUI : public UUserWidget, public IUnionRaceUIInterface, public IUnionRaceInfoInterface, public IUnionItemInfoInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EViewSplitMode RaceSplitMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRaceMinimap* RaceMinimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> StartTextUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionRaceStartUI*> JudgeStartUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionRaceReturnDashUI*> JudgeReturnDashUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> FinishTextUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubRing*> RingCountUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubLap*> LapCountUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubAiming*> AimingUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUnionRaceHUDItemIconsState> ItemIconsState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UURaceUISubItemIconSet*> ItemIconSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundHandle> ItemLotterySoundArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundHandle> YellowDrillShortTimeSoundArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> bItemPanelVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> RacerIndex_PlayerIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> PlayerIndex_RacerIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PackageRingPerformeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APackageRingEffect*> PackageRingEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APackageRingEffect*> PackageRingEffectsRemoveReserve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUnionRaceHUDPackageRingState> PackageRingPerformState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCanvasPanelSlot*> WarningArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> WarningBelt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> IsDispOnWarningBelt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> WarningBeltMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FUnionRaceHUDWarning> AttackObject_WarnigInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionRaceHUDWarningPerPlayer> AttackWarningPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionRaceHUDWarning> RacerApproachInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PackageRingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHoldItemInfo> HoldItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubAirTrickInfo*> AirTrickInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionRaceGadgetUI*> GadgetUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionRaceHitInfoGroup*> HitInfoGroupUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionRaceHUDPlayerNameUI> PlayerNameInfoUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubPlayerName*> RivalStartUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> IsComArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UURaceUISubItemIconSet*> WbpItemIconSetArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableRedStarRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubBoost*> BoostUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URaceUISubTimeTrialTime* TimeTrialTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubTeamHUD*> TeamHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRaceGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndStateForPauseMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPaused;
    
    UUnionRaceUI();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStartDashButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateReturnDashButton();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRaceHUD(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMinimapIconByRacers_Implementation(UUnionRacers* InRacers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsComSetting(int32 PlayerControllerIndex, bool IsCom);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIrregularInfiniteItem(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHomingAimTargetedLocation_Implementation(int32 PlayerControllerIndex, const FVector& PlayerLocation);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHomingAimLocation_Implementation(int32 PlayerControllerIndex, const FVector& AimLocation);
    
    UFUNCTION(BlueprintCallable)
    void UpdateByRacers_Implementation(UUnionRacers* InRacers);
    
    UFUNCTION(BlueprintCallable)
    void UpdateByHoldItemInfo_Implementation(int32 PlayerControllerIndex, const FHoldItemInfo& InItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAttackInfoPosition(UUserWidget* InAttackWidget, UWidget* InHUDWarningArea, float InPosRate);
    
    UFUNCTION(BlueprintCallable)
    void SetWarningBeltVisible_Implementation(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextBalloonUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeamRankUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetStartUIGaugeRate_Implementation(int32 PlayerControllerIndex, float GaugeRate);
    
    UFUNCTION(BlueprintCallable)
    void SetStartDashParamSetting_Implementation(int32 PlayerControllerIndex, const FUnionRaceStartDashParam& InStartDashParam);
    
    UFUNCTION(BlueprintCallable)
    void SetStartDashButtonUIVisible(const int32 PlayerControllerIndex, const bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpeedNumUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetRivalStartUI_Implementation(int32 PlayerControllerIndex, UUnionRacerStatusObject* RivalStatusObj);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRingUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReturnDashUIVisibleWithAnim_Implementation(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetReturnDashUIVisible_Implementation(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetReturnDashUIGaugeRate_Implementation(int32 PlayerControllerIndex, float GaugeRate);
    
    UFUNCTION(BlueprintCallable)
    void SetReturnDashSetting_Implementation(int32 PlayerControllerIndex, float Pivot, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRedStarRingUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRankUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRaceUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerIndex_Implementation(int32 PlayerControllerIndex, int32 InRacerIndex, bool NewIsLocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerApproachInfo(int32 PlayerControllerIndex, const TArray<URaceUISubApproachWarning*>& ApproachInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetRaceMinimapRef_Implementation(UUnionRaceMinimap* InRaceMinimap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLapUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemWarningUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemIconUIVisibleAll(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemIconUIVisible(bool bVisible, int32 PlayerControllerIndex, bool bFlagOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetItemIconsState(int32 PlayerControllerIndex, const EUnionRaceHUDItemIconsState& InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHitInfoUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGuideButtonUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGadgetIconUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugItemWarningHidden(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugGuideButtonHidden(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugBoostHidden(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAimingHidden(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCourseMapUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCourseMapCharaSpin(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharaHeadUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBoostUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetBeforeHomingAimUIVisible_Implementation(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetBeforeHomingAimTargetedUIVisible_Implementation(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAirTrickUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAimingUIVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetAfterHomingAimUIVisible_Implementation(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetAfterHomingAimTargetedUIVisible_Implementation(int32 PlayerControllerIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttackInfoWidget_Implementation(UObject* InAttackItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyBeforeCountDown();
    
    UFUNCTION(BlueprintCallable)
    void OnPackageRingEffectSoundStart(APackageRingEffect* EffectActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPackageRingEffectFinished(APackageRingEffect* EffectActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyIrregularInfiniteItem(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsViewGhostReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPubCameraPlayRace();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer(int32 PlayerControllerIndex) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsGhostOnline();
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugGuideButtonHidden();
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugBoostHidden();
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugAimingHidden();
    
    UFUNCTION(BlueprintCallable)
    bool IsBehindCurrentCamera(const int32 PlayerControllerIndex, FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void InitCpp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HiddenRaceUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HiddenMainRaceUI();
    
    UFUNCTION(BlueprintCallable)
    bool GetWarningBeltVisible_Implementation(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    FUserGadgetPresetData GetTimeTiralGadgetPresetData();
    
    UFUNCTION(BlueprintCallable)
    UObject* GetStartDashButtonObject_Implementation(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetReturnDashButtonObject_Implementation(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    UUnionRaceUIResultRedStarRings* GetRedStarRings_Implementation(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemPackageRingCount_New(int32 PlayerControllerIndex, EItemInfoType ItemInfoType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemPackageRingCount(int32 PlayerControllerIndex, bool IsMain);
    
    UFUNCTION(BlueprintCallable)
    void GetItemIconsState(int32 PlayerControllerIndex, EUnionRaceHUDItemIconsState& OutState);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemHoldCount_New(int32 PlayerControllerIndex, EItemInfoType ItemInfoType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemHoldCount(int32 PlayerControllerIndex, bool IsMain);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FireInOutAnim(bool bin, const FWidgetAnimationDynamicEvent& OnAnimationEndEvent);
    
    UFUNCTION(BlueprintCallable)
    void FireCourseMapCharaSpin_Implementation(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void FireAirTrickInfo_Implementation(int32 PlayerControllerIndex, int32 SuccessCount, int32 SuccessBonusCount);
    
    UFUNCTION(BlueprintCallable)
    void DbgDrawTeamGaugeRate(int32 PlayerControllerIndex, float TransChargeRate, float LocalChargeRate, float GaugePercent, bool IsForce, bool IsBoost);
    
    UFUNCTION(BlueprintCallable)
    void DbgDrawTeamGaugeData(int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddAttackItemObject_Implementation(UObject* InAttackItem);
    

    // Fix for true pure virtual functions not being implemented
};

