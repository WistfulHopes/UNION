#pragma once
#include "CoreMinimal.h"
#include "OnUnionButtonEventDelegate.h"
#include "UnionUIButtonBase.h"
#include "MachineStickerSlotItemData.h"
#include "MachineStickerSlotIcon.generated.h"

class APlayerController;
class UCommonTextBalloon;
class UImage;
class USoundAtomCue;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachineStickerSlotIcon : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionButtonEvent OnFaceButtonTopEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MLC_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_StickerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBalloon* WBP_CMN_TextBalloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Set_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_Icon_New;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MLC_LiquidIcon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClearSoundEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* FocusSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DecisionSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CancelSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* StickerClearSoundCue;
    
public:
    UMachineStickerSlotIcon();

    UFUNCTION(BlueprintCallable)
    void ShowCursor();
    
    UFUNCTION(BlueprintCallable)
    void Setup(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetStickerDesignTexture(UTexture2D* InStickerDesignTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetItemData(const FMachineStickerSlotItemData& InItemData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlaySEStickerClear();
    
    UFUNCTION(BlueprintCallable)
    void PlaySEFocus();
    
    UFUNCTION(BlueprintCallable)
    void PlaySEDecision();
    
    UFUNCTION(BlueprintCallable)
    void PlaySECancel();
    
public:
    UFUNCTION(BlueprintCallable)
    void HideCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMachineStickerSlotItemData GetItemData() const;
    
};

