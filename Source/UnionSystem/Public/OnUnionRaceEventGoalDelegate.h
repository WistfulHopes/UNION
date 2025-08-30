#pragma once
#include "CoreMinimal.h"
#include "AppRaceEventGoalData.h"
#include "OnUnionRaceEventGoalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnionRaceEventGoal, const FAppRaceEventGoalData&, Value);

