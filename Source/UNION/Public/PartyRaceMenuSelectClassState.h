#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "PartyRaceMenuSelectClassState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPartyRaceMenuSelectClassState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPartyRaceMenuSelectClassState(const FObjectInitializer& ObjectInitializer);

};

