#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonsPanel.h"
#include "UnionUICrossButtons.generated.h"

class UUnionUIButtonBase;

UCLASS(Blueprintable)
class UNIONUI_API UUnionUICrossButtons : public UUnionUIButtonsPanel {
    GENERATED_BODY()
public:
    UUnionUICrossButtons();

    UFUNCTION(BlueprintCallable)
    void SetCrossButtons(UUnionUIButtonBase* UpButton, UUnionUIButtonBase* RightButton, UUnionUIButtonBase* DownButton, UUnionUIButtonBase* LeftButton);
    
};

