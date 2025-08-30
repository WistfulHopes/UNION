#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LobbySequenceP2PConnection.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbySequenceP2PConnection : public UActorComponent {
    GENERATED_BODY()
public:
    ULobbySequenceP2PConnection(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateState(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitState();
    
};

