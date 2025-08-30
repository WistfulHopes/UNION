#pragma once
#include "CoreMinimal.h"
#include "DebugChangeFairPlayPointRequest.generated.h"

USTRUCT(BlueprintType)
struct FDebugChangeFairPlayPointRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FairPlayPoint;
    
    UNIONSYSTEM_API FDebugChangeFairPlayPointRequest();
};

