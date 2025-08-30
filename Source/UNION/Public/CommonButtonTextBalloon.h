#pragma once
#include "CoreMinimal.h"
#include "CommonTextBalloon.h"
#include "CommonButtonTextBalloon.generated.h"

class UCommonMenuFooterButton;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonButtonTextBalloon : public UCommonTextBalloon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* DSP_Btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuFooterButton* WBP_FooterMenu_Sub_CommonBtn;
    
public:
    UCommonButtonTextBalloon();

};

