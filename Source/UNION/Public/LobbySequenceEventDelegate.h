#pragma once
#include "CoreMinimal.h"
#include "EPrivateMatchPlayType.h"
#include "LobbySequenceEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbySequenceEvent, EPrivateMatchPlayType, PlayType);

