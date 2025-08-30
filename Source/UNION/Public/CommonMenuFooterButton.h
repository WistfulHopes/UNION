#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EUIButtonIconType.h"
#include "UnionUIInputWidget.h"
#include "CommonMenuFooterButton.generated.h"

class UCommonMenuControllerUI;
class USoundAtomCue;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonMenuFooterButton : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* LongPutCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuControllerUI* WBP_CMN_ControllerBtn;
    
public:
    UCommonMenuFooterButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconType(int32 InButtonIconIndex, EUIButtonIconType InButtonIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconGaugeVisibility(ESlateVisibility InBtnVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconGauge(float InGaugeParam);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
};

