#pragma once
#include "CoreMinimal.h"
#include "Common_UserNetworkSettings.h"
#include "UserSaveUserNetworkSettingsResponse.generated.h"

USTRUCT(BlueprintType)
struct FUserSaveUserNetworkSettingsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommon_UserNetworkSettings userNetworkSettings;
    
    UNIONSYSTEM_API FUserSaveUserNetworkSettingsResponse();
};

