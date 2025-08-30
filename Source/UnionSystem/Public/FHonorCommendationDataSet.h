#pragma once
#include "CoreMinimal.h"
#include "HonorCommendationData.h"
#include "FHonorCommendationDataSet.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FFHonorCommendationDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHonorCommendationData> DataList;
    
    FFHonorCommendationDataSet();
};

