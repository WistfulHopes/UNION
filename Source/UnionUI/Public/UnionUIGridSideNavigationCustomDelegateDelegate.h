#pragma once
#include "CoreMinimal.h"
#include "EUnionUIControlDir.h"
#include "UnionUIGridSideNavigationCustomDelegateDelegate.generated.h"

class UUnionUIButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FUnionUIGridSideNavigationCustomDelegate, EUnionUIControlDir, InDirection, UUnionUIButtonBase*, InButton, int32, InRowIndex, int32, InColumnIndex);

