#pragma once
#include "CoreMinimal.h"
#include "LobbyDoesMatchOnlineSettings.generated.h"

USTRUCT(BlueprintType)
struct FLobbyDoesMatchOnlineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrossPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHostAllowCrossPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HostPlatform;
    
    UNIONSYSTEM_API FLobbyDoesMatchOnlineSettings();
};

