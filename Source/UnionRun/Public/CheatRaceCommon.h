#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatRaceCommon.generated.h"

UCLASS(Blueprintable)
class UCheatRaceCommon : public UObject {
    GENERATED_BODY()
public:
    UCheatRaceCommon();

    UFUNCTION(BlueprintCallable, Exec)
    void SetVisibleUnionRunParam(bool bInVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveAllWidgets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableSplitScreen(bool bInEnable);
    
};

