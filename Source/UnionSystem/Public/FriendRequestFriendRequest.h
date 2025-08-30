#pragma once
#include "CoreMinimal.h"
#include "FriendRequestFriendRequest.generated.h"

USTRUCT(BlueprintType)
struct FFriendRequestFriendRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetUserId;
    
    UNIONSYSTEM_API FFriendRequestFriendRequest();
};

