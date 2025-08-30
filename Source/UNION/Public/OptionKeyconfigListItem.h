#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UnionUIButtonBase.h"
#include "OptionKeyconfigListItem.generated.h"

class UKeyConfigItem;
class UOptionKeyConfigCell;
class UUnionRichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UOptionKeyconfigListItem : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSwapKeyEvent, FName, val1, uint8, val2, FKey, val3);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBackEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* TXT_Cell_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Cell_Active_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Cell_Selecte_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionKeyConfigCell* WBP_Option_Sub_Key_Cell_Config_Pri;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionKeyConfigCell* WBP_Option_Sub_Key_Cell_Config_Sec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOptionKeyConfigCell* WBP_Option_Sub_Key_Cell_Config_pad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackToListEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnExitMenuEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwapKeyEvent OnSwapKeyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyConfigItem* KeyBordData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyConfigItem* GamePadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentControlKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemIndex;
    
    UOptionKeyconfigListItem();

    UFUNCTION(BlueprintCallable)
    void SetSeconderyKeyData(const FKey& InSecondaryKey);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryKeyData(const FKey& InPrimaryKey);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyItem(FName KeyName, UKeyConfigItem* inKeyBordData, UKeyConfigItem* inGamePadData);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePadKeyData(const FKey& InGamePadKey);
    
    UFUNCTION(BlueprintCallable)
    void SetCellTitle(FText Text);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenSecondaryKeyAssignWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenPrimaryKeyAssignWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenGamePadKeyAssignWindow();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemIndex() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void BackToListEvent();
    
};

