#pragma once
#include "CoreMinimal.h"
#include "UnionRaceUIResultLine.h"
#include "UnionRaceUIGroupResultLine.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceUIGroupResultLine : public UUnionRaceUIResultLine {
    GENERATED_BODY()
public:
    UUnionRaceUIGroupResultLine();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGroupIndex(int32 InGroupIndex);
    
};

