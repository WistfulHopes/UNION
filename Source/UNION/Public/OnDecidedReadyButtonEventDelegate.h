#pragma once
#include "CoreMinimal.h"
#include "OnDecidedReadyButtonEventDelegate.generated.h"

class UUnionUIButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDecidedReadyButtonEvent, UUnionUIButtonBase*, InButton, int32, InPanelIndex, int32, InButtonIndex);

