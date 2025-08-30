#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatHonorTitle.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatHonorTitle : public UObject {
    GENERATED_BODY()
public:
    UCheatHonorTitle();

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockHonorTitle(int32 HonorTitleId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllHonorTitle();
    
};

