#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Styling/SlateTypes.h"
#include "Blueprint/UserWidget.h"
#include "UnionFontScroll.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNIONUI_API UUnionFontScroll : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextStyleParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> TextJustification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextStartScrollDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeBoxLimitX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndBlankCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeBoxAdjustValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanDisappearSlowly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GradiationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LeftVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftAppearSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartLocationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustRetainerBoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CenterWhileNotScroll;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LeftStartLocationWhenScroll;
    
    UUnionFontScroll();

    UFUNCTION(BlueprintCallable)
    void UpdateText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void StopScroll();
    
    UFUNCTION(BlueprintCallable)
    void StartScrollDelayEvent();
    
    UFUNCTION(BlueprintCallable)
    void StartScroll();
    
    UFUNCTION(BlueprintCallable)
    void SetupTextStartPosition();
    
    UFUNCTION(BlueprintCallable)
    void SetupTextScroll();
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetIsRefreshingText(bool Refreshing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshText();
    
};

