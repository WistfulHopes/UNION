#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESaveDataStatus.h"
#include "SaveDataSetting.generated.h"

class UWorld;

UCLASS(Abstract, Blueprintable)
class UNION_API ASaveDataSetting : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplayDataResult, bool, bSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayLogDataResult, bool, bSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNetDataResult, bool, bSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConfigDataResult, bool, bSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAppDataResult, bool, bSuccess);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConfigDataResult ConfigDataResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAppDataResult AppDataResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayLogDataResult PlayLogDataResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReplayDataResult ReplayDataResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetDataResult NetDataResultDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> ReloadLevel;
    
public:
    ASaveDataSetting(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnReplayDataSaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayLogDataSaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnNetDataSaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnNetDataLoadComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnConfigDataSaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnConfigDataLoadComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnAppDataSaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnAppDataLoadComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    bool InitReplayData();
    
    UFUNCTION(BlueprintCallable)
    bool InitPlayLogData();
    
    UFUNCTION(BlueprintCallable)
    bool InitNetData();
    
    UFUNCTION(BlueprintCallable)
    bool InitConfigData();
    
    UFUNCTION(BlueprintCallable)
    bool InitAppData();
    
};

