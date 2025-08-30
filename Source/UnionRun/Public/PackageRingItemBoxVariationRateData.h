#pragma once
#include "CoreMinimal.h"
#include "PackageRingVariationRateData.h"
#include "PackageRingItemBoxVariationRateData.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FPackageRingItemBoxVariationRateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPackageRingVariationRateData NormalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPackageRingVariationRateData SpecialBox;
    
    FPackageRingItemBoxVariationRateData();
};

