#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "NetworkClientDevelopmentSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=NetworkClientDevelopment)
class UNIONSYSTEM_API UNetworkClientDevelopmentSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CollectKeyMachine;
    
    UNetworkClientDevelopmentSettings();

};

