#pragma once
#include "CoreMinimal.h"
#include "UserGetUserIdsByUidResponse_UserIds.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserIdsByUidResponse_UserIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString identityProviderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString providerEnv;
    
    UNIONSYSTEM_API FUserGetUserIdsByUidResponse_UserIds();
};

