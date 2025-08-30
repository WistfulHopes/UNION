#pragma once
#include "CoreMinimal.h"
#include "FriendGetFriendLastDateResponse.generated.h"

USTRUCT(BlueprintType)
struct FFriendGetFriendLastDateResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString updatedAt;
    
    UNIONSYSTEM_API FFriendGetFriendLastDateResponse();
};

