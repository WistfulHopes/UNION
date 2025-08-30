#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EHintId.h"
#include "ETutorialAction.h"
#include "CommonUIControllerWrapper.generated.h"

class UOverlay;
class URaceUITutorialControllerKey;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCommonUIControllerWrapper : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_PC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URaceUITutorialControllerKey* WBP_Tutorial_Controller_Key;
    
public:
    UCommonUIControllerWrapper();

    UFUNCTION(BlueprintCallable)
    void SetViewTableIndex(int32 InViewTableIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetDeviceView(bool bIsGamePad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateTutorialAction(ETutorialAction InTutorialAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateHintID(EHintId InHintId, bool bIsKeyboard);
    
};

