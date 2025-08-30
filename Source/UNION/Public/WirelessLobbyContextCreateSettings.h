#pragma once
#include "CoreMinimal.h"
#include "WirelessLobbyContextCreateSettings.generated.h"

USTRUCT(BlueprintType)
struct FWirelessLobbyContextCreateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MatchmakeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HostPlayerIconId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HostPlayerIconBgColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayers;
    
    UNION_API FWirelessLobbyContextCreateSettings();
};

