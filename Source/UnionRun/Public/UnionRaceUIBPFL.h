#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "EItemId.h"
#include "ERaceItemCategory.h"
#include "EUnionAttackItemInfoType.h"
#include "UnionRaceUIBPFL.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRaceUIBPFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionRaceUIBPFL();

    UFUNCTION(BlueprintCallable)
    static void SetTextBalloonHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetTeamRankHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpeedNumHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetRingHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetRedStarRingHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetRankHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetLapHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemWarningHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemIconHUDVisibleAll(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemIconHUDVisible(bool bVisible, int32 PlayerControllerIndex, bool bFlagOnly);
    
    UFUNCTION(BlueprintCallable)
    static void SetHitInfoHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetGuideButtonHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetGadgetIconHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugRaceHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetCourseMapHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharaHeadHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoostHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetAirTrickHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetAimingHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRareItemBP(const EItemId& InItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsIgnoreAttackWarningItemUseForBack(const EItemId& InItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDebugAimingHidden();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAttackWarningItem(const EItemId& InItemId);
    
    UFUNCTION(BlueprintCallable)
    static void HiddenRaceHUD();
    
    UFUNCTION(BlueprintCallable)
    static void GetYellowDrillSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetT_RexSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetSplashSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetSlimeSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetSlicerSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSelectorLabelByDriverId(const EDriverId InDriverId, FString& OutLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetRocketPunchSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetRacerApproachSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetMonsterTruckSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetKingBoomBooSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetHomingPunchSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetDarkChaoSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetBodyCutSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetBlackBombSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetAttackItemDistSettings(const EUnionAttackItemInfoType& Type, const uint8& InId, float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static void GetAnchorSettings(float& Dist1, float& Dist2, float& Dist3, float& DisableDist);
    
    UFUNCTION(BlueprintCallable)
    static ERaceItemCategory CalcItemCategory(const EItemId& InItemId);
    
};

