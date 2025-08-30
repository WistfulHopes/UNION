#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_MonkeyTest.generated.h"

UCLASS(Blueprintable)
class UNION_API UBPFL_MonkeyTest : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_MonkeyTest();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetStaySceneMonkeyTesting();
    
};

