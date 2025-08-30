#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ETopInfoWidgetPageCategory.h"
#include "TopInfoWidgetSubCategoryBase.generated.h"

class UCommonMenuPopupSubBtnStandard;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UTopInfoWidgetSubCategoryBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuPopupSubBtnStandard* ButtonStandard;
    
public:
    UTopInfoWidgetSubCategoryBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePageDisplay(ETopInfoWidgetPageCategory PageCategory, bool ButtonFocus, bool IsNew);
    
    UFUNCTION(BlueprintCallable)
    void UpdateButtonVisible(ETopInfoWidgetPageCategory PageCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetupButtonStandard(UCommonMenuPopupSubBtnStandard* ButtonInstance);
    
};

