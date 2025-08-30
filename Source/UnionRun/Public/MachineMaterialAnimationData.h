#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVehicleMaterialAnimationType.h"
#include "MachineMaterialAnimationData.generated.h"

class UCurveTable;
class UMaterial;

USTRUCT(BlueprintType)
struct UNIONRUN_API FMachineMaterialAnimationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleMaterialAnimationType AnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* CurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterial>> TargetMatreials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetTag;
    
    FMachineMaterialAnimationData();
};

