#pragma once
#include "CoreMinimal.h"
#include "OnDecideGameModeEventDelegate.generated.h"

class UUnionUIButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDecideGameModeEvent, UUnionUIButtonBase*, Button);

