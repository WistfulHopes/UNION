#pragma once
#include "CoreMinimal.h"
#include "WirelessLobbyContextSearchSettings.generated.h"

USTRUCT(BlueprintType)
struct FWirelessLobbyContextSearchSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MatchmakeKey;
    
    UNION_API FWirelessLobbyContextSearchSettings();
};

