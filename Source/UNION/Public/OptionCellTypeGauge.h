#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "OptionCellTypeBase.h"
#include "OptionCellTypeGauge.generated.h"

class UImage;
class UUnionRichTextBlock;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOptionCellTypeGauge : public UOptionCellTypeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Left_Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Right_Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PRM_Cursor;
    
    UOptionCellTypeGauge();

private:
    UFUNCTION(BlueprintCallable)
    UWidget* OnRightNavigation(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    UWidget* OnLeftNavigation(EUINavigation InNavigation);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeGageValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddValue(int32 InValue);
    
};

