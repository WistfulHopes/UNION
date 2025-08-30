#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "EndingStaffrollState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UEndingStaffrollState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UEndingStaffrollState(const FObjectInitializer& ObjectInitializer);

};

