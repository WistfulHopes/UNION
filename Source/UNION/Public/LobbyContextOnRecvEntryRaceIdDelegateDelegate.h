#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnRecvEntryRaceIdDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyContextOnRecvEntryRaceIdDelegate, const FString&, InEntryRaceId);

