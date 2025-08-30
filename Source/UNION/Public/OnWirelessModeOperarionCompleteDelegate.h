#pragma once
#include "CoreMinimal.h"
#include "OnlineErrorBP.h"
#include "OnWirelessModeOperarionCompleteDelegate.generated.h"

class UWirelessLobbyContext;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnWirelessModeOperarionComplete, UWirelessLobbyContext*, WirelessLobbyContext, const FOnlineErrorBP&, Error);

