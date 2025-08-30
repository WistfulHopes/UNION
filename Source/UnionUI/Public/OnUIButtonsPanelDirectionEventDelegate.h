#pragma once
#include "CoreMinimal.h"
#include "EUnionUIControlDir.h"
#include "OnUIButtonsPanelDirectionEventDelegate.generated.h"

class UUnionUIButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUIButtonsPanelDirectionEvent, UUnionUIButtonBase*, Button, int32, ButtonIndex, EUnionUIControlDir, Dir);

