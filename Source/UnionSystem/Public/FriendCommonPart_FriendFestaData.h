#pragma once
#include "CoreMinimal.h"
#include "FriendCommonPart_FriendFestaData.generated.h"

USTRUCT(BlueprintType)
struct FFriendCommonPart_FriendFestaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 winCount;
    
    UNIONSYSTEM_API FFriendCommonPart_FriendFestaData();
};

