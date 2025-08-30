#pragma once
#include "CoreMinimal.h"
#include "WidgetEventDispatcherStockerDelegateDelegate.h"
#include "WidgetEventDispatcherStocker.generated.h"

USTRUCT(BlueprintType)
struct FWidgetEventDispatcherStocker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetEventDispatcherStockerDelegate BindEvent;
    
    UNIONUI_API FWidgetEventDispatcherStocker();
};

