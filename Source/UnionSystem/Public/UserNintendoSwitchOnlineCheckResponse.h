#pragma once
#include "CoreMinimal.h"
#include "UserNintendoSwitchOnlineCheckResponse.generated.h"

USTRUCT(BlueprintType)
struct FUserNintendoSwitchOnlineCheckResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 switchOnlineCode;
    
    UNIONSYSTEM_API FUserNintendoSwitchOnlineCheckResponse();
};

