#pragma once
#include "CoreMinimal.h"
#include "UserGetUserSearchRequest_TargetId.h"
#include "UserGetUserSearchRequest.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserSearchRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserGetUserSearchRequest_TargetId> targetIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 selectFlg;
    
    UNIONSYSTEM_API FUserGetUserSearchRequest();
};

