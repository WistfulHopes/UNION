#pragma once
#include "CoreMinimal.h"
#include "MatchingLobbySettings.generated.h"

USTRUCT(BlueprintType)
struct FMatchingLobbySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScreenPercentage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScreenPercentage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameTimeBudget;
    
    UNIONSYSTEM_API FMatchingLobbySettings();
};

