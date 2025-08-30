#pragma once
#include "CoreMinimal.h"
#include "DeviceChangeInterface.h"
#include "EAppControllerInputType.h"
#include "EHintId.h"
#include "UnionUIInputWidget.h"
#include "HintPopupWindow.generated.h"

class UTexture2D;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UHintPopupWindow : public UUnionUIInputWidget, public IDeviceChangeInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCloseEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCloseEndDelegate CloseEndDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> ImageWidgetAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDecisionClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateByDeviceImmediately;
    
    UHintPopupWindow();

    UFUNCTION(BlueprintCallable)
    void StartImageWidgetLoop2Animation();
    
    UFUNCTION(BlueprintCallable)
    void StartImageWidgetLoop1Animation();
    
    UFUNCTION(BlueprintCallable)
    void StartImageWidgetAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetupImageWidget(UUserWidget* InImageWidget, float InAnimationInterval);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(EHintId InHintId, bool bInDecisionClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPageDisplay(int32 InPageNum, int32 InCurrentPageIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetImageWidgetTexture(int32 InImageIndex, UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetImageWidgetImageObjectVisible(int32 InImageIndex, bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetImageWidget(const TSoftClassPtr<UUserWidget>& InImageWidget, float InAnimationInterval);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetImageTexture(const TSoftObjectPtr<UTexture2D>& InImageTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFooterVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetExplanationText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterVisible(bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBackgroundVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindowWithoutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRaceButtonText(int32 InPlayerIndex, uint8 InputType, const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    EHintId GetHintId();
    
    UFUNCTION(BlueprintCallable)
    void EndImageWidgetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeInputTypeIF_Implementation(EAppControllerInputType InNewControllerInputType);
    

    // Fix for true pure virtual functions not being implemented
};

