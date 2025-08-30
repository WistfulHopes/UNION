#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonBase.h"
#include "EPartyRaceConfirmButton.h"
#include "PartyRaceSubOptionBtn.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UPartyRaceSubOptionBtn : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyRaceConfirmButton ButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Active_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Btn_Select_Loop;
    
    UPartyRaceSubOptionBtn();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextBP(const FText& InText);
    
};

