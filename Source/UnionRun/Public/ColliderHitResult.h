#pragma once
#include "CoreMinimal.h"
#include "ColliderHitResult.generated.h"

class UUnionRacerStatusObject;

USTRUCT(BlueprintType)
struct FColliderHitResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacerStatusObject* RacerStatusObject;
    
    UNIONRUN_API FColliderHitResult();
};

