#pragma once
#include "CoreMinimal.h"
#include "OnPushedDelegateDelegate.generated.h"

class UObject;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPushedDelegate, UUserWidget*, EventedWidget, UObject*, LogicObject);

