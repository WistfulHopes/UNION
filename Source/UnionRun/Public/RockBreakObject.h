#pragma once
#include "CoreMinimal.h"
#include "BreakObjectBase.h"
#include "RockBreakObject.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API ARockBreakObject : public ABreakObjectBase {
    GENERATED_BODY()
public:
    ARockBreakObject(const FObjectInitializer& ObjectInitializer);

};

