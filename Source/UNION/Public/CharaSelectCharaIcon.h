#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "EDriverId.h"
#include "ELockType.h"
#include "UnionUIButtonBase.h"
#include "DriverData.h"
#include "EDialogResult.h"
#include "ERivalSelectIconType.h"
#include "CharaSelectCharaIcon.generated.h"

class ADLCStoreDialogActor;
class UCharaSelectRivalWinIcon;
class UCommonPlayerNumber;
class UCommonShopLabel;
class UImage;
class USoundAtomCue;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCharaSelectCharaIcon : public UUnionUIButtonBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharaIconEvent2Param, int32, PlayerControllerIndex, int32, CharaIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharaIconEvent1Param, int32, PlayerControllerIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaIconEvent2Param Event_HoverIcon;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaIconEvent2Param Event_UnhoverIcon;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaIconEvent2Param Event_Decision;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaIconEvent1Param Event_Cancel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MLC_CharaIcon_CursorBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_CharaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DMY_CharaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_LockCover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_LockIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* P1_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* P2_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* P3_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* P4_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonPlayerNumber* WBP_CMN_PlayerNumber_P1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonPlayerNumber* WBP_CMN_PlayerNumber_P2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonPlayerNumber* WBP_CMN_PlayerNumber_P3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonPlayerNumber* WBP_CMN_PlayerNumber_P4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonPlayerNumber* WBP_CMN_PlayerNumber_Decide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_RivalSelectIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharaSelectRivalWinIcon* WBP_RivalWinIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DSP_NewIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonShopLabel* WBP_Chara_ShopLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* FocusSoundAtomCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BGColorNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> BGColorPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor PriceColorActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor PriceColorDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADLCStoreDialogActor* DLCDialog;
    
public:
    UCharaSelectCharaIcon();

    UFUNCTION(BlueprintCallable)
    void UpdateBGColor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAnimationPushPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAnimationAllPushPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityRivalWinIcon(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityRivalSelectIcon(bool IsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibilityLockCover(bool IsVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVisibilityFriendShipIcon(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetShowDialog(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetShopLabel(ELockType InType, int32 InPrice);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDecisionPlayerIndex(int32 InPlayerIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetActiveRivalSelectIcon(ERivalSelectIconType InType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectRivalIconType(bool Selected, bool RivalLevelEnhanced);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundImpossible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundDecisionRivalSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundDecision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySoundCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationSelectLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationSelectImpossible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationPushPlayer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationActiveLoop();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDriverId GetDriverID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDriverData GetDriverData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharaIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Event_OnRandomSelect_Impl(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void Event_OnDecision_Impl(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void Event_OnCancel_Impl(int32 InPlayerIndex, bool IsPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void DeleteDialogDLC(bool IsAccept);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateDialogUnlock(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateDialogPrice(int32 InPlayerIndex, int32 InPrice);
    
public:
    UFUNCTION(BlueprintCallable)
    void Cancel(int32 InPlayerIndex, bool IsPlaySound);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallbackDialogUnlock();
    
    UFUNCTION(BlueprintCallable)
    void CallbackDialogPrice(EDialogResult InResult, int32 InPrice);
    
};

