#pragma once
#include "CoreMinimal.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "EMatchingLobbyType.h"
#include "NetLobbyControlComponent.h"
#include "Templates/SubclassOf.h"
#include "SquadLobbyControlComponent.generated.h"

class USquadContext;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API USquadLobbyControlComponent : public UNetLobbyControlComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USquadContext> SquadContextClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMatchingLobbyType, TSubclassOf<UNetLobbyControlComponent>> OnlineNetLobbyControls;
    
public:
    USquadLobbyControlComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompleteJoinSquad(bool bSuccessful, const FLobbyOperationResult& Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCheckInvitation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void JoinSquadBySearchLobbyId_Callback(FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void JoinSquadBySearchLobbyId();
    
    UFUNCTION(BlueprintCallable)
    void JoinSquadByInviteInfo_Callback(FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void JoinSquadByInviteInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CheckHasPlanningToJoinLobby(bool& bHasAcceptInvite, bool& bHasSearchLobbyId, bool& bShouldQuitLobby) const;
    
};

