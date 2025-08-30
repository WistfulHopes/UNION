#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "EGadgetCategory.h"
#include "EGadgetId.h"
#include "UnionUIButtonBase.h"
#include "EGadgetState.h"
#include "GadgetCustomSubTypeIcon.generated.h"

class UCommonPlayerNumber;
class UHorizontalBox;
class UImage;
class UMaterialInterface;
class UMenuGadgetIcon;
class UTexture2D;
class UUnionFontScroll;
class UUnionUITextBlock;
class UWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGadgetCustomSubTypeIcon : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAnimDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControlPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleInWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetId gadgetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIconUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetCategory GadgetCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetState GadgetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuGadgetIcon* UnlockMenuGadgetIconRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuGadgetIcon* LockMenuGadgetIconRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* GadgetIconSwitcherRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CategoryColorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CategoryColorBrushMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* RockIconRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* TicketBoxRootRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUITextBlock* TicketValueTextRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TicketNumTextColorEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TicketNumTextColorDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* GadgetNameTextRootRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionFontScroll* GadgetNameTextRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NewIconRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* EquippedIconRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NotAttachIconRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CanNotAttachIconRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* InvalidIconRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> PlayerCursorRefArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonPlayerNumber*> PlayerNumbersRefArray;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimDelegate OnPurchaseAnimFinished;
    
    UGadgetCustomSubTypeIcon();

    UFUNCTION(BlueprintCallable)
    void SwitchGadgetIcon(const bool bIsOpen);
    
    UFUNCTION(BlueprintCallable)
    void StopGadgetNameTextScroll();
    
    UFUNCTION(BlueprintCallable)
    void StartGadgetNameTextScroll();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleInWidgets(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetTicketValueTextColor(const bool bPurchase);
    
    UFUNCTION(BlueprintCallable)
    void SetTicketValueText(const int32 InTicketNum);
    
    UFUNCTION(BlueprintCallable)
    void SetTicketBoxOpaque(const bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTexture(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerNumberOpaqueAll(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerNumberOpaque(const int32 InPlayerIndex, const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetNewIconOpaque(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetLockIconOpaque(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIsIconUpdate(const bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetInvalidIconOpaque(const bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGadgetState(const EGadgetState InGadgetState);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetNameText(const FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetNameOpaque(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetId(const EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGadgetCategory(const EGadgetCategory InGadgetCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedIconOpaque(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorOpaqueAll(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorOpaque(const int32 InPlayerIndex, const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetControlPlayerIndex(const int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCanNotAttachIconOpaque(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGadgetNameTextWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnConstCategoryColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleInWidgets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewIconVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIconUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanNotAttachIconVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGadgetState GetGadgetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetGadgetNameTextVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGadgetId GetGadgetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGadgetCategory GetGadgetCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetControlPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateCategoryColorMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyGadgetIcons(const EGadgetId InGadgetId);
    
};

