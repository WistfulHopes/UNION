#pragma once
#include "CoreMinimal.h"
#include "EMainSubCourseIndex.h"
#include "MainSubCourseEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMainSubCourseEvent, const EMainSubCourseIndex&, Value1, int32, Value2);

