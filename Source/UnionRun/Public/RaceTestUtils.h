#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EStageId.h"
#include "ERaceLoadTestMode.h"
#include "RaceTestRacerSetting.h"
#include "RaceTestUtils.generated.h"

class APlayerController;
class UDataTable;
class URaceTestConfig;

UCLASS(Blueprintable)
class UNIONRUN_API URaceTestUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URaceTestUtils();

    UFUNCTION(BlueprintCallable)
    static bool UpdateRaceLoadAutoTest(const TArray<EStageId>& OpenStageIDs);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateCameraByDebConst();
    
    UFUNCTION(BlueprintCallable)
    static void TickProfileGpuAndScreenshot(float DeltaTime, APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void StartRaceTest(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void StartRaceLoadTest(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void StartAutoUnrealInsights(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void StartAutoProfileGpu(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void StartAutoKibana(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void StartAutoCsvProfile(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void SetTagNameToDestroyActor(const FString& TagName);
    
    UFUNCTION(BlueprintCallable)
    static void SetRaceLoadTestCountMax(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void SetPathCameraPawnMode(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverridePathCameraVFov(float VFov);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverridePathCameraTargetZ(float Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverridePathCameraTargetY(float Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverridePathCameraOffset(float Offset);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverridePathCameraElevation(float Elevation);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverridePathCamera(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideCameraVFov(float VFov);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideCameraTargetZ(float Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideCameraTargetY(float Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideCameraOffset(float Offset);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideCameraElevation(float Elevation);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideCamera(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadingTime(float LoadingTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetDrivingCount(int32 DrivingCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoUnrealInsightsModeFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoProfileGpuModeFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoKibanaModeFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoDetailKibanaModeFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoDebugKibanaModeFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoCsvProfileModeFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveRaceLoadAutoTestResult();
    
    UFUNCTION(BlueprintCallable)
    static void ResetRaceLoadTestCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUseItemTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRaceTestMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRaceLoadAutoTestMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPerformanceTestRun(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPathCameraPawnMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNoHudMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNoGimmickObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNoCourseObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNoBgmMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsForceComRun(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFinalRaceLoadTest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableItemTableSynchro();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoUnrealInsightsMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoProfileGpuMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoKibanaMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoDetailKibanaMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoDebugKibanaMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoCsvProfileMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTagNameToDestroyActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* GetRaceTestItemTableAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URaceTestConfig* GetRaceTestConfigAccess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URaceTestConfig* GetRaceTestConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetRacerSetting(int32 RacerIndex, FRaceTestRacerSetting& Setting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERaceLoadTestMode GetRaceLoadTestMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverridePathCameraVFov(float& VFov);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverridePathCameraTargetZ(float& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverridePathCameraTargetY(float& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverridePathCameraOffset(float& Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverridePathCameraElevation(float& Elevation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverridePathCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverrideCameraVFov(float& VFov);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverrideCameraTargetZ(float& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverrideCameraTargetY(float& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverrideCameraOffset(float& Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverrideCameraElevation(float& Elevation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOverrideCamera();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNoHitItemPhysiceLayerMask();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAutoUnrealInsightsModeFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAutoProfileGpuModeFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAutoKibanaModeFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAutoDetailKibanaModeFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAutoDebugKibanaModeFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAutoCsvProfileModeFlag();
    
    UFUNCTION(BlueprintCallable)
    static void EndRaceTest(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void EndRaceLoadTest(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void EndAutoUnrealInsights(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void EndAutoProfileGpu(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void EndAutoKibana(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void EndAutoCsvProfile(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void AssignFixedFpsForRaceLoadTest();
    
};

