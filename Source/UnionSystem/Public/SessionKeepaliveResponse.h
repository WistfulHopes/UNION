#pragma once
#include "CoreMinimal.h"
#include "SessionKeepaliveResponse.generated.h"

USTRUCT(BlueprintType)
struct FSessionKeepaliveResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sessionUpdatedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sessionExpirationTimeSec;
    
    UNIONSYSTEM_API FSessionKeepaliveResponse();
};

