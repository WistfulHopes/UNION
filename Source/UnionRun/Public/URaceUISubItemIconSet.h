#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "EItemInfoType.h"
#include "EItemStatus.h"
#include "URaceUISubItemIconSet.generated.h"

class UBorder;
class UImage;
class UOverlay;
class URaceUISubItemIcon;
class URaceUISubItemSummonButton;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UURaceUISubItemIconSet : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubItemIcon*> ItemIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsItemStockTrading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> IsVisibilityIrregular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> DSPArcGaugeArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOverlay*> DSPIrregularArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBorder*> DSPInfinityEffArr;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerControllerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTradeGadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTradeGrayOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TradeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaceUISubItemSummonButton*> ItemSummonButtons;
    
public:
    UURaceUISubItemIconSet();

    UFUNCTION(BlueprintCallable)
    void SetVisibilityIrregular(EItemInfoType ItemInfoType, bool IsVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTradeActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemTradeKey(const FKey& InKey, bool IsKeyboard);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemPanelVisibility(bool bVisibility);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTradeCoolTime(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSummonAvailable(int32 PlayerIndex, EItemInfoType ItemInfoType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIrregularChargeItem(EItemInfoType ItemInfoType) const;
    
    UFUNCTION(BlueprintCallable)
    void InitIrregular();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemSummon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemStockTrade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemStockPlus() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTradeCoolTimeParam(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRacerIndex(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemStatus GetItemStatus(EItemInfoType ItemInfoType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemPackageRingCount(int32 PlayerIndex, EItemInfoType ItemInfoType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemHoldCount(int32 PlayerIndex, EItemInfoType ItemInfoType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHoldItemCount(int32 RacerIndex) const;
    
};

