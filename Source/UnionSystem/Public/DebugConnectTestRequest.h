#pragma once
#include "CoreMinimal.h"
#include "DebugConnectTestRequest.generated.h"

USTRUCT(BlueprintType)
struct FDebugConnectTestRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString inputData1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 inputData2;
    
    UNIONSYSTEM_API FDebugConnectTestRequest();
};

