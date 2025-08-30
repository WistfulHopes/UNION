#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PackageRingItemBoxVariationRateData.h"
#include "RankGroupPackageRingVariationRateDataTable.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRankGroupPackageRingVariationRateDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPackageRingItemBoxVariationRateData PackageRingVariationRateData___RankGroup1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPackageRingItemBoxVariationRateData PackageRingVariationRateData___RankGroup2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPackageRingItemBoxVariationRateData PackageRingVariationRateData___RankGroup3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPackageRingItemBoxVariationRateData PackageRingVariationRateData___RankGroup4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPackageRingItemBoxVariationRateData PackageRingVariationRateData___RankGroup5;
    
    FRankGroupPackageRingVariationRateDataTable();
};

