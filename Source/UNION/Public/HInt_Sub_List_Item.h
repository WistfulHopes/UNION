#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonBase.h"
#include "HintDataTableRow.h"
#include "HInt_Sub_List_Item.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UHInt_Sub_List_Item : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UHInt_Sub_List_Item();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTipsButtonData(FHintDataTableRow InHintData);
    
};

