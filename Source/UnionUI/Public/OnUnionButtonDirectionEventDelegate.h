#pragma once
#include "CoreMinimal.h"
#include "EUnionUIControlDir.h"
#include "OnUnionButtonDirectionEventDelegate.generated.h"

class UUnionUIButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnionButtonDirectionEvent, UUnionUIButtonBase*, Button, EUnionUIControlDir, Dir);

