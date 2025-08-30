#pragma once
#include "CoreMinimal.h"
#include "FriendCancelFriendRequest.generated.h"

USTRUCT(BlueprintType)
struct FFriendCancelFriendRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetUserId;
    
    UNIONSYSTEM_API FFriendCancelFriendRequest();
};

