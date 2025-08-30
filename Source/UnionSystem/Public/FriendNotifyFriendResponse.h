#pragma once
#include "CoreMinimal.h"
#include "FriendNotifyFriendResponse.generated.h"

USTRUCT(BlueprintType)
struct FFriendNotifyFriendResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isReceive;
    
    UNIONSYSTEM_API FFriendNotifyFriendResponse();
};

