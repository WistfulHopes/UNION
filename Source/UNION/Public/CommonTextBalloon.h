#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CommonTextBalloon.generated.h"

class UImage;
class UUnionFontScroll;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonTextBalloon : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PAT_TextBalloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionFontScroll* WBP_FontScroll_PartsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PatternIndex;
    
public:
    UCommonTextBalloon();

    UFUNCTION(BlueprintCallable)
    void SetVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetPattern(int32 InPatternIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBalloonPositionIndex(int32 InIndex, float InOffsetValueAbs);
    
};

