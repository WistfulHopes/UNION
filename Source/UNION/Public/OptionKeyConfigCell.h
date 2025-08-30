#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UnionUIButtonBase.h"
#include "OptionKeyConfigCell.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOptionKeyConfigCell : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOpenKeyAssignWindow);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangeHoverIconEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBackIconListEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGamePadKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenKeyAssignWindow OpenConfigWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackIconListEvent OnBackEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeHoverIconEvent OnChangeHoverCellEvent;
    
    UOptionKeyConfigCell();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowKeyAssignDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyData(const FKey& InKey, bool isDisable);
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeKeyAssginMode(const bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void BackToListEvent();
    
};

