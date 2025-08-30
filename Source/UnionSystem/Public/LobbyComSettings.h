#pragma once
#include "CoreMinimal.h"
#include "LobbyComSettings.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FLobbyComSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AverageOnlineRank;
    
    FLobbyComSettings();
};

