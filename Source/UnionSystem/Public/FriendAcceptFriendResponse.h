#pragma once
#include "CoreMinimal.h"
#include "FriendCommonPart_FriendData.h"
#include "FriendAcceptFriendResponse.generated.h"

USTRUCT(BlueprintType)
struct FFriendAcceptFriendResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFriendCommonPart_FriendData friendTarget;
    
    UNIONSYSTEM_API FFriendAcceptFriendResponse();
};

