#pragma once
#include "CoreMinimal.h"
#include "OnCellIndicatorPopupDecisionDelegate.h"
#include "OptionSequenceBase.h"
#include "OptionGraphicSequence.generated.h"

class UUnionUIButtonBase;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UOptionGraphicSequence : public UOptionSequenceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopupShowTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ApplyParamPopup;
    
public:
    UOptionGraphicSequence(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OpenBrightnessWindow();
    
    UFUNCTION(BlueprintCallable)
    void OnPopupDecision(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveBrightness(float Val);
    
    UFUNCTION(BlueprintCallable)
    void OnIndicatorDecisionEvent(uint8 kind, uint8 Val);
    
    UFUNCTION(BlueprintCallable)
    void OnDecisionBrightness(float Val);
    
    UFUNCTION(BlueprintCallable)
    void OnClosePopupDecision(bool isApply);
    
    UFUNCTION(BlueprintCallable)
    void CreateConfirmWindow(FOnCellIndicatorPopupDecision Callback);
    
};

