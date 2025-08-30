#pragma once
#include "CoreMinimal.h"
#include "RaceResultSequenceStateBase.h"
#include "RaceResultSequenceStateCeremony.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceResultSequenceStateCeremony : public URaceResultSequenceStateBase {
    GENERATED_BODY()
public:
    URaceResultSequenceStateCeremony(const FObjectInitializer& ObjectInitializer);

};

