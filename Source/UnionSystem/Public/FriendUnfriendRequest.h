#pragma once
#include "CoreMinimal.h"
#include "FriendUnfriendRequest.generated.h"

USTRUCT(BlueprintType)
struct FFriendUnfriendRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetUserId;
    
    UNIONSYSTEM_API FFriendUnfriendRequest();
};

