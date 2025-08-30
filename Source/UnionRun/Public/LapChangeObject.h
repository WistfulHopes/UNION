#pragma once
#include "CoreMinimal.h"
#include "UnionCourseObjectBase.h"
#include "LapChangeObject.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API ALapChangeObject : public AUnionCourseObjectBase {
    GENERATED_BODY()
public:
    ALapChangeObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalLapEvent();
    
};

