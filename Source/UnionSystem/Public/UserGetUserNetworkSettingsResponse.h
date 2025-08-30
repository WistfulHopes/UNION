#pragma once
#include "CoreMinimal.h"
#include "Common_UserNetworkSettings.h"
#include "UserGetUserNetworkSettingsResponse.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserNetworkSettingsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommon_UserNetworkSettings> userNetworkSettings;
    
    UNIONSYSTEM_API FUserGetUserNetworkSettingsResponse();
};

