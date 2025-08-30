#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OptionCellSubCategory.generated.h"

class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOptionCellSubCategory : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_Title;
    
    UOptionCellSubCategory();

};

