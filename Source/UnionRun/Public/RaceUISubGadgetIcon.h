#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EGadgetId.h"
#include "RaceUISubGadgetIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubGadgetIcon : public UUserWidget {
    GENERATED_BODY()
public:
    URaceUISubGadgetIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconMaterial(int32 IconIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetId(EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGadgetId GetGadgetId() const;
    
};

