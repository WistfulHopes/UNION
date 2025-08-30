#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "ECommonRaceMenuContentId.h"
#include "ERacePauseMenuSequenceExitCode.h"
#include "ERacePauseMenuSequenceState.h"
#include "RacePauseMenuSequence.generated.h"

class UCommonRaceMenuContentsInfo;
class UDataTable;

UCLASS(Blueprintable)
class UNION_API ARacePauseMenuSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PauseMenuContentTable;
    
    ARacePauseMenuSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopVehicleAllSE();
    
    UFUNCTION(BlueprintCallable)
    void SetPauseMenuExitCode(ERacePauseMenuSequenceExitCode InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNextPauseMenuState(ERacePauseMenuSequenceState InState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateSelect(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateSelect();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPopupWarningMessage(ECommonRaceMenuContentId InSelectedContentId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwnerPlayerControllerIndex() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UCommonRaceMenuContentsInfo* GeneratePauseMenuContentsInfo();
    
};

