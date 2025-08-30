#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EUIButtonIconType.h"
#include "EFooterMainTextType.h"
#include "EFooterSubTextType.h"
#include "FooterMenuWidgetArray.h"
#include "CommonMenuFooterMenu.generated.h"

class UCommonMenuFooterButton;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonMenuFooterMenu : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonMenuFooterButton*> MainButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFooterMenuWidgetArray> MainButtonHitWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFooterMainTextType> MainButtonTextTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonMenuFooterButton*> SubButtonArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFooterMenuWidgetArray> SubButtonHitWidgets;
    
public:
    UCommonMenuFooterMenu();

    UFUNCTION(BlueprintCallable)
    void UpdateButtonImageByCurrentSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilitySubButton(int32 InIndex, ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityMainButton(int32 InIndex, ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityCollapsedAllButton();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityAllSubButton(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityAllMainButton(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSubButtonStateVisibility(int32 InIndex, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSubButtonStateParam(int32 InIndex, EFooterSubTextType InTextType, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSubButtonParam(int32 InIndex, EFooterSubTextType InTextType, ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainButtonStateParam(EFooterMainTextType InTextType, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMainButtonParam(EFooterMainTextType InTextType, ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAllSubButtonStateVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAllMainButtonStateVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAllButtonStateVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UWidgetAnimation* GetFooterInAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FireSubPressedEvent(EUIButtonIconType ButtonIconType, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void FireMainReleasedEvent(EFooterMainTextType MainTextType);
    
    UFUNCTION(BlueprintCallable)
    void FireMainPressedEvent(EFooterMainTextType MainTextType);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddToViewportDefaultZOrder();
    
};

