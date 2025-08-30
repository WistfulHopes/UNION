#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EHoldItemMeshType.h"
#include "EVehicleEngineSoundType.h"
#include "EVehicleMeshType.h"
#include "AppCharaOpenData.h"
#include "AppGadgetCustomizeData.h"
#include "AppMenuData.h"
#include "AppRaceConfigData.h"
#include "AppRaceCountManageData.h"
#include "AppRaceResultData.h"
#include "DebugAppMenuData.h"
#include "UnionRaceResource.h"
#include "AppDataManageSubsystem.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UNION_API UAppDataManageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRaceResource RaceResource;
    
public:
    UAppDataManageSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UnLockWireless() const;
    
    UFUNCTION(BlueprintCallable)
    void UnloadResources();
    
    UFUNCTION(BlueprintCallable)
    void StoreCurrentLevelObjectPtr();
    
    UFUNCTION(BlueprintCallable)
    void SpawnedNpcDefaultMeshNum();
    
    UFUNCTION(BlueprintCallable)
    void SetRaceResultData(const FAppRaceResultData& InSrc);
    
    UFUNCTION(BlueprintCallable)
    void SetRaceConfigData(const FAppRaceConfigData& InSrc);
    
    UFUNCTION(BlueprintCallable)
    void SetPrivateMatchMonkeyTestAllSet();
    
    UFUNCTION(BlueprintCallable)
    void SetOpenFriendListInOfflineSequence(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuData(const FAppMenuData& InSrc);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSafe2ndLapCourse(bool bInSafe);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetCustomizeData(const FAppGadgetCustomizeData& InSrc);
    
    UFUNCTION(BlueprintCallable)
    void SetForceUpdateCustomRuleRaceCountMax(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetForceSkipCloseLobbyInvitationWindow(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetForceOpenFriendMatch(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDisableLobbyKick(bool InDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugOnlineFillCom(bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAppMenuData(const FDebugAppMenuData& InSrc);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaOpenData(const FAppCharaOpenData& InSrc);
    
    UFUNCTION(BlueprintCallable)
    void OnMapLoadFinished(UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable)
    void LoadResources();
    
    UFUNCTION(BlueprintCallable)
    void LoadDebugSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisiblePlayerNameAndNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleNpcTireMark() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleNpcSurfaceEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleNpcGhostLoadEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleNpcEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleLocalPlayerTireMark() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleLocalPlayerSurfaceEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleLocalPlayerGhostLoadEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleLocalPlayerEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnNpcDriverActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnNpcBodycutActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnLocalPlayerDriverActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnLocalPlayerBodycutActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkipEntryCheck() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSafe2ndLapCourse();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenFriendListInOfflineSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerForceCOM(int32 InLocalPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLegendForceStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLegendForceNotice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceSpawnNpcDefaultMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFestaForceStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFestaForceOutside() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFestaForceNotice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSpinDriftStateDebugPrint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSkipTitleLogin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableRadialBlurPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableOverrideDriverId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableOptimizedMeshEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableOnlineRaceHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableOnlineLobbySequenceDebugShowInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableOldOnlineSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableNpcSurfaceSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableNpcSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLocalPlayerSurfaceSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLocalPlayerSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLegendOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableHiSpeedPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableFlowingWaterPP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableEnterLobbyAlone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDriftNoStartAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDirectionalEffectForHoldItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDebugWirelessSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDodonpaForceStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDLCNoticeForceSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugSkipControllerCheck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugOnlineFillCom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConfirmedNoticeStreamingInstall() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAllResourcesLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEntryCheckSuspend(uint8 SuspendNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEntryCheckError(uint8 ErrorNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStampType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAppRaceResultData GetRaceResultData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAppRaceCountManageData GetRaceCountManageData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAppRaceConfigData GetRaceConfigData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UWorld> GetPreviousLevelObjectPtr() const;
    
    UFUNCTION(BlueprintCallable)
    void GetOverrideDriverIds(TArray<int32>& OutDriverIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVehicleMeshType GetNpcModelType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVehicleEngineSoundType GetNpcEngineSoundType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAppMenuData GetMenuData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVehicleMeshType GetLocalPlayerModelType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVehicleEngineSoundType GetLocalPlayerEngineSoundType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHornType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EHoldItemMeshType> GetHoldItemQualitiesPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EHoldItemMeshType> GetHoldItemQualitiesNonPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAppGadgetCustomizeData GetGadgetCustomizeData();
    
    UFUNCTION(BlueprintCallable)
    bool GetForceUpdateCustomRuleRaceCountMax();
    
    UFUNCTION(BlueprintCallable)
    bool GetForceSkipCloseLobbyInvitationWindow();
    
    UFUNCTION(BlueprintCallable)
    bool GetForceOpenFriendMatch();
    
    UFUNCTION(BlueprintCallable)
    bool GetForceDisableLobbyKick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEntryCheckSuspendSec() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDriftNoStartActionPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugWorldMatchType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDebugProfileTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDebugProfileCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDebugHoverProfileTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDebugHoverProfileCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getDebugDLCId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDebugCameraFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDebugCameraFocusDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDebugAppMenuData GetDebugAppMenuData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UWorld> GetCurrentLevelObjectPtr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAppCharaOpenData GetCharaOpenData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAuraType() const;
    
    UFUNCTION(BlueprintCallable)
    void EndDebugMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float DirectionalEffectDisplayDurationForHoldItem() const;
    
    UFUNCTION(BlueprintCallable)
    void ConfirmNoticeStreamingInstall();
    
    UFUNCTION(BlueprintCallable)
    void BeginDebugMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyEntryCheckSuspend() const;
    
};

