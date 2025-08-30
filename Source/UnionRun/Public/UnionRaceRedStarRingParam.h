#pragma once
#include "CoreMinimal.h"
#include "UserRedStarRingAcquisitionProperty.h"
#include "UnionRaceRedStarRingParam.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionRaceRedStarRingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRedStarRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserRedStarRingAcquisitionProperty> AcquisitionPerPlayer;
    
    FUnionRaceRedStarRingParam();
};

