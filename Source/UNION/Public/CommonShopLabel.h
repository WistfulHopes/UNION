#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "Blueprint/UserWidget.h"
#include "CommonShopLabel.generated.h"

class UImage;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonShopLabel : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WSIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WSLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> BGColor;
    
public:
    UCommonShopLabel();

    UFUNCTION(BlueprintCallable)
    void SetupPrice(int32 InPrice, const FSlateColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetupNone();
    
    UFUNCTION(BlueprintCallable)
    void SetupLock(bool IsLock);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPriceColor(const FSlateColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPrice(int32 InPrice);
    
};

