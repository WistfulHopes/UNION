#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "EControllerButtonTextureIndex.h"
#include "EControllerButtonType.h"
#include "CommonMenuControllerUI.generated.h"

class UCommonMenuControllerButton;
class UCommonMenuControllerCross;
class UCommonMenuControllerKeyboard;
class UCommonMenuControllerKeyboardCross;
class UImage;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UCommonMenuControllerUI : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerButtonType ButtonImageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRaceKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey CurrentKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_Pict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonMenuControllerCross* WBP_FooterMenu_Sub_ControllerCross;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonMenuControllerButton* WBP_FooterMenu_Sub_ControllerBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonMenuControllerKeyboardCross* WBP_FooterMenu_Sub_KeyCross;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonMenuControllerKeyboard* WBP_FooterMenu_Sub_Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Meter;
    
    UCommonMenuControllerUI();

    UFUNCTION(BlueprintCallable)
    void UpdateByCurrentFKeySetting();
    
    UFUNCTION(BlueprintCallable)
    void SetGamePadKeyFlag(bool InIsGamePadKey);
    
    UFUNCTION(BlueprintCallable)
    void SetFKey(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerButton(EControllerButtonTextureIndex InControllerButton);
    
};

