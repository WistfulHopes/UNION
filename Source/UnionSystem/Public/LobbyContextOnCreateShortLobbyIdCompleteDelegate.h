#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnCreateShortLobbyIdCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyContextOnCreateShortLobbyIdComplete, const FString&, ShortLobbyId);

