#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "EGadgetId.h"
#include "EGroupRaceRule.h"
#include "UserGadgetPresetData.h"
#include "GadgetCustomize2SelectState.generated.h"

class UCharaMachineParamWindow;
class UGadgetPlateWindow;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGadgetCustomize2SelectState : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupRaceRule CurrentFestaRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentFestaPresetText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserGadgetPresetData CurrentFestaPresetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> bFocusCustomWindowArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGadgetPlateWindow*> PlateWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LastSlotIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCharaMachineParamWindow*> CharaMachineParamWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> bParamWindowOpenArr;
    
public:
    UGadgetCustomize2SelectState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMachineParameterAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMachineParameter(const int32 InPlayerIndex, const bool bDiffVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGadgetDetailWindow(const int32 InPlayerIndex, const EGadgetId InGadgetId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGadgetCustomWindow(const int32 InPlayerIndex, const int32 InPlateSlotFocusIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMachineParameter();
    
    UFUNCTION(BlueprintCallable)
    void SetupGadgetPlateWindow(const int32 InPlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupFestaSpecialRule();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusCustomWindowFlag(const int32 InPlayerIndex, const bool IsFocus);
    
    UFUNCTION(BlueprintCallable)
    void ResizeFocusCustomWindowFlags(const int32 InPlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusCustomWindowFlag(const int32 InPlayerIndex);
    
};

