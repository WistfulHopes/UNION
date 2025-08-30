#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "ECarStatusType.h"
#include "EGarageCameraMovementTransformDataId.h"
#include "EMachineCustomizeSequenceState.h"
#include "EMachineCustomizeTabID.h"
#include "EMachinePartsType.h"
#include "MachineCustomizePage.generated.h"

class AGarageCamera;
class UMachineCustomTab;
class UMachineCustomTop;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMachineCustomizePage : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UMachineCustomizePage(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindPage();
    
    UFUNCTION(BlueprintCallable)
    void Unbind();
    
    UFUNCTION(BlueprintCallable)
    void TabChange(EMachineCustomizeTabID InTabID);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDirty(bool bInIsDirty);
    
    UFUNCTION(BlueprintCallable)
    void MoveCameraID(EGarageCameraMovementTransformDataId InId);
    
    UFUNCTION(BlueprintCallable)
    void MoveCameraCarStatusType(ECarStatusType InCarStatusType, EMachinePartsType InPartsType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineCustomTop* GetTop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMachineCustomTab* GetTab() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AGarageCamera* GetCamera() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(EMachineCustomizeSequenceState InNext);
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindPage();
    
    UFUNCTION(BlueprintCallable)
    void Bind();
    
};

