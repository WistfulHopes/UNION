#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheatInput.generated.h"

UCLASS(Blueprintable)
class UNION_API UCheatInput : public UObject {
    GENERATED_BODY()
public:
    UCheatInput();

    UFUNCTION(BlueprintCallable, Exec)
    void DebugRegisterMenuBlink(bool IsFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPrintRegisterMenu();
    
};

