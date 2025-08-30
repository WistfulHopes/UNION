#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "Components/SlateWrapperTypes.h"
#include "EUnionUIControlDir.h"
#include "UnionUISceneBase.h"
#include "MachineStickerSlotSelectWindow.generated.h"

class UMachineStickerSlotIcon;
class USoundAtomCue;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachineStickerSlotSelectWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDirectionDelegate, EUnionUIControlDir, InDirection);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUISceneBase* WBP_MachineCustom_Sub_StickerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineStickerSlotIcon* WBP_CustomSticker_Sub_PartsIcon_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineStickerSlotIcon* WBP_CustomSticker_Sub_PartsIcon_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineStickerSlotIcon* WBP_CustomSticker_Sub_PartsIcon_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineStickerSlotIcon* WBP_CustomSticker_Sub_PartsIcon_04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineStickerSlotIcon* WBP_CustomSticker_Sub_PartsIcon_05;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineStickerSlotIcon* WBP_CustomSticker_Sub_PartsIcon_06;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineStickerSlotIcon* WBP_CustomSticker_Sub_PartsIcon_07;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineStickerSlotIcon* WBP_CustomSticker_Sub_PartsIcon_08;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnDecision;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnItemFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnItemSelected;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DecisionSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CancelSoundCue;
    
public:
    UMachineStickerSlotSelectWindow();

    UFUNCTION(BlueprintCallable)
    FEventReply OnFocusReceivedImpl(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    
};

