#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EItemId.h"
#include "PartyRaceItemSwitchDetail.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRaceItemSwitchDetail : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemId CurrentItem;
    
    UPartyRaceItemSwitchDetail();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItem(EItemId InItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDescription();
    
};

