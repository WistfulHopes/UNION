#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EUIButtonIconType.h"
#include "CharaMachineSelectPartsMachineType.generated.h"

class UCommonFooterShortCut;
class UImage;
class UUnionRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCharaMachineSelectPartsMachineType : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PAT_Icon_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_Type_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonFooterShortCut* WBP_FooterShortCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIButtonIconType ButtonIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
public:
    UCharaMachineSelectPartsMachineType();

};

