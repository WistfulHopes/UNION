#pragma once
#include "CoreMinimal.h"
#include "UnionUISequenceInterface.h"
#include "CommonUserWidget.h"
#include "BeforeRaceMessageInfoWidget.generated.h"

class UUnionRichTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UBeforeRaceMessageInfoWidget : public UCommonUserWidget, public IUnionUISequenceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* _TitleTextBlock;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Out;
    
public:
    UBeforeRaceMessageInfoWidget();

    UFUNCTION(BlueprintCallable)
    void SetTitleText(const FText& Text);
    

    // Fix for true pure virtual functions not being implemented
};

