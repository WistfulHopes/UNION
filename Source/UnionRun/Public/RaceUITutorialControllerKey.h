#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "ETutorialAction.h"
#include "RaceUITutorialControllerKey.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUITutorialControllerKey : public UUserWidget {
    GENERATED_BODY()
public:
    URaceUITutorialControllerKey();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHintIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetTutorialKey(ETutorialAction tutorialAction, int32 Index);
    
};

