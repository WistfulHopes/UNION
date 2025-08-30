#pragma once
#include "CoreMinimal.h"
#include "FriendRejectFriendRequest.generated.h"

USTRUCT(BlueprintType)
struct FFriendRejectFriendRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetUserId;
    
    UNIONSYSTEM_API FFriendRejectFriendRequest();
};

