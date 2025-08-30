#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ReadyOption.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UReadyOption : public UUserWidget {
    GENERATED_BODY()
public:
    UReadyOption();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOnOffAnimation(bool bIsOn, bool SeEnabled);
    
};

