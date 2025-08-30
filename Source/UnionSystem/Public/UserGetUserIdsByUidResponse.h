#pragma once
#include "CoreMinimal.h"
#include "UserGetUserIdsByUidResponse_UserIds.h"
#include "UserGetUserIdsByUidResponse.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserIdsByUidResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserGetUserIdsByUidResponse_UserIds> UserIds;
    
    UNIONSYSTEM_API FUserGetUserIdsByUidResponse();
};

