#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatMachineCustomize.generated.h"

UCLASS(Blueprintable)
class UCheatMachineCustomize : public UObject {
    GENERATED_BODY()
public:
    UCheatMachineCustomize();

    UFUNCTION(BlueprintCallable, Exec)
    void CopySelectedMachineCustomizeDataToClipboard(int32 InPlayerIndex);
    
};

