#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "NetworkClientSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=NetworkClient)
class UNIONSYSTEM_API UNetworkClientSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerStagingName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CrmApplicationId;
    
    UNetworkClientSettings();

};

