#pragma once
#include "CoreMinimal.h"
#include "EGadgetCategory.h"
#include "EGadgetId.h"
#include "UnionUIAnimScrollControl.h"
#include "EGadgetState.h"
#include "GadgetPlateUIData.h"
#include "GadgetCustomSubTypeBox.generated.h"

class UCanvasPanel;
class UGadgetCustomSubTypeIcon;
class UGadgetCustomWindow;
class UImage;
class UMaterialInterface;
class UOverlay;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGadgetCustomSubTypeBox : public UUnionUIAnimScrollControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLightVer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNumberIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetCategory GadgetCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayScrollAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftRightScrolledTriggerCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGadgetCustomSubTypeIcon*> GadgetIconRefArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* GadgetIconCanvasPanelRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectCursorImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TypeColorBrushMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CategoryBackGroundImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GadgetKitPatternRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* InvalidCategoryPatternOverlayRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryBackGroundImageMaterialWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CategoryBackGroundImageMaterialHeight;
    
public:
    UGadgetCustomSubTypeBox();

    UFUNCTION(BlueprintCallable)
    void StopIconTextScroll();
    
    UFUNCTION(BlueprintCallable)
    void StartIconTextScroll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupGadgetIconRef();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(UGadgetCustomWindow* InGadgetCustomWindow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerControllerIndex(const int32 InPlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftRightScrolledTriggerCancel(const bool bInFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetInvalidCategoryPatternOpaque(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIconCanvasOpaque(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetKitPatternOpaque(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetCategory(const EGadgetCategory InGadgetCategory, const bool bInOverrideBlackColor);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RightScrollAnimStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RightScrollAnimFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitWidgetReference();
    
    UFUNCTION(BlueprintCallable)
    void NativePreConstruct();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnInitialized();
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LeftScrollAnimStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LeftScrollAnimFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayScrollAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftRightScrolledTriggerCancel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGadgetCategory GetGadgetCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGadgetState GetCenterGadgetState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGadgetId GetCenterGadgetId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGadgetCustomSubTypeIcon* GetCenterGadgetIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGadgetCategory GetCenterGadgetCategory();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGadgetId FindIconGadgetId(const TArray<EGadgetId> InGadgetIds, const EGadgetId InFocusGadgetId, int32 AddIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateGadgetCategoryBackGroundColorMaterial();
    
    UFUNCTION(BlueprintCallable)
    void ApplyIconTexture(const int32 InIconIndex, UTexture2D* InTexture2D);
    
    UFUNCTION(BlueprintCallable)
    void ApplyGadgetIcons(const EGadgetCategory InCategory, const TArray<EGadgetId>& InGadgetIds, const EGadgetId InFocusGadgetId, const FGadgetPlateUIData InGadgetPresetData, const int32 InGadgetPlateFocusSlotIndex);
    
};

