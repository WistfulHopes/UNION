#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EGadgetId.h"
#include "UnionRaceGadgetUI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceGadgetUI : public UUserWidget {
    GENERATED_BODY()
public:
    UUnionRaceGadgetUI();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeIconsByRacerIndex(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeIconsByGadgetInfo(const TArray<EGadgetId>& GadgetInfo);
    
};

