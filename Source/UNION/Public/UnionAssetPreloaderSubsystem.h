#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EStageId.h"
#include "UnionAssetPreloaderSubsystem.generated.h"

class UPreloadAssetData;

UCLASS(Blueprintable)
class UNION_API UUnionAssetPreloaderSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPreloadComplete);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPreloadAssetData*> BootPreloadAssetList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> LoadedMachinePartsAssetIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> LoadedDriverAssetIds;
    
public:
    UUnionAssetPreloaderSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnloadStageAssets2();
    
    UFUNCTION(BlueprintCallable)
    void UnloadStageAssets();
    
    UFUNCTION(BlueprintCallable)
    int32 UnloadNotSelectedMachinePartsAssets();
    
    UFUNCTION(BlueprintCallable)
    int32 UnloadNotSelectedMachineEffectAssets();
    
    UFUNCTION(BlueprintCallable)
    int32 UnloadNotSelectedDriverAssets();
    
    UFUNCTION(BlueprintCallable)
    void UnloadBootAssets();
    
    UFUNCTION(BlueprintCallable)
    void UnloadAnStageAssets2(const EStageId& StageId);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureStreamingEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool PreloadStageAssets2(const TArray<EStageId>& StageIds, bool bIsGatherLoad);
    
    UFUNCTION(BlueprintCallable)
    void PreLoadStageAssets();
    
    UFUNCTION(BlueprintCallable)
    void PreloadBootAssets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableUnloadDriverCuesheets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableMenuPreloadAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableBootPreloadAsset() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddPreloadStageAssets2(const EStageId& StageId);
    
};

