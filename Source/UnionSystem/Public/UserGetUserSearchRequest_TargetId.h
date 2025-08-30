#pragma once
#include "CoreMinimal.h"
#include "UserGetUserSearchRequest_TargetId.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserSearchRequest_TargetId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString displayCode;
    
    UNIONSYSTEM_API FUserGetUserSearchRequest_TargetId();
};

