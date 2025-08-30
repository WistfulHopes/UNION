#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatFesta.generated.h"

UCLASS(Blueprintable)
class UCheatFesta : public UObject {
    GENERATED_BODY()
public:
    UCheatFesta();

    UFUNCTION(BlueprintCallable, Exec)
    void ForceSetTopMenuBackGround(const FString& InputParam);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSetFestaId(const FString& InputParam);
    
};

