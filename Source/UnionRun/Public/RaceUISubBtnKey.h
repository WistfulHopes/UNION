#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "RaceUISubBtnKey.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubBtnKey : public UUserWidget {
    GENERATED_BODY()
public:
    URaceUISubBtnKey();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonState(int32 InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMouseButtonIndex(FKey InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetKeyDisplayName(FKey InKey, int32 PlayerControllerIndex) const;
    
};

