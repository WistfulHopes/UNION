#pragma once
#include "CoreMinimal.h"
#include "OnlineErrorBP.h"
#include "CustomMatchLobbyContext.h"
#include "LobbyContextOnGoToRaceDelegate.h"
#include "LobbyContextOnReadyCheckDelegate.h"
#include "LobbyContextOnReadyCheckReplyDelegate.h"
#include "WirelessLobbyContextCreateSettings.h"
#include "WirelessLobbyContextSearchSettings.h"
#include "WirelessLobbyContext.generated.h"

class ULobbyJoinInfo;
class UWirelessLobbyContext;

UCLASS(Blueprintable)
class UNION_API UWirelessLobbyContext : public UCustomMatchLobbyContext {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnSearchComplete, UWirelessLobbyContext*, LobbyContext, bool, bSuccessful, const TArray<ULobbyJoinInfo*>&, LobbySessions);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnOperationComplete, UWirelessLobbyContext*, LobbyContext, const FOnlineErrorBP&, Error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnReadyCheck OnReadyCheck;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnReadyCheckReply OnReadyCheckReply;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnGoToRace OnGoToRace;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULobbyJoinInfo*> LobbySessions;
    
public:
    UWirelessLobbyContext();

    UFUNCTION(BlueprintCallable)
    bool SyncLobbyContextData();
    
    UFUNCTION(BlueprintCallable)
    bool SendReadyCheck();
    
    UFUNCTION(BlueprintCallable)
    bool SendGoToRace();
    
    UFUNCTION(BlueprintCallable)
    void SearchWirelessSession(const FWirelessLobbyContextSearchSettings& SearchSettings, UWirelessLobbyContext::FOnSearchComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void ResetReadyCheck();
    
    UFUNCTION(BlueprintCallable)
    void JoinWirelessSession(ULobbyJoinInfo* LobbyJoinInfo, UWirelessLobbyContext::FOnOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void ExitWirelessSession(UWirelessLobbyContext::FOnOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void CreateWirelessSession(const FWirelessLobbyContextCreateSettings& CreateSettings, UWirelessLobbyContext::FOnOperationComplete OnComplete);
    
};

