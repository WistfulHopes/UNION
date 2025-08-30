#pragma once
#include "CoreMinimal.h"
#include "UnionUIButtonBase.h"
#include "CommonMenuPopupSubBtnStandard.generated.h"

class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UCommonMenuPopupSubBtnStandard : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_Btn;
    
public:
    UCommonMenuPopupSubBtnStandard();

    UFUNCTION(BlueprintCallable)
    void SetButtonText(FText InText);
    
};

