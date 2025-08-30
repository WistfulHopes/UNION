#pragma once
#include "CoreMinimal.h"
#include "OnUISceneEventDelegate.generated.h"

class UUnionUIButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUISceneEvent, UUnionUIButtonBase*, Button, int32, PanelIndex, int32, ButtonIndex);

