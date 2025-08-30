#pragma once
#include "CoreMinimal.h"
#include "LobbyOperationResult.h"
#include "LobbySequenceP2PConnection.h"
#include "LobbySequenceP2PConnectionLocal.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbySequenceP2PConnectionLocal : public ULobbySequenceP2PConnection {
    GENERATED_BODY()
public:
    ULobbySequenceP2PConnectionLocal(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteSetupLocalMemberRaceAttributes(bool bSuccessful, const FLobbyOperationResult& Result);
    
};

