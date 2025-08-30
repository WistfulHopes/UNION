#pragma once
#include "CoreMinimal.h"
#include "OnRegainPriorityDelegateDelegate.generated.h"

class UObject;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRegainPriorityDelegate, UUserWidget*, EventedWidget, UObject*, LogicObject);

