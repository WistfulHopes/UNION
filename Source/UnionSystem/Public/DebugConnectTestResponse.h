#pragma once
#include "CoreMinimal.h"
#include "DebugConnectTestResponse.generated.h"

USTRUCT(BlueprintType)
struct FDebugConnectTestResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString outputData1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 outputData2;
    
    UNIONSYSTEM_API FDebugConnectTestResponse();
};

