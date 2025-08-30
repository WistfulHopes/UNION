#pragma once
#include "CoreMinimal.h"
#include "TireMaterialData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct UNION_API FTireMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FTireMaterialData();
};

