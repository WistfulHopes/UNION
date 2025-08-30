#pragma once
#include "CoreMinimal.h"
#include "Components/Button.h"
#include "OutOfContentButton.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UOutOfContentButton : public UButton {
    GENERATED_BODY()
public:
    UOutOfContentButton();

private:
    UFUNCTION(BlueprintCallable)
    void OnUnHoveredImpl();
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredImpl();
    
};

