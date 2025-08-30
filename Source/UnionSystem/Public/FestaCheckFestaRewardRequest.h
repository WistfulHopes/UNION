#pragma once
#include "CoreMinimal.h"
#include "FestaCheckFestaRewardRequest.generated.h"

USTRUCT(BlueprintType)
struct FFestaCheckFestaRewardRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 festaId;
    
    UNIONSYSTEM_API FFestaCheckFestaRewardRequest();
};

