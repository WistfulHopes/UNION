#pragma once
#include "CoreMinimal.h"
#include "UserGetUserNetworkSettingsRequest.generated.h"

USTRUCT(BlueprintType)
struct FUserGetUserNetworkSettingsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TargetUserIds;
    
    UNIONSYSTEM_API FUserGetUserNetworkSettingsRequest();
};

