#pragma once
#include "CoreMinimal.h"
#include "MenuSequenceSubStateBase.h"
#include "TodayRecordState.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UTodayRecordState : public UMenuSequenceSubStateBase {
    GENERATED_BODY()
public:
    UTodayRecordState(const FObjectInitializer& ObjectInitializer);

};

