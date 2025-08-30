#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EOnlineEnvironmentSpec.h"
#include "CommonNetworkSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=UnionNetwork)
class UNIONSYSTEM_API UCommonNetworkSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlineEnvironmentSpec OnlineEnvironmentSpec;
    
    UCommonNetworkSettings();

};

