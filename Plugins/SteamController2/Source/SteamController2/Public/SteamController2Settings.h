#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SteamController2KeyMapping.h"
#include "SteamController2Settings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class STEAMCONTROLLER2_API USteamController2Settings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamController2KeyMapping> DigitalMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSteamController2KeyMapping> AnalogMappings;
    
    USteamController2Settings();

};

