#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "EDomainIndex.h"
#include "UnionRaceDomainData.h"
#include "UnionRacePreCreateParam.h"
#include "EGroupRaceRule.h"
#include "ERaceType.h"
#include "GroupRaceRuleData.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateLoadAssets.generated.h"

class UDataTable;
class UObject;
class UPrimaryStageDataAsset;
class UResourceHolder;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateLoadAssets : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnionRacePreCreateParam PreCreateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadedStageAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadedDriverAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadedMachinePartsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadedMachineEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePubCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> DebugFirstCourseAssetIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StageDataAssetTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrimaryStageDataAsset*> StageDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceHolder* ResourceHolder;
    
public:
    URaceSequenceStateLoadAssets(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="InWorldContextObject"))
    static bool StartStageLevels(const UObject* InWorldContextObject, FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadNative();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldNativeLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadedStageAsset(int32 StageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetGroupRuleData(EGroupRaceRule GroupRaceRule, FGroupRaceRuleData& GroupRaceRuleData) const;
    
    UFUNCTION(BlueprintCallable)
    void EndMakePreCreateParam();
    
    UFUNCTION(BlueprintCallable)
    void BeginMakePreCreateParam();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static bool AddTravelRingLevels(const UObject* InWorldContextObject, EDomainIndex InDomainIndex, const UPrimaryStageDataAsset* InStageDataAsset, int32 InLightChannel, const FVector& InLevelOffset, ERaceType InRaceType);
    
    UFUNCTION(BlueprintCallable)
    void AddDomainData(const FUnionRaceDomainData& InDomainData);
    
    UFUNCTION(BlueprintCallable)
    void AddBackgroundLevelName(const FString& LevelName);
    
};

