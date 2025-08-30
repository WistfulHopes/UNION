#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "CreateOrConnectLobbyResult.h"
#include "LobbyId.h"
#include "LobbySubsystemOnCreateOrConnectLobbyCompleteDelegate.h"
#include "OnlineActivityInviteLobbySetupCompleteDelegate.h"
#include "OnlineActivitySubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UOnlineActivitySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UOnlineActivitySubsystem();

    UFUNCTION(BlueprintCallable)
    void SetupJoinRequest(FOnlineActivityInviteLobbySetupComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void SetActivity(const FString& LobbyIdString, int32 InLocalUserNum, int32 MaxPlayerNum, int32 CurrentPlayerNum);
    
    UFUNCTION(BlueprintCallable)
    void SendInviteNoCallback(int32 LocalUserNum, const FUniqueNetIdRepl& UserId, const FString& InLobbyIdString);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnConnectLobbyComplete(bool bSuccessful, const FCreateOrConnectLobbyResult& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    bool JoinInviteLobby(int32 LocalUserNum, FLobbySubsystemOnCreateOrConnectLobbyComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    bool IsJoinLobbyReady();
    
    UFUNCTION(BlueprintCallable)
    bool HasInviteRequest();
    
    UFUNCTION(BlueprintCallable)
    bool HasInviteOnly();
    
    UFUNCTION(BlueprintCallable)
    FLobbyId GetJoinLobby();
    
    UFUNCTION(BlueprintCallable)
    void FinishInviteLobby();
    
    UFUNCTION(BlueprintCallable)
    void DestroyInviteLobby(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable)
    void DeleteActivity();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetActivity(const FString& LobbyIdString);
    
    UFUNCTION(BlueprintCallable)
    void DebugDeleteActivity();
    
    UFUNCTION(BlueprintCallable)
    void CheckEndInviteRequest();
    
    UFUNCTION(BlueprintCallable)
    void CancelInviteLobby();
    
    UFUNCTION(BlueprintCallable)
    void AddRecentPlayers(int32 LocalUserNum, UPARAM(Ref) TArray<FString>& PlatformIdList);
    
};

