#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatMachine.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatMachine : public UObject {
    GENERATED_BODY()
public:
    UCheatMachine();

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockMachineParts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetForcedLodMachine(int32 NewForcedLodModel);
    
};

