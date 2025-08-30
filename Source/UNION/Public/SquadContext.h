#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "LobbyId.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "OnlineErrorBP.h"
#include "CommonLobbyContext.h"
#include "ECommonRaceMenuContentId.h"
#include "EOnlineGameMode.h"
#include "ESquadLobbyMatchContinuation.h"
#include "ESquadLobbyState.h"
#include "SquadContext.generated.h"

class ULobbyJoinInfo;

UCLASS(Blueprintable)
class UNION_API USquadContext : public UCommonLobbyContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyJoinInfo* PendingInviteInfo;
    
public:
    USquadContext();

    UFUNCTION(BlueprintCallable)
    void SyncMatchContinuation(ESquadLobbyMatchContinuation MatchContinuation, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineGameMode(EOnlineGameMode OnlineGameMode);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchContinuation(ESquadLobbyMatchContinuation MatchContinuation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSendInvitationCompletedInternal(bool bSuccessful, const FOnlineErrorBP& Error);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSendInvitationCompleted(bool bSuccessful, const FLobbyOperationResult& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnKickBlockMemberComplete(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void JoinSquad(ULobbyJoinInfo* InviteInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsEqualSquadLobbyState(ESquadLobbyState State) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCompleteEndMenuSelect(ECommonRaceMenuContentId& HostSelectedId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsCompletedReadyMatching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsCompletedReadyCheck() const;
    
    UFUNCTION(BlueprintCallable)
    void Invite(const FUniqueNetIdRepl& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetSquadLobbyState(ESquadLobbyState& OutState) const;
    
    UFUNCTION(BlueprintCallable)
    void GetReceivedJoinRequest(FLobbyId& TargetLobbyId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineGameMode GetOnlineGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    ESquadLobbyMatchContinuation GetMatchContinuation() const;
    
    UFUNCTION(BlueprintCallable)
    void GetInRace(bool& OutInRace);
    
    UFUNCTION(BlueprintCallable)
    void CreateSquad_Callback(FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void CreateSquad();
    
};

