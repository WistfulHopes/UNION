#pragma once
#include "CoreMinimal.h"
#include "EGadgetId.h"
#include "UnionUIButtonBase.h"
#include "EquipmentGadgetIcon.generated.h"

class UCommonTextBalloon;
class UImage;
class UMaterialInstance;
class UTexture2D;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UEquipmentGadgetIcon : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetId gadgetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadyWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomizeWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> BaseIconRefArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> BaseIconDefaultMaterialRefArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> BaseIconGadgetKitMaterialRefArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GadgetImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GadgetNameEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GadgetNameLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBalloon* GadgetNameRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* GadgetCostRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GadgetCostImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GadgetEquipablePlusRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GadgetLockImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GadgetNewImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DisableGadgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DisableGadgetImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* GadgetSelectCursorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* GadgetSelectHexagonRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayDecisionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayCancelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayShoulderSound;
    
public:
    UEquipmentGadgetIcon();

    UFUNCTION(BlueprintCallable)
    void SetupToNone();
    
    UFUNCTION(BlueprintCallable)
    void SetupToLocked();
    
    UFUNCTION(BlueprintCallable)
    void SetupToGadgetId(const EGadgetId InGadgetId, const bool bInSetShape);
    
    UFUNCTION(BlueprintCallable)
    void SetupToEmpty();
    
    UFUNCTION(BlueprintCallable)
    void SetShouldPlayShoulderSound(const bool bInShouldPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldPlayDecisionSound(const bool bInShouldPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldPlayCancelSound(const bool bInShouldPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetNewIconVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetLockVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIconBaseVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconBaseShape(const int32 InSizeX, const int32 InSizeY);
    
    UFUNCTION(BlueprintCallable)
    void SetIconBaseMaterial(const int32 InGadgetSizeX, const bool bIsGadgetKit);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetSelectHexagonVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetSelectCursorVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGadgetSelectCursorColor(const int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetNameTextVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetNameText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetImageTexture(UTexture2D* InTexturePtr);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetCostVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetCostValue(const int32 InCost);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipablePlusIconVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableGadgetVisible(const bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableGadgetOverrideVisible(bool& OutVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUnselectedAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstInitBpWidgetRef();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnInitialized();
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
};

