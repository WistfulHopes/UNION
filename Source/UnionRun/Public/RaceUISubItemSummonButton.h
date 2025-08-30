#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "RaceUISubItemSummonButton.generated.h"

class UBorder;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API URaceUISubItemSummonButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BorderButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAvailable;
    
public:
    URaceUISubItemSummonButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSummonInputKey(const FKey& Key, bool IsKeyboard);
    
};

