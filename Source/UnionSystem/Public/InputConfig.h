#pragma once
#include "CoreMinimal.h"
#include "InputMappingContextAndPriority.h"
#include "InputConfig.generated.h"

USTRUCT(BlueprintType)
struct FInputConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingContextAndPriority> Contexts;
    
    UNIONSYSTEM_API FInputConfig();
};

