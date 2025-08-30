#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "ECellIndicatorColor.h"
#include "OptionCellTypeBase.h"
#include "OptionCellTypeIndicator.generated.h"

class UHorizontalBox;
class UImage;
class USizeBox;
class UUnionRichTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOptionCellTypeIndicator : public UOptionCellTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Left_Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Right_Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HB_Bar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* DSP_Indicator;
    
    UOptionCellTypeIndicator();

private:
    UFUNCTION(BlueprintCallable)
    UWidget* OnRightNavigation(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    void OnPopupDecision(bool isApply);
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnLeftNavigation(EUINavigation InNavigation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FLinearColor GetLinearColor(ECellIndicatorColor Color);
    
    UFUNCTION(BlueprintCallable)
    void ChangeIndicatorValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddValue(int32 InValue);
    
};

