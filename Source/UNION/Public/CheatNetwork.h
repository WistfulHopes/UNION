#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatNetwork.generated.h"

UCLASS(Blueprintable)
class UCheatNetwork : public UObject {
    GENERATED_BODY()
public:
    UCheatNetwork();

    UFUNCTION(BlueprintCallable, Exec)
    void SetShowPlayStatus(bool InFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNetworkTimeoutSec(int32 InNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNetworkSendStampSec(float InNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNetworkSendHornSec(float InNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNetworkP2PSequenceTimeout(int32 InNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNetworkP2PCanSendPackeTimeout(int32 InNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDummyMasterDataSum(int32 InMasterDataSum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllowSearchByPlayerId(bool InFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllowReceiveLobbyInvites(bool InFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllowReceiveFriendRequests(bool InFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllowNotifyLobbyInvitesInRace(bool InFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAllowCrossPlay(bool InFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrivateMatchMonkeyTestAllSet();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NetworkAddMemberInitCompleteTimeoutSec(int32 InNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceUpdateCustomRuleRaceCountMax(bool InFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSkipCloseLobbyInvitationWindow(bool InFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSetRomVersion(const FString& InputParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSetNetworkRequestIntervalSec(const FString& InputParamSec);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSetGameClosedStatusOnLogin(int32 GameClosedStatus);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSetBanStatusOnLogin(int32 BanStatus);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceOpenFriendMatch(bool InEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceDisableLobbyKick(bool InFlag);
    
};

