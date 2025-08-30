#pragma once
#include "CoreMinimal.h"
#include "UserGetUserIdsByUidRequest_TargetUid.h"
#include "UserGetUserIdsByUidRequest.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserIdsByUidRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserGetUserIdsByUidRequest_TargetUid> targetUid;
    
    UNIONSYSTEM_API FUserGetUserIdsByUidRequest();
};

