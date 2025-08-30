#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatStage.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatStage : public UObject {
    GENERATED_BODY()
public:
    UCheatStage();

    UFUNCTION(BlueprintCallable, Exec)
    void Safe2ndLapCourse(bool bInSafeStage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceUserCourse(bool bInForceUserCourse);
    
};

