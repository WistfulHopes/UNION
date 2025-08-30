#pragma once
#include "CoreMinimal.h"
#include "OnPopedDelegateDelegate.generated.h"

class UObject;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPopedDelegate, UUserWidget*, EventedWidget, UObject*, LogicObject);

