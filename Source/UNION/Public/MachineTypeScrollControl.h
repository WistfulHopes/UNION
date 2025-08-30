#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "Components/SlateWrapperTypes.h"
#include "ECarStatusType.h"
#include "EMachineId.h"
#include "EUnionUISceneAnimation.h"
#include "UnionUIAnimScrollControl.h"
#include "MachineTypeScrollControl.generated.h"

class UUnionUIButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UMachineTypeScrollControl : public UUnionUIAnimScrollControl {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMachineTypeScrollEvent, int32, SelectedPlayerControllerIndex, ECarStatusType, SelectedMachineType, EMachineId, SelectedBaseMachineId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMachineTypeDecisionEvent, int32, SelectedPlayerControllerIndex, ECarStatusType, SelectedMachineType, EMachineId, SelectedBaseMachineId);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineTypeScrollEvent OnMachineTypeScrollStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineTypeScrollEvent OnMachineTypeScrollEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineTypeDecisionEvent OnMachineTypeDecideEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMachineTypeDecisionEvent OnMachineTypeCancelEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D AnimTranslation_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D AnimTranslation_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D AnimTranslation_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D AnimTranslation_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D AnimTranslation_04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D AnimTranslation_05;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D AnimTranslation_06;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FMargin AnimMargin_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FMargin AnimMargin_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FMargin AnimMargin_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FMargin AnimMargin_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FMargin AnimMargin_04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FMargin AnimMargin_05;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FMargin AnimMargin_06;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor AnimLinearColor_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor AnimLinearColor_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor AnimLinearColor_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor AnimLinearColor_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor AnimLinearColor_04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor AnimLinearColor_05;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor AnimLinearColor_06;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESlateVisibility AnimVisible_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESlateVisibility AnimVisible_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESlateVisibility AnimVisible_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESlateVisibility AnimVisible_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESlateVisibility AnimVisible_04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESlateVisibility AnimVisible_05;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESlateVisibility AnimVisible_06;
    
public:
    UMachineTypeScrollControl();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScrollPointBox();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMachineTypeColorWidth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIconTextures();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonStatus(ECarStatusType InMachineType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowReady(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleReady(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleCrossButton(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPresentElement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupHeader(ECarStatusType InMachineType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupElement();
    
    UFUNCTION(BlueprintCallable)
    void SetEnableKey(bool IsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableButtonMove(bool NewIsCanMove);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableButtonFocus(bool IsFocus);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetElementPlayerIndex();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDecidedAll(bool IsAllDecided);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDecided(bool IsDecided);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCrossButtonPlayerIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCenterCursorVisible(bool NewVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanScroll(bool bInCanScroll);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetParam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUISceneAnimation(EUnionUISceneAnimation InAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySESelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySEError();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySECancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusLastSelected(EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecisionByCross(UUnionUIButtonBase* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelByCross(UUnionUIButtonBase* InButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsEnableButtonFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideReady(EMachineId InMachineID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ECarStatusType GetSelectMachineType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EMachineId GetSelectMachineID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void GetNextBoxInfo(bool DownRight, ECarStatusType& machineType, EMachineId& MachineId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECarStatusType GetCurrentMachineType() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void GetCurrentCenterBoxInfo(int32& IndexOnBox, ECarStatusType& machineType, int32& CenterElementTypeIndex, EMachineId& MachineId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetBoxInfo(int32 InIndex, int32& IndexOnBox, ECarStatusType& machineType, int32& CenterElementTypeIndex, EMachineId& MachineId);
    
    UFUNCTION(BlueprintCallable)
    ECarStatusType AddLoopMachineType(ECarStatusType InMachineType, int32 InAdd);
    
};

