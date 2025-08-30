#pragma once
#include "CoreMinimal.h"
#include "EGadgetId.h"
#include "UnionUISceneBase.h"
#include "EGadgetState.h"
#include "GadgetSelectWindowData.h"
#include "GadgetSelectWindow.generated.h"

class APlayerController;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGadgetSelectWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGadgetDelegate, int32, PlayerIndex, EGadgetId, gadgetId, EGadgetState, GadgetState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegate, int32, PlayerIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAnimDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetDelegate OnItemFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetDelegate OnItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimDelegate OnPurchaseAnimFinished;
    
    UGadgetSelectWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPerPlayerCount(int32 InPlayerCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(const FGadgetSelectWindowData& InWindowData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusByGadgetId(APlayerController* InPlayerController, EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAttachedGadgetIds(int32 InPlayerIndex, const TArray<EGadgetId>& InAttachedGadgetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAttachableGadgetIds(int32 InPlayerIndex, const TArray<EGadgetId>& InAttachableGadgetIds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PurchaseGadget(EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPurchaseAnim(EGadgetId InGadgetId);
    
};

