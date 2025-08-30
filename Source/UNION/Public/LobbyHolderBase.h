#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachineStateComponent.h"
#include "EMenuSequenceSubState.h"
#include "EOnlineSequenceState.h"
#include "LobbyHolderBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API ULobbyHolderBase : public UHierarchicalStateMachineStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSequenceSubState DefaultMenuState;
    
    ULobbyHolderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextMatchingSequenceState(EOnlineSequenceState InState);
    
};

