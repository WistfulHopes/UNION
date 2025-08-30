#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESpeedClassId.h"
#include "UnionSpeedClassLibrary.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UUnionSpeedClassLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionSpeedClassLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTimeTrialActive(const ESpeedClassId InId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 GetTimeTrialIndex(const ESpeedClassId InId);
    
    UFUNCTION(BlueprintCallable)
    static float GetMinSpeedByClass(const ESpeedClassId ClassId);
    
    UFUNCTION(BlueprintCallable)
    static float GetMaxSpeedByClass(const ESpeedClassId ClassId);
    
};

