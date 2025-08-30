#pragma once
#include "CoreMinimal.h"
#include "UnionTravelRingLevelEventDelegate.generated.h"

class AUnionTravelRingLevelActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FUnionTravelRingLevelEvent, AUnionTravelRingLevelActor, UnionTravelRingLevelEvent, uint8, SequenceNo);

