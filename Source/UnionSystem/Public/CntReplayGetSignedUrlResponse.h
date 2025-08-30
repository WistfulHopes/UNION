#pragma once
#include "CoreMinimal.h"
#include "CntReplayGetSignedUrlResponse.generated.h"

USTRUCT(BlueprintType)
struct FCntReplayGetSignedUrlResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString signedUrl;
    
    UNIONSYSTEM_API FCntReplayGetSignedUrlResponse();
};

