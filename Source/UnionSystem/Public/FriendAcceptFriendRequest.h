#pragma once
#include "CoreMinimal.h"
#include "FriendAcceptFriendRequest.generated.h"

USTRUCT(BlueprintType)
struct FFriendAcceptFriendRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetUserId;
    
    UNIONSYSTEM_API FFriendAcceptFriendRequest();
};

