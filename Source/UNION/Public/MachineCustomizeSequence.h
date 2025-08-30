#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "ECarStatusType.h"
#include "EMachineAuraId.h"
#include "EMachineHornType.h"
#include "EMachineId.h"
#include "UserMachineCustomizeData.h"
#include "EMachineColorAreaUIId.h"
#include "MachineCustomizeSequence.generated.h"

class AAppPlayerController;
class AMenuRacerBase;
class APlayerController;
class UMachineCustomCommonWindow;
class UMachineCustomTab;
class UMachineCustomTop;
class UMachineCustomizeAuraSelectState;
class UMachineCustomizeCustomList;
class UMachinePartsSelectWindow;
class UMachineStickerSelectWindow;
class UMachineStickerSlotSelectWindow;
class UUnionUISceneBase;

UCLASS(Blueprintable)
class UNION_API AMachineCustomizeSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMachineCustomizeAuraSelectState* AuraSelectState;
    
public:
    AMachineCustomizeSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTabs();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRacer(bool bInForcedSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateParamWindowBySelectedData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateParamWindowByCustomizeData(const FUserMachineCustomizeData& InCurrentCustomizeData, const FUserMachineCustomizeData& InCandCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMachineInfoWidgetBySelectedData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMachineInfoWidget(const FUserMachineCustomizeData& InMachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void SetupTabs();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMessageBar();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMachineType(ECarStatusType InSelectedMachineType);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMachineID(EMachineId InSelectedMachineId);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMachineCustomizeHornType(EMachineHornType InHornType);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMachineCustomizeData(const FUserMachineCustomizeData& InMachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMachineCustomizeAuraID(EMachineAuraId InAuraID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMachineColorAreaId(EMachineColorAreaUIId InColorAreaId);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineCustomizeDataById(EMachineId InMachineID, const FUserMachineCustomizeData& InMachineCustomizeData);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDirty(bool bInIsDirty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusToDummy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCanControlTurntable(bool bInCanControl);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCanControlParamWindow(bool bInCanControl);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetMessageBar();
    
    UFUNCTION(BlueprintCallable)
    void MatchingTimeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineCustomTab* GetTabWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineStickerSlotSelectWindow* GetStickerTopPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineStickerSelectWindow* GetStickerSelectPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECarStatusType GetSelectedMachineType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMachineId GetSelectedMachineID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMachineHornType GetSelectedMachineCustomizeHornType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUserMachineCustomizeData GetSelectedMachineCustomizeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMachineAuraId GetSelectedMachineCustomizeAuraID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMachineColorAreaUIId GetSelectedMachineColorAreaId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AMenuRacerBase* GetRacer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachinePartsSelectWindow* GetPartsSelectWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UMachineCustomTop* GetMachineCustomTop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUserMachineCustomizeData GetMachineCustomizeDataById(EMachineId InMachineID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineCustomCommonWindow* GetMachineCustomCommonWindow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineCustomizeCustomList* GetCustomList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUISceneBase* GetColorPresetSelectPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUISceneBase* GetColorDetailPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionUISceneBase* GetColorAreaSelectPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AAppPlayerController* GetAppPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Exit();
    
};

