#pragma once
#include "CoreMinimal.h"
#include "UnionTravelRingLevelSetDrawModeDelegate.generated.h"

class AUnionTravelRingLevelActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FUnionTravelRingLevelSetDrawMode, AUnionTravelRingLevelActor, UnionTravelRingLevelSetDrawMode, int32, ModeNo);

