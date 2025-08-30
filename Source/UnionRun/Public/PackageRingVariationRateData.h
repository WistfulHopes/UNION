#pragma once
#include "CoreMinimal.h"
#include "PackageRingVariationRateData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FPackageRingVariationRateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ring10_Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ring20_Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ring100_Rate;
    
    FPackageRingVariationRateData();
};

