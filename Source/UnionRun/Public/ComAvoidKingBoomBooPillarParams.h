#pragma once
#include "CoreMinimal.h"
#include "ComAvoidKingBoomBooPillarParams.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FComAvoidKingBoomBooPillarParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistAvoidPillar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShiftLineMargineAvoidPillar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineChangeValPerFrameAvoidPillar;
    
    FComAvoidKingBoomBooPillarParams();
};

