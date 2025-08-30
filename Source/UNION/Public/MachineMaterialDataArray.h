#pragma once
#include "CoreMinimal.h"
#include "MachineMaterialData.h"
#include "MachineMaterialDataArray.generated.h"

USTRUCT(BlueprintType)
struct UNION_API FMachineMaterialDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMachineMaterialData> Values;
    
    FMachineMaterialDataArray();
};

