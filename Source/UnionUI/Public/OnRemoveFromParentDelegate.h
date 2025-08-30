#pragma once
#include "CoreMinimal.h"
#include "OnRemoveFromParentDelegate.generated.h"

class UUnionUIPopupWindowBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoveFromParent, UUnionUIPopupWindowBase*, PopupWindow);

