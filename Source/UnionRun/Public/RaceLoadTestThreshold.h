#pragma once
#include "CoreMinimal.h"
#include "RaceLoadTestThreshold.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRaceLoadTestThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cpu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gpu;
    
    FRaceLoadTestThreshold();
};

