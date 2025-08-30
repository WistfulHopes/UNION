#pragma once
#include "CoreMinimal.h"
#include "UnionVATSequenceInfo.generated.h"

USTRUCT(BlueprintType)
struct FUnionVATSequenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnimationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Position;
    
    UNIONSYSTEM_API FUnionVATSequenceInfo();
};

