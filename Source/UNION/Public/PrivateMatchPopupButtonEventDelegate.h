#pragma once
#include "CoreMinimal.h"
#include "PrivateMatchPopupButtonEventDelegate.generated.h"

class UUnionUIButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPrivateMatchPopupButtonEvent, UUnionUIButtonBase*, Button, int32, PanelIndex, int32, ButtonIndex);

