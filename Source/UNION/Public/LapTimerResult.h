#pragma once
#include "CoreMinimal.h"
#include "LapTimerResult.generated.h"

USTRUCT(BlueprintType)
struct FLapTimerResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Second;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    UNION_API FLapTimerResult();
};

