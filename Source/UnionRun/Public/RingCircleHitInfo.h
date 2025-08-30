#pragma once
#include "CoreMinimal.h"
#include "RingCircleHitInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRingCircleHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsorberRacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsorberPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AbsorberObject;
    
    UNIONRUN_API FRingCircleHitInfo();
};

