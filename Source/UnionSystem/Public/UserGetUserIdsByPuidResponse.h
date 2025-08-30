#pragma once
#include "CoreMinimal.h"
#include "UserGetUserIdsByPuidResponse_UserIds.h"
#include "UserGetUserIdsByPuidResponse.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserIdsByPuidResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserGetUserIdsByPuidResponse_UserIds> UserIds;
    
    UNIONSYSTEM_API FUserGetUserIdsByPuidResponse();
};

