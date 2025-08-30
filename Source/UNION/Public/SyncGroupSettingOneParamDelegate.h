#pragma once
#include "CoreMinimal.h"
#include "SyncGroupSettingOneParamDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSyncGroupSettingOneParam, const TArray<int32>&, GroupIndexArray);

