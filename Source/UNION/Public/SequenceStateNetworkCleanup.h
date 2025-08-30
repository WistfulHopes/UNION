#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "OnlineErrorBP.h"
#include "SequenceStateNetworkCleanup.generated.h"

class ULobbyContextBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API USequenceStateNetworkCleanup : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCleanupP2PConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCleanupPublicLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCleanupPrivateLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEOSLogout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeoutTime;
    
public:
    USequenceStateNetworkCleanup(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteExitLobby(ULobbyContextBase* LobbyContext, const FOnlineErrorBP& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteEOSLogout(int32 LocalUserNum, bool bWasSuccessful);
    
};

