#pragma once
#include "CoreMinimal.h"
#include "LobbyOnlineSettings.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FLobbyOnlineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCrossplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RomVersion;
    
    FLobbyOnlineSettings();
};

