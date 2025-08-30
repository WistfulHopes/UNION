#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "ECarStatusType.h"
#include "EMachineColorMode.h"
#include "EMachineColorPresetId.h"
#include "EMachineId.h"
#include "UserMachineCustomizeData.h"
#include "CharaMachineSelectSubStateBase.h"
#include "CharaMachineSelectSubStateMachine.generated.h"

class AMenuRacerBase;
class UCharaMachineSelectBase;
class UMachineColorSelectWindow;
class UMachinePartsSelectWindow;
class UMachineTypeScrollControl;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UCharaMachineSelectSubStateMachine : public UCharaMachineSelectSubStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomizeUpdateDelay;
    
public:
    UCharaMachineSelectSubStateMachine(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRacerByMachinePartsIds(int32 InPlayerIndex, EMachineId InFrontPartsId, EMachineId InRearPartsId, EMachineId InTirePartsId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRacerByMachineId(int32 InPlayerIndex, EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRacerByMachineColor(int32 InPlayerIndex, EMachineColorMode InColorMode, EMachineColorPresetId InPresetId);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMachineNameByPartsIds(int32 InPlayerIndex, EMachineId InFrontPartsId, EMachineId InRearPartsId);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMachineNameByMachineId(int32 InPlayerIndex, EMachineId InMachineID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMachineModelByPartsIds(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindMachineTypeSelectWindow(UMachineTypeScrollControl* InMachineTypeSelectWindow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindCharaMachineSelectWindow(UCharaMachineSelectBase* InWindow);
    
    UFUNCTION(BlueprintCallable)
    void SetupMachineTypeSelectWindow(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMachineColorSelectWindow(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetNextButtonVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineTypeSelectDecidedAll(bool InDecidedAll);
    
    UFUNCTION(BlueprintCallable)
    void SetMachineTypeSelectCanFocus(bool InCanFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllPlayerSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECarStatusType GetSelectedMachineType(int32 InPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMachineId GetSelectedMachineID(int32 InPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUserMachineCustomizeData GetSelectedMachineCustomData(int32 InPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMenuRacerBase*> GetRacerList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineTypeScrollControl* GetMachineTypeSelectWindow(int32 InPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimerHandle GetMachinePartsUpdateTimerHandle(int32 InPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachinePartsSelectWindow* GetMachinePartsSelectWindow(int32 InPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineColorSelectWindow* GetMachineColorSelectWindow(int32 InPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetHoverboardHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharaMachineSelectBase* GetCharaMachineSubWindow(int32 InPlayerIndex) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FinalizeTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DecideRacer(int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void CharaMachineSelectOnMachinePartsFocus(int32 InPlayerIndex, EMachineId InFrontPartsId, EMachineId InRearPartsId, EMachineId InTirePartsId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindMachineTypeSelectWindow(UMachineTypeScrollControl* InMachineTypeSelectWindow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindCharaMachineSelectWindow(UCharaMachineSelectBase* InWindow);
    
};

