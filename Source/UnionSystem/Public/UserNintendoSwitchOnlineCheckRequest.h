#pragma once
#include "CoreMinimal.h"
#include "UserNintendoSwitchOnlineCheckRequest.generated.h"

USTRUCT(BlueprintType)
struct FUserNintendoSwitchOnlineCheckRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString identityProviderEnv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString idToken;
    
    UNIONSYSTEM_API FUserNintendoSwitchOnlineCheckRequest();
};

