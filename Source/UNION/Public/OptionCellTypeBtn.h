#pragma once
#include "CoreMinimal.h"
#include "OptionCellTypeBase.h"
#include "OptionCellTypeBtn.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOptionCellTypeBtn : public UOptionCellTypeBase {
    GENERATED_BODY()
public:
    UOptionCellTypeBtn();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& Text);
    
};

