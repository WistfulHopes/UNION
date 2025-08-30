#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnionRaceUIResultUtils.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRaceUIResultUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionRaceUIResultUtils();

    UFUNCTION(BlueprintCallable)
    static int32 GetResultParam(const FString& InParamString);
    
};

