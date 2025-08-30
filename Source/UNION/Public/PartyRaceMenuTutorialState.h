#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "PartyRaceMenuTutorialState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPartyRaceMenuTutorialState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPartyRaceMenuTutorialState(const FObjectInitializer& ObjectInitializer);

};

