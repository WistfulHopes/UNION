#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ESaveDataStatus.h"
#include "EStageId.h"
#include "UserSaveUserNetworkSettingsRequest.h"
#include "SaveDataManageSubsystem.generated.h"

class UAppSaveGame;
class UNetSaveGame;
class UOptionConfigSaveGame;
class UPlayLogSaveGame;
class UReplaySaveGame;
class USaveGame;
class USavingIcon;

UCLASS(Blueprintable)
class UNIONSYSTEM_API USaveDataManageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveComplete, ESaveDataStatus, Status);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadComplete, ESaveDataStatus, Status);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadComplete OnLoadComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveComplete OnSaveComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USavingIcon* AutoSaveIconWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> LoadedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppSaveGame* _AppSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayLogSaveGame* _PlayLogSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionConfigSaveGame* _OptionConfigSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplaySaveGame* _ReplaySaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetSaveGame* _NetSaveGame;
    
public:
    USaveDataManageSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void StartAutoSavingAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveAutoReplayAsync(EStageId StageId);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataStatus SaveAutoPlayLogSync();
    
    UFUNCTION(BlueprintCallable)
    void SaveAutoPlayLogAsync();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataStatus SaveAutoOptionConfigSync();
    
    UFUNCTION(BlueprintCallable)
    void SaveAutoOptionConfigAsync();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataStatus SaveAutoNetSync();
    
    UFUNCTION(BlueprintCallable)
    void SaveAutoNetAsync();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataStatus SaveAutoAppSync();
    
    UFUNCTION(BlueprintCallable)
    void SaveAutoAppAsync();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSaveErrorPopupClosedFunc();
    
    UFUNCTION(BlueprintCallable)
    void OnSaveCompleteFunc(const FString& SlotName, const int32 UserIndex, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleteFunc(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void OnInitReplaySaveCompleteFunc(const FString& SlotName, const int32 UserIndex, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    ESaveDataStatus LoadReplayConfigSyncByIndex(int32 ReplaySlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void LoadReplayConfigAsync(EStageId StageId);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataStatus LoadAutoPlayLogSync();
    
    UFUNCTION(BlueprintCallable)
    void LoadAutoPlayLogAsync();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataStatus LoadAutoOptionConfigSync();
    
    UFUNCTION(BlueprintCallable)
    void LoadAutoOptionConfigAsync();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataStatus LoadAutoNetSync();
    
    UFUNCTION(BlueprintCallable)
    void LoadAutoNetAsync();
    
    UFUNCTION(BlueprintCallable)
    void LoadAutoDemoAppAsync();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataStatus LoadAutoAppSync();
    
    UFUNCTION(BlueprintCallable)
    void LoadAutoAppAsync();
    
    UFUNCTION(BlueprintCallable)
    bool IsValidReplayRomVersion(int32& OutRomVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidReplayDataVersion(int32& OutCurVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidPlayLogRomVersion(int32& OutRomVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidPlayLogDataVersion(int32& OutCurVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidOptionConfigRomVersion(int32& OutRomVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidOptionConfigDataVersion(int32& OutCurVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidNetRomVersion(int32& OutRomVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidNetDataVersion(int32& OutCurVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidAppRomVersion(int32& OutRomVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidAppDataVersion(int32& OutCurVersion, int32& OutSavedVersion, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedReplaySaveData(EStageId StageId, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedPlayLogSaveData(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedOptionConfigSaveData(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedNetSaveData(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedAppSaveData(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable)
    void InitSaveAutoReplayAsyncByStage(EStageId StageId);
    
    UFUNCTION(BlueprintCallable)
    void InitSaveAutoReplayAsyncBySlot(int32 ReplaySlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetUserNetworkSettingsFromLocalData(FUserSaveUserNetworkSettingsRequest& OutRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplaySaveGame* GetReplaySaveGamePtr();
    
    UFUNCTION(BlueprintCallable)
    int32 GetReplaySaveCount(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayLogSaveGame* GetPlayLogSaveGamePtr();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayLogSaveCount(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOptionConfigSaveGame* GetOptionConfigSaveGamePtr();
    
    UFUNCTION(BlueprintCallable)
    int32 GetOptionConfigSaveCount(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNetSaveGame* GetNetSaveGamePtr();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNetSaveCount(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAppSaveGame* GetAppSaveGamePtr();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAppSaveCount(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool ExistsAutoReplaySaveGameByStage(EStageId StageId, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool ExistsAutoReplaySaveGameByIndex(int32 ReplaySlotIndex, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool ExistsAutoReplayPS4SaveGameByIndex(int32 ReplaySlotIndex, ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool ExistsAutoPlayLog(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool ExistsAutoOptionConfig(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool ExistsAutoNet(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool ExistsAutoAppPS4(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool ExistsAutoAppDemo(ESaveDataStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    bool ExistsAutoApp(ESaveDataStatus& OutStatus);
    
private:
    UFUNCTION(BlueprintCallable)
    void EndAutoSavingAnimation();
    
};

