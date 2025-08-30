#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "Components/SlateWrapperTypes.h"
#include "UnionUISceneBase.h"
#include "MachineStickerSelectWindow.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachineStickerSelectWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DecisionSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CancelSoundCue;
    
public:
    UMachineStickerSelectWindow();

    UFUNCTION(BlueprintCallable)
    FEventReply OnFocusReceivedImpl(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    
};

