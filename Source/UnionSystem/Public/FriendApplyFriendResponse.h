#pragma once
#include "CoreMinimal.h"
#include "FriendCommonPart_FriendData.h"
#include "FriendApplyFriendResponse.generated.h"

USTRUCT(BlueprintType)
struct FFriendApplyFriendResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendCommonPart_FriendData> appliedByTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendCommonPart_FriendData> applyTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendCommonPart_FriendData> friendTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> applyDenyTargetIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> noneGameDataTargetIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> inconsistentDataTargetIds;
    
    UNIONSYSTEM_API FFriendApplyFriendResponse();
};

