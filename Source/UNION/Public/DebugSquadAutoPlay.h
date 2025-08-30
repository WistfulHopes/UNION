#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "LobbyOperationResult.h"
#include "OnlineErrorBP.h"
#include "DebugSquadAutoPlay.generated.h"

class UAppNetComponent;
class ULobbyContextBase;
class ULobbyJoinInfo;

UCLASS(Blueprintable, Config=UnionNetwork)
class UNION_API UDebugSquadAutoPlay : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAppNetComponent> AppNet;
    
public:
    UDebugSquadAutoPlay();

    UFUNCTION(BlueprintCallable)
    void OnSendInvitationCompleted(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveInvitationCallback(const FUniqueNetIdRepl& UserId, ULobbyJoinInfo* Invite);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinSquadCompleted(ULobbyContextBase* LobbyContext, const FOnlineErrorBP& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateSquadLobbyCompleted(bool bSuccessful, const FLobbyOperationResult& Result);
    
};

