#pragma once
#include "CoreMinimal.h"
#include "ECarStatusType.h"
#include "EGadgetCategory.h"
#include "EGadgetId.h"
#include "EMachineId.h"
#include "EUnionUISceneAnimation.h"
#include "UnionUIAnimScrollControl.h"
#include "EGadgetState.h"
#include "GadgetCustomWindowCategoryData.h"
#include "GadgetSelectWindowData.h"
#include "GadgetCustomWindow.generated.h"

class APlayerController;
class UGadgetCustomSubCursor;
class UGadgetCustomSubTypeBox;
class UOverlay;
class UReadyWidget;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGadgetCustomWindow : public UUnionUIAnimScrollControl {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGadgetScrollFinishedEvent, int32, SelectedPlayerControllerIndex, EGadgetCategory, SelectedGadgetCategory, EGadgetId, SelectedGadgetId, EGadgetState, SelectedGadgetState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGadgetDelegate, int32, PlayerIndex, EGadgetId, gadgetId, EGadgetState, GadgetState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGadgetCategoryScrollEvent, int32, SelectedPlayerControllerIndex, EGadgetCategory, SelectedGadgetCategory, EGadgetId, SelectedGadgetId, EGadgetState, SelectedGadgetState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGadgetCategoryDecisionEvent, int32, SelectedPlayerControllerIndex, EGadgetCategory, SelectedGadgetCategory, EGadgetId, SelectedGadgetId, EGadgetState, SelectedGadgetState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFocusChangeDelegate, int32, PlayerIndex, EGadgetId, gadgetId, EGadgetCategory, CategoryId, EGadgetState, GadgetState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegate, int32, PlayerIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAnimDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLightVer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstFocusNewGadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetId LastSelectGadgetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetCategory LastSelectGadgetCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGadgetCategory, EGadgetId> GadgetCategoriesLastSelectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGadgetCategory, FGadgetCustomWindowCategoryData> SelectableGadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GadgetPlateLastFocusIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGadgetCategory> PresentTypeBoxCategoryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> GadgetCategoryHeaderRefArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGadgetCustomSubCursor* FocusCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReadyWidget* ReadyWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* RentalPlateWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayUpDownScrollAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpDownScrolledTriggerCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayPurchaseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MachineType_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MachineType_Up_Program;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MachineType_Down_Program;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MachineType_Idle_Program;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetCategoryScrollEvent OnGadgetCategoryScrollStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetCategoryScrollEvent OnGadgetCategoryScrollEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetCategoryDecisionEvent OnGadgetCategoryDecideEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetCategoryDecisionEvent OnGadgetCategoryCancelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusChangeDelegate OnFocusChangeUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusChangeDelegate OnFocusChangeDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusChangeDelegate OnFocusChangeRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusChangeDelegate OnFocusChangeLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetDelegate OnItemFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetDelegate OnItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimDelegate OnPurchaseAnimFinished;
    
    UGadgetCustomWindow();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpScrollAnimStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpScrollAnimFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGadgetCustomWindowUpDownScrolled(const bool bUpScroll);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGadgetCustomWindowNotScrolled();
    
    UFUNCTION(BlueprintCallable)
    void UpdateGadgetCustomWindowLeftRightScrolled(const bool bRightScroll);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpCrossButtonRegister(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void StopAllIconTextScroll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPerPlayerCount(int32 InPlayerCount);
    
    UFUNCTION(BlueprintCallable)
    void SetUpDownScrolledTriggerCancel(const bool bInFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(const FGadgetSelectWindowData& InWindowData);
    
    UFUNCTION(BlueprintCallable)
    void SetRentalPlateWidgetVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetReadyWidgetVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPresentCenterTypeBoxCursorVisible(const bool InVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerControllerIndex(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLastSelectGadgetId(const EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable)
    void SetLastSelectGadgetCategory(const EGadgetCategory InGadgetCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetLastFocusGadgetData(const EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetPlateLastFocusIndex(const int32 InPlayerGadgetPlateSlotFocusIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusCursorVisible(const bool InVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFocusByPlayerIndex(APlayerController* InPlayerController, int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusByGadgetId(APlayerController* InPlayerController, EGadgetId InGadgetId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnabledSlateGlobalInvalidation(const bool InEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorUpCanMove(const bool InEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAttachedGadgetIds(int32 InPlayerIndex, const TArray<EGadgetId>& InAttachedGadgetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAttachableGadgetIds(int32 InPlayerIndex, const TArray<EGadgetId>& InAttachableGadgetIds);
    
    UFUNCTION(BlueprintCallable)
    void SetAllTypeBoxCursorVisible(const bool InVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetSelectableGadget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PurchaseGadget(EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PurchaseAnimStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PurchaseAnimFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUISceneAnimation(const EUnionUISceneAnimation& InAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPurchaseAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitRentalGadgetWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitReadyWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitCrossButtons();
    
    UFUNCTION(BlueprintCallable)
    void OnConstGadgetCustomWindowGadgetData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstGadgetCustomTypeBox();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstGadgetCategoryHeader();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstFocusCursor();
    
    UFUNCTION(BlueprintCallable)
    void NativePreConstruct();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnInitialized();
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpDownScrolledTriggerCancel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyWidgetVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayScrollAnimUpDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayPurchaseAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusGadgetCategoryArrayTop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusGadgetCategoryArrayEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusCategoryArrayTop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusCategoryArrayLast();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConstFocusNew() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentCenterBoxInfo(int32& IndexOnBox, ECarStatusType& machineType, int32& CenterElementTypeIndex, EMachineId& MachineId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentCenterBoxGadgetInfo(int32& IndexOnBox, EGadgetCategory& GadgetCategory, int32& CenterElementTypeIndex, EGadgetId& gadgetId, EGadgetState& SelectedGadgetState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGadgetCustomSubTypeBox* GetCenterCategoryTypeBox();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishedPurchaseAnim();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DownScrollAnimStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DownScrollAnimFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyGadgetWindowIcons();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyGadgetCustomScrollPrintBox(const bool bInReSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyGadgetCustomCategoryHeader();
    
};

