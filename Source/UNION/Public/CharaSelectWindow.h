#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDriverId.h"
#include "UnionUISceneBase.h"
#include "CharaSelectWindow.generated.h"

class UCharaSelectCharaIcon;
class UStoreBalloon;
class UUniformGridPanel;
class UUnionUIButtonBase;
class UUnionUIButtonsPanel;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UCharaSelectWindow : public UUnionUISceneBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharaSelectEventParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharaSelectEvent2Param, int32, InPlayerIndex, int32, InCharaIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharaSelectEvent1Param, int32, InPlayerIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaSelectEvent2Param OnEventHover;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaSelectEvent2Param OnEventUnhover;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaSelectEvent2Param OnEventDecision;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaSelectEvent1Param OnEventCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaSelectEventParam OnUpdateNew;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* UniformGridPanelCharaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoreBalloon* WBP_CharaMachineSelect_Balloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRivalSelectMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFriendShipSelectMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> FocusPlayerCharaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugBalloon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BalloonMoveSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BalloonMoveOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PopupWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionUIButtonsPanel* ButtonsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPopupWindowOpen;
    
public:
    UCharaSelectWindow();

    UFUNCTION(BlueprintCallable)
    void UpdateRivalIconsSelectable();
    
    UFUNCTION(BlueprintCallable)
    void UpdateIconsFriendShip(int32 MaxTicket);
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetIconsFocus(int32 InPlayerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectRivalIconTypeNative(int32 CharaIndex, bool SelectedPowerRival);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnbindIcons(UCharaSelectCharaIcon* InIcon);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPopupWindowClose(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBindIcons(UCharaSelectCharaIcon* InIcon);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializePlayerFocus();
    
protected:
    UFUNCTION(BlueprintCallable)
    void IconUnhover(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void IconHover(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void IconDecision(int32 InPlayerControllerIndex, int32 InCharaIndex);
    
    UFUNCTION(BlueprintCallable)
    void IconCancel(int32 InPlayerControllerIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharaSelectCharaIcon* GetIconRandom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharaSelectCharaIcon* GetIconForPlayerIndex(int32 InPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharaSelectCharaIcon* GetIconForDriverID(EDriverId InDriverId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharaSelectCharaIcon* GetIconForCharaIndex(int32 InCharaIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharaSelectCharaIcon* GetIcon(int32 InIconIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUnionUIButtonBase*> GetButtons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcButtonNavigation(UUnionUIButtonBase* InCurrent, int32 InButtonIndex);
    
};

