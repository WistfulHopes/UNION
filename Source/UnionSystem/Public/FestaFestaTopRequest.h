#pragma once
#include "CoreMinimal.h"
#include "FestaFestaTopRequest.generated.h"

USTRUCT(BlueprintType)
struct FFestaFestaTopRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 festaId;
    
    UNIONSYSTEM_API FFestaFestaTopRequest();
};

