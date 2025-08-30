#pragma once
#include "CoreMinimal.h"
#include "EGadgetId.h"
#include "UnionUIButtonStandard.h"
#include "MenuGadgetIcon.generated.h"

class UMaterialInstance;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMenuGadgetIcon : public UUnionUIButtonStandard {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGadgetId gadgetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GadgetCost;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* DefaultBaseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* KitBaseMaterial;
    
    UMenuGadgetIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupByGadgetId(EGadgetId InGadgetId, bool bInSetShape);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAsNone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAsLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupAsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTexture(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShouldPlayShoulderSound(bool bInShouldPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShouldPlayDecisionSound(bool bInShouldPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShouldPlayCancelSound(bool bInShouldPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShape(int32 InSizeX, int32 InSizeY);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectEffectVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlusVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNewVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLockVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGadgetKitBase(const int32 InSizeX, const bool bInGadgetKit);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetId(const EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable)
    void SetGadgetCost(const int32 InGadgetCost);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorVisible(bool InIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorColor(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCostVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCost(int32 InCost);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBaseVisible(bool bInIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBalloonVisible(bool bInIsVisible);
    
};

