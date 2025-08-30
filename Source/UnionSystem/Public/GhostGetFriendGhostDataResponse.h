#pragma once
#include "CoreMinimal.h"
#include "GhostGetFriendGhostDataResponse.generated.h"

USTRUCT(BlueprintType)
struct FGhostGetFriendGhostDataResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString signedUrl;
    
    UNIONSYSTEM_API FGhostGetFriendGhostDataResponse();
};

