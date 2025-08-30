#pragma once
#include "CoreMinimal.h"
#include "UserGetUserIdsByPuidRequest_TargetPuid.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserIdsByPuidRequest_TargetPuid {
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
    
    UNIONSYSTEM_API FUserGetUserIdsByPuidRequest_TargetPuid();
};

