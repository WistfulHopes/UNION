#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateCeremony.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateCeremony : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStateCeremony(const FObjectInitializer& ObjectInitializer);

};

