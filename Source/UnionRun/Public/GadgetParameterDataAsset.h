#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EGadgetId.h"
#include "GadgetBoatChargeJumpUpInfo.h"
#include "GadgetBonusDashPanelComboInfo.h"
#include "GadgetBoostRingBonusInfo.h"
#include "GadgetDashUpInfo.h"
#include "GadgetDoubleItemOccasionallyInfo.h"
#include "GadgetEnforceSlipstreamInfo.h"
#include "GadgetEnhanceBombInfo.h"
#include "GadgetEnhanceHookTurnInfo.h"
#include "GadgetEnhanceRocketPunchInfo.h"
#include "GadgetEnhanceThornBallInfo.h"
#include "GadgetExpandGetRingRangeInfo.h"
#include "GadgetGuardInfo.h"
#include "GadgetHyperChargeInfo.h"
#include "GadgetImmuneItemDamageOnceInfo.h"
#include "GadgetIntervalRingInfo.h"
#include "GadgetItemNumInfo.h"
#include "GadgetJustDashInfo.h"
#include "GadgetLevelChargeInfo.h"
#include "GadgetLowRankRingBonusInfo.h"
#include "GadgetMachineTuneInfo.h"
#include "GadgetQuickAirtrickInfo.h"
#include "GadgetRingPerformanceInfo.h"
#include "GadgetShortenDamageMotionInfo.h"
#include "GadgetShortenDamagetTimeInfo.h"
#include "GadgetSimpleRingBonusInfo.h"
#include "GadgetSkateDriftInfo.h"
#include "GadgetSpinDriftInfo.h"
#include "GadgetStoleInfo.h"
#include "GadgetSuppressRunoffInfo.h"
#include "GadgetSwitchDriftQuickChargeInfo.h"
#include "GadgetTouchDashInfo.h"
#include "GadgetTradeStockInfo.h"
#include "GadgetUltimateDriftInfo.h"
#include "GadgetUpperLimitInfo.h"
#include "GadgetParameterDataAsset.generated.h"

class AGadgetRingPerformance;

UCLASS(Blueprintable)
class UNIONRUN_API UGadgetParameterDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMaxChargeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirTrickPlayRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetRingPerformanceInfo> RingPerformanceInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGadgetRingPerformance> RingPerformanceObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGadgetId> VariousUICheckExcludeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetTradeStockInfo> TradeStockMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetEnhanceRocketPunchInfo> EnhanceRocketPunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetEnhanceThornBallInfo> EnhanceThornBallMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetEnhanceBombInfo> EnhanceBombMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetMachineTuneInfo> DoubleItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetDoubleItemOccasionallyInfo> DoubleItemOccasionallyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetSimpleRingBonusInfo> CreateItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetUltimateDriftInfo> UltimateDriftMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool QuickAirTrick_bMultiplyParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetQuickAirtrickInfo> QuickAirTrickMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetSkateDriftInfo> SkateDriftMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetJustDashInfo> JustDashMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetLevelChargeInfo> FirstFastChargeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetLevelChargeInfo> SecondFastChargeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetLevelChargeInfo> ThirdFastChargeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetSwitchDriftQuickChargeInfo> SwitchDriftQuickChargeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetHyperChargeInfo> HyperChargeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetSpinDriftInfo> SpinDriftMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetShortenDamageMotionInfo> ShortenDamageMotionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetMachineTuneInfo> SpeedTuneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetMachineTuneInfo> AccelTuneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetMachineTuneInfo> HandlingTuneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetMachineTuneInfo> PowerTuneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetMachineTuneInfo> DashTuneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetMachineTuneInfo> StarterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetMachineTuneInfo> SlowterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetImmuneItemDamageOnceInfo> ImmuneItemDamageOnceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetTouchDashInfo> TouchDashInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetEnforceSlipstreamInfo> EnforceSlipstreamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetEnhanceHookTurnInfo> EnhanceHookTurnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetBoatChargeJumpUpInfo> BoatChargeJumpUpMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetDashUpInfo> RingDashUpMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetGuardInfo> RingGuardMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetUpperLimitInfo> RingUpperLimitMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetStoleInfo> RingStoleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetBoostRingBonusInfo> BonusDashPanelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetBonusDashPanelComboInfo> BonusDashPanelComboMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetIntervalRingInfo> RunoffNegateBonusMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetExpandGetRingRangeInfo> ExpandGetRingRangeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetSimpleRingBonusInfo> BonusRotateRingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetIntervalRingInfo> SlipstreamBonusMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetSimpleRingBonusInfo> ItemAttackRingBonusMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetBoostRingBonusInfo> BonusDriftJustMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetBoostRingBonusInfo> BonusStartDashSucceedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetSimpleRingBonusInfo> BonusTravelRingMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetSimpleRingBonusInfo> BonusTransformActionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetSimpleRingBonusInfo> DriftDashRingBonusMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetSuppressRunoffInfo> SuppressRunoffMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetMachineTuneInfo> PlaneFormParamUPMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetMachineTuneInfo> BoatFormParamUPMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetItemNumInfo> SecondLapGetItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGadgetItemNumInfo> ThirdLapGetItemMap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FGadgetShortenDamagetTimeInfo> ShortenDamagetTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetLowRankRingBonusInfo LowRankRingBonus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> ShortenItemSlotTime;
    
    UGadgetParameterDataAsset();

};

