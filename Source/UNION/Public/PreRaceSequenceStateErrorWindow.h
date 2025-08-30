#pragma once
#include "CoreMinimal.h"
#include "SequenceStateNetworkCleanup.h"
#include "PreRaceSequenceStateErrorWindow.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPreRaceSequenceStateErrorWindow : public USequenceStateNetworkCleanup {
    GENERATED_BODY()
public:
    UPreRaceSequenceStateErrorWindow(const FObjectInitializer& ObjectInitializer);

};

