#pragma once
#include "CoreMinimal.h"
#include "FullGameStoreDialogDecideEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFullGameStoreDialogDecideEvent, bool, IsAccept);

