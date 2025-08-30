#pragma once
#include "CoreMinimal.h"
#include "UserGetUserIdsByPuidRequest_TargetPuid.h"
#include "UserGetUserIdsByPuidRequest.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserIdsByPuidRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserGetUserIdsByPuidRequest_TargetPuid> targetPuid;
    
    UNIONSYSTEM_API FUserGetUserIdsByPuidRequest();
};

