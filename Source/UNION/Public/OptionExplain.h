#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OptionExplain.generated.h"

class UImage;
class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOptionExplain : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TXT_Explan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_Option_Image;
    
    UOptionExplain();

};

