#pragma once
#include "CoreMinimal.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateEndMenu.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateEndMenu : public URaceSequenceStateBase {
    GENERATED_BODY()
public:
    URaceSequenceStateEndMenu(const FObjectInitializer& ObjectInitializer);

};

