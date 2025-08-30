#pragma once
#include "CoreMinimal.h"
#include "EMatchingLobbyType.h"
#include "EMatchingLocalState.h"
#include "MatchingSequenceStateBase.h"
#include "MatchingSequenceStateMatching.generated.h"

class UCommonLobbyContext;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UMatchingSequenceStateMatching : public UMatchingSequenceStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLocalState LocalState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLobbyType LobbyType;
    
public:
    UMatchingSequenceStateMatching(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WaitHostConnectionComplete();
    
    UFUNCTION(BlueprintCallable)
    void WaitClientP2PConnectComplete();
    
    UFUNCTION(BlueprintCallable)
    bool WaitAsyncP2PConnectCompete();
    
    UFUNCTION(BlueprintCallable)
    void SetupOnlinePeerRaceConfig(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalState(EMatchingLocalState NewLocalState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLobbyType(EMatchingLobbyType InLobbyType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendStartP2PSignal(bool bIsResend);
    
    UFUNCTION(BlueprintCallable)
    void SendEndPreRace();
    
    UFUNCTION(BlueprintCallable)
    void SendClientP2PSignal();
    
    UFUNCTION(BlueprintCallable)
    void RegisterMemberAtSendP2PSignal();
    
    UFUNCTION(BlueprintCallable)
    void LoadMatchingSequenceActor(EMatchingLobbyType InLobbyType);
    
    UFUNCTION(BlueprintCallable)
    bool IsWaitFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyHost(int32 LocalUserNum) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFinishedP2P();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableP2PSubsystem();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableP2PStartWithMatching();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableLegacyStateMatching();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableAsyncP2P();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchingLobbyType GetLobbyType();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLobbyMemberCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonLobbyContext* GetLobbyContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetComputerNameString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishMatchingSetup();
    
    UFUNCTION(BlueprintCallable)
    void EndWaitFinish();
    
    UFUNCTION(BlueprintCallable)
    void DebugOverWrite(int32 JoinPlayerCount, int32 OnlineIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClientP2PComplete();
    
};

