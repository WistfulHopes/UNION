#pragma once
#include "CoreMinimal.h"
#include "MariaSteamEncryptedAppTicketCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMariaSteamEncryptedAppTicketCompletedDelegate, bool, Success, const TArray<uint8>&, Ticket);

