#pragma once
#include "CoreMinimal.h"
#include "FriendApplyFriendRequest.generated.h"

USTRUCT(BlueprintType)
struct FFriendApplyFriendRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBulk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> targetIds;
    
    UNIONSYSTEM_API FFriendApplyFriendRequest();
};

