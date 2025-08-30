#pragma once
#include "CoreMinimal.h"
#include "EUnionUIControlDir.h"
#include "OnUISceneDirectionEventDelegate.generated.h"

class UUnionUIButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnUISceneDirectionEvent, UUnionUIButtonBase*, Button, int32, PanelIndex, int32, ButtonIndex, EUnionUIControlDir, Dir);

