#pragma once
#include "CoreMinimal.h"
#include "FriendCommonPart_FriendData.h"
#include "FriendRequestFriendResponse.generated.h"

USTRUCT(BlueprintType)
struct FFriendRequestFriendResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFriendCommonPart_FriendData friendTarget;
    
    UNIONSYSTEM_API FFriendRequestFriendResponse();
};

