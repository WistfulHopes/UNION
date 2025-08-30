#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "GrandPrixAwardsCeremonyState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UGrandPrixAwardsCeremonyState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UGrandPrixAwardsCeremonyState(const FObjectInitializer& ObjectInitializer);

};

