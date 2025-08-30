#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateColor.h"
#include "UnionUIButtonBase.h"
#include "MachinePartsScrollBoxItem.generated.h"

class APlayerController;
class UCommonShopLabel;
class UImage;
class USoundAtomCue;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachinePartsScrollBoxItem : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseColorOnNotSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseColorOnSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MLC_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_PartsIcon_FR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* P1_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* P2_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* P3_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* P4_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Set_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Icon_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonShopLabel* WBP_ShopLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* FocusSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DecisionSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CancelSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor PriceTextColorActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor PriceTextColorDisable;
    
public:
    UMachinePartsScrollBoxItem();

protected:
    UFUNCTION(BlueprintCallable)
    void PlaySEDecision();
    
    UFUNCTION(BlueprintCallable)
    void PlaySECancel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimUnLock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimLock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDefault();
    
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* OnDirection(EUINavigation InNavigation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetBaseColorOnSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetBaseColorOnNotSelected() const;
    
};

