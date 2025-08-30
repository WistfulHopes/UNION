#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EGadgetId.h"
#include "RaceUISubGadget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubGadget : public UUserWidget {
    GENERATED_BODY()
public:
    URaceUISubGadget();

    UFUNCTION(BlueprintCallable)
    bool IsNotEnableGadget(EGadgetId gadgetId);
    
};

