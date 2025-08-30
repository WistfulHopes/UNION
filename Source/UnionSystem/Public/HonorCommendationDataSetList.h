#pragma once
#include "CoreMinimal.h"
#include "FHonorCommendationDataSet.h"
#include "HonorCommendationDataSetList.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FHonorCommendationDataSetList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFHonorCommendationDataSet> DataSets;
    
    FHonorCommendationDataSetList();
};

