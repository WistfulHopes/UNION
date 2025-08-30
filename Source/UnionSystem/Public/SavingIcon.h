#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SavingIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONSYSTEM_API USavingIcon : public UUserWidget {
    GENERATED_BODY()
public:
    USavingIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAnimIn();
    
};

