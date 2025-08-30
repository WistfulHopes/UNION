#pragma once
#include "CoreMinimal.h"
#include "EGameActivityOutcomeType.h"
#include "EndActivityOption.generated.h"

USTRUCT(BlueprintType)
struct FEndActivityOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameActivityOutcomeType Outcome;
    
    UNIONSYSTEM_API FEndActivityOption();
};

