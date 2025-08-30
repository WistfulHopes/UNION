#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "EPreRaceSeqErrorCode.h"
#include "EPreRaceSequenceState.h"
#include "PreRaceSequence.generated.h"

class ULobbyContextBase;
class ULobbyMemberContextBase;
class UPreRaceSequenceStateErrorWindow;

UCLASS(Blueprintable)
class UNION_API APreRaceSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPreRaceSequenceStateErrorWindow* PreRaceSequenceStateErrorWindowComponent;
    
public:
    APreRaceSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextPreRaceSequenceState(EPreRaceSequenceState InState, EPreRaceSequenceState PrevState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateWaitP2PConnection(float InDeltaTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMemberPromote(ULobbyContextBase* LobbyContext, ULobbyMemberContextBase* MemberContext);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyDelete(ULobbyContextBase* LobbyContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateWaitP2PConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateWaitP2PConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateExit();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeRaceResultData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasError() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyError() const;
    
    UFUNCTION(BlueprintCallable)
    void HandlingError();
    
    UFUNCTION(BlueprintCallable)
    void ExitMeasurementCallback(EPreRaceSeqErrorCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void ExitHostMigrationCallback(EPreRaceSeqErrorCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void ExitComSyncCallback(EPreRaceSeqErrorCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void ExitCheckLobbyMemberCallback(EPreRaceSeqErrorCode ErrorCode);
    
};

