#pragma once
#include "CoreMinimal.h"
#include "FriendCommonPart_FriendData.h"
#include "FriendGetFriendListResponse.generated.h"

USTRUCT(BlueprintType)
struct FFriendGetFriendListResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendCommonPart_FriendData> appFriendDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendCommonPart_FriendData> applyingFriendDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendCommonPart_FriendData> acceptWaitingFriendDatas;
    
    UNIONSYSTEM_API FFriendGetFriendListResponse();
};

