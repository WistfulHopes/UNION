#pragma once
#include "CoreMinimal.h"
#include "EStageId.h"
#include "LobbyCourseSelectOnStageDecidedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyCourseSelectOnStageDecided, EStageId&, StageId);

