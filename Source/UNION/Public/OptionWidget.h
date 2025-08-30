#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EOptionTab.h"
#include "OptionWidget.generated.h"

class UCommonPlayerNumber;
class UImage;
class UMenuInputRecieveObject;
class UObject;
class UOptionCellList;
class UOptionExplain;
class UOptionStateTab;
class UOptionWindowBrightness;
class UOptionWindowKeyConfig;
class URichTextBlock;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UOptionWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRevertDefaultEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExitMenuEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeTabEvent, EOptionTab, prev, EOptionTab, Next);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonPlayerNumber* DSP_WBP_CMN_PlayerNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PAT_Option_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* TXT_Option_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionStateTab* WBP_Option_Tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionCellList* WBP_Option_Sub_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionExplain* WBP_Option_Sub_Explan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionWindowBrightness* WBP_Option_Sub_Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionWindowKeyConfig* WBP_Option_Sub_KeyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Option_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Option_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Option_Out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTabEvent OnTabLeftEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeTabEvent OnTabRightEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitMenuEvent OnExitTopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRevertDefaultEvent OnRevertDefaultEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* InputRecieve;
    
public:
    UOptionWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnTabRight(UObject* obj);
    
    UFUNCTION(BlueprintCallable)
    void OnTabLeft(UObject* obj);
    
    UFUNCTION(BlueprintCallable)
    void OnRevertDefault(UObject* obj);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeHoverCell(const FText Text);
    
};

