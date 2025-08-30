#pragma once
#include "CoreMinimal.h"
#include "OnLostPriorityDelegateDelegate.generated.h"

class UObject;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLostPriorityDelegate, UUserWidget*, EventedWidget, UObject*, LogicObject);

