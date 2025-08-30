#pragma once
#include "CoreMinimal.h"
#include "UnionVATAnimEvent.h"
#include "UnionVATAnimEventSequence.generated.h"

USTRUCT(BlueprintType)
struct FUnionVATAnimEventSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnionVATAnimEvent> Events;
    
    UNIONSYSTEM_API FUnionVATAnimEventSequence();
};

