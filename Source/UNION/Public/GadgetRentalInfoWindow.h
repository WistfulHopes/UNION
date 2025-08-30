#pragma once
#include "CoreMinimal.h"
#include "UnionUISceneBase.h"
#include "GadgetPlateUIData.h"
#include "GadgetRentalInfoAnimFinishedDelegateDelegate.h"
#include "GadgetRentalInfoWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UGadgetRentalInfoWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetRentalInfoAnimFinishedDelegate OnGadetRentalInfoAnimFinished;
    
    UGadgetRentalInfoWindow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupByUIData(const FGadgetPlateUIData& InGadgetPlateUIDataData, const FText& RentalGadgetName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayGadetRentalInfoAnim();
    
};

