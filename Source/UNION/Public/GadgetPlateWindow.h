#pragma once
#include "CoreMinimal.h"
#include "EGadgetId.h"
#include "UnionUISceneBase.h"
#include "EGadgetPlateId.h"
#include "GadgetPlateUIData.h"
#include "GadgetPlateWindow.generated.h"

class APlayerController;
class UEquipmentGadgetIcon;
class UImage;
class UUnionRichTextBlock;
class UUnionUIButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGadgetPlateWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGadgetDelegate, int32, PlayerIndex, int32, SlotState, int32, SlotIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegate, int32, PlayerIndex);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRichTextBlock* ClassNameTextRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlateImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GadgetSlotStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEquipmentGadgetIcon*> GadgetIconRefArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> NewOpenSlotFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIButtonBase* PreviewEquippedGadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFestaSpecialRule;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetDelegate OnItemFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetDelegate OnItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnLeftShoulder;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnRightShoulder;
    
    UGadgetPlateWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisiblePreviewEquippedGadget(const int32 InPlayerIndex, const int32 InSlotNum, const EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePreviewEquippedGadget(const int32 InPlayerIndex, const int32 InSlotNum, const EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchTab(int32 InTabIndex);
    
    UFUNCTION(BlueprintCallable)
    void SwitchPlateSlotData(const EGadgetPlateId InPlateId);
    
    UFUNCTION(BlueprintCallable)
    void SwitchPlateBaseImage(const int32 InPlateIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetupToPlayerDetail(const FGadgetPlateUIData& InPlateUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupGadgetIconsToPlayerDetail(const bool InRankUp, const int32 InSlotNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupGadgetIcons(const bool InRankUp, const int32 InSlotNum);
    
    UFUNCTION(BlueprintCallable)
    void SetupByUIData(const FGadgetPlateUIData& InPlateUIData);
    
    UFUNCTION(BlueprintCallable)
    void SetupAsEmpty(const EGadgetPlateId InPlateId, const bool bRentalPlate, const bool bInRankUp, const bool bInLvUp);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotSelectEffectVisibleAll(const bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotSelectEffectVisible(const int32 InSlotIndex, const bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotInValidIconVisibleAll(const bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotInValidIconVisible(const int32 InSlotIndex, const bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShouldPlayDecisionSound(bool bInShouldPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShouldPlayCancelSound(bool bInShouldPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerIndex(const int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusBySlotIndex(APlayerController* InPlayerController, int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFestaSpecialRule(const bool bInFestaSpecialRule);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableGadgetList(const TArray<EGadgetId> InDisableGadgetList);
    
    UFUNCTION(BlueprintCallable)
    void SetClassNameText(const FText InClassName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstTextClassNameRef();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstPlateImageRef();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnInitialized();
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableGadget(const EGadgetId InCheckGadgetId, bool& bIsEmptyDisableList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InVisiblePreviewEquippedGadget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetGadgetIds(TArray<EGadgetId>& OutGadgetIds);
    
};

