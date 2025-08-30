#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatCommon.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatCommon : public UObject {
    GENERATED_BODY()
public:
    UCheatCommon();

    UFUNCTION(BlueprintCallable, Exec)
    void SetVisibleUnionRunParam(bool bInVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveAllWidgets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableSplitScreen(bool bInEnable);
    
};

