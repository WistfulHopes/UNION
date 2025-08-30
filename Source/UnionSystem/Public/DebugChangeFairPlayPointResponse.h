#pragma once
#include "CoreMinimal.h"
#include "DebugChangeFairPlayPointResponse.generated.h"

USTRUCT(BlueprintType)
struct FDebugChangeFairPlayPointResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FairPlayPoint;
    
    UNIONSYSTEM_API FDebugChangeFairPlayPointResponse();
};

