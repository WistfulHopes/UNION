#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PrimaryMachineEffectDataAsset.generated.h"

class UDataTable;
class UNiagaraSystem;

UCLASS(Blueprintable)
class UNION_API UPrimaryMachineEffectDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetLODIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UNiagaraSystem>> EffectAssets;
    
    UPrimaryMachineEffectDataAsset();

    UFUNCTION(BlueprintCallable)
    void AutoSet();
    
};

