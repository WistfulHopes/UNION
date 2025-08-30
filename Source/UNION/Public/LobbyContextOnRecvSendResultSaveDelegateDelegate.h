#pragma once
#include "CoreMinimal.h"
#include "LobbyContextOnRecvSendResultSaveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyContextOnRecvSendResultSaveDelegate, const FString&, InEntryRaceId);

