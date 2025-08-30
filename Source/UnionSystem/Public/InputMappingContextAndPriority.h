#pragma once
#include "CoreMinimal.h"
#include "InputMappingContextAndPriority.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct FInputMappingContextAndPriority {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* InputMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Options;
    
    UNIONSYSTEM_API FInputMappingContextAndPriority();
};

