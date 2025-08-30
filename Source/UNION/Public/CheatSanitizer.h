#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatSanitizer.generated.h"

UCLASS(Blueprintable)
class UCheatSanitizer : public UObject {
    GENERATED_BODY()
public:
    UCheatSanitizer();

    UFUNCTION(BlueprintCallable, Exec)
    void SetDebugSanitizerFail(bool DebugSanitizerFail);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSanitizeArray(const FString& CheckWord, int32 RequestCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSanitize(const FString& CheckWord);
    
};

