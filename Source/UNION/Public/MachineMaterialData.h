#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MachineMaterialData.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct UNION_API FMachineMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> CacheScalarParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> CacheVectorParameter;
    
    FMachineMaterialData();
};

