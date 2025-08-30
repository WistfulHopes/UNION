#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "PartyRaceMenuItemSwitchState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPartyRaceMenuItemSwitchState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UPartyRaceMenuItemSwitchState(const FObjectInitializer& ObjectInitializer);

};

