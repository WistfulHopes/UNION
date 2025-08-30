#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatSticker.generated.h"

UCLASS(Blueprintable)
class UCheatSticker : public UObject {
    GENERATED_BODY()
public:
    UCheatSticker();

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockSticker();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBakeRequestIntervalTime(float InNum);
    
};

