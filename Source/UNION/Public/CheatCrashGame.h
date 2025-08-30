#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatCrashGame.generated.h"

UCLASS(Blueprintable)
class UCheatCrashGame : public UObject {
    GENERATED_BODY()
public:
    UCheatCrashGame();

    UFUNCTION(BlueprintCallable, Exec)
    void CrashGame();
    
};

