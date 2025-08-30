#pragma once
#include "CoreMinimal.h"
#include "UserGetUserIdsByUidRequest_TargetUid.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserIdsByUidRequest_TargetUid {
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
    
    UNIONSYSTEM_API FUserGetUserIdsByUidRequest_TargetUid();
};

