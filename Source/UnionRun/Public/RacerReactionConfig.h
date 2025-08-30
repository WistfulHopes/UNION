#pragma once
#include "CoreMinimal.h"
#include "RacerReactionTypeParam.h"
#include "RacerReactionConfig.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerReactionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OvertakeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OvertakenRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRacerReactionTypeParam> TypeParam;
    
    FRacerReactionConfig();
};

