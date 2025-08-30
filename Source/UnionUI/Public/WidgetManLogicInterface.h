#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WidgetManLogicInterface.generated.h"

class UUserWidget;

UINTERFACE(Blueprintable)
class UNIONUI_API UWidgetManLogicInterface : public UInterface {
    GENERATED_BODY()
};

class UNIONUI_API IWidgetManLogicInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRegainPriority(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushed(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPoped(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLostPriority(UUserWidget* Widget);
    
};

