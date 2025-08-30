#pragma once
#include "CoreMinimal.h"
#include "EUnionUIControlDir.h"
#include "UnionUIGridLayoutButtonData.h"
#include "UnionUIGridLayoutSideNavCustomDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FUnionUIGridLayoutSideNavCustomDelegate, EUnionUIControlDir, Direction, FUnionUIGridLayoutButtonData, ButtonData);

