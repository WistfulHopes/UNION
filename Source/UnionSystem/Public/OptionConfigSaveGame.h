#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ControllerSettings.h"
#include "GraphicsSettings.h"
#include "OnlineSettings.h"
#include "OptionAudioSettings.h"
#include "OptionInternationalization.h"
#include "OptionRaceSettings.h"
#include "SaveDataHeader.h"
#include "OptionConfigSaveGame.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UOptionConfigSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataHeader _Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineSettings _OnlineSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionRaceSettings _RaceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerSettings> _ControllerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionInternationalization _OptionInternationalizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGraphicsSettings _GraphicsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionAudioSettings _AudioSettings;
    
    UOptionConfigSaveGame();

};

