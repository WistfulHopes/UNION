#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERewardType.h"
#include "EUnionUIControlDir.h"
#include "MachinePartsUIData.h"
#include "Templates/SubclassOf.h"
#include "MachinePartsScrollBox.generated.h"

class UCommonScrollPointBox;
class UMachinePartsScrollBox;
class UMachinePartsScrollBoxItem;
class UUnionUIButtonBase;
class UUnionUIButtonsPanel;
class UUnionUIFixedScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachinePartsScrollBox : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegateFocus, UUnionUIButtonBase*, InButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDelegateDirection, UMachinePartsScrollBox*, InSender, EUnionUIControlDir, InDirection);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDelegateDialog, const FMachinePartsUIData&, InPartsData, ERewardType, InRewardType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateFocus OnItemFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateDirection OnEscape;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateDialog OnCreateDialogPrice;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateDialog OnCreateDialogUnlock;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnCreateDialogDLC;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnNavigation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMachinePartsScrollBoxItem> ItemClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIFixedScrollBox* InnerScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonScrollPointBox* WBP_CMN_ScrollSnapPoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* ButtonsPanel;
    
public:
    UMachinePartsScrollBox();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundPossible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundImpossible();
    
private:
    UFUNCTION(BlueprintCallable)
    void ButtonsPanel_OnDirection(UUnionUIButtonBase* Button, int32 ButtonIndex, EUnionUIControlDir Dir);
    
    UFUNCTION(BlueprintCallable)
    void Button_OnFocus(UUnionUIButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void Button_OnDecision(UUnionUIButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void Button_OnCancel(UUnionUIButtonBase* Button);
    
};

