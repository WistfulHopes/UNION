#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonStandard.h"
#include "CommonGadgetCustomButton.generated.h"

class UPanelWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonGadgetCustomButton : public UUnionUIButtonStandard {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* _RootPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GadgetCustom_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GadgetCustom_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GadgetCustom_Out;
    
public:
    UCommonGadgetCustomButton();

    UFUNCTION(BlueprintCallable)
    void Out();
    
    UFUNCTION(BlueprintCallable)
    void In();
    
};

