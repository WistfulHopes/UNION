#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RivalSelectBonusProgressWidget.generated.h"

class UUnionRichTextBlock;
class UUnionUITextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API URivalSelectBonusProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> _SpeedClassTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* _NumTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _SpeedClassTextBlock;
    
public:
    URivalSelectBonusProgressWidget();

};

