#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "P2PConnectionSubsystem.generated.h"

class ULobbyContextBase;

UCLASS(Blueprintable)
class UNIONSYSTEM_API UP2PConnectionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyContextBase* SquadLobby;
    
public:
    UP2PConnectionSubsystem();

    UFUNCTION(BlueprintCallable)
    int32 StartConnect(bool bIsHost, bool bIsResend);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateLobbyComplete(bool bSuccessful, const FLobbyOperationResult& Result, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndConnect();
    
    UFUNCTION(BlueprintCallable)
    void ClientTimeoutCheckStart();
    
};

