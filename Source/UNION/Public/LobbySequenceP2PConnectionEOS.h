#pragma once
#include "CoreMinimal.h"
#include "LobbyOperationResult.h"
#include "LobbySequenceP2PConnection.h"
#include "LobbySequenceP2PConnectionEOS.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbySequenceP2PConnectionEOS : public ULobbySequenceP2PConnection {
    GENERATED_BODY()
public:
    ULobbySequenceP2PConnectionEOS(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnStageUpdateComplete(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnKickedMemberContext(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSetupLocalMemberRaceAttributesForSquadMember(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSetupLocalMemberRaceAttributesForSquad(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSetupLocalMemberRaceAttributes(bool bSuccessful, const FLobbyOperationResult& Result);
    
};

