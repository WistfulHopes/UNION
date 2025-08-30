#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HHMathUtility.generated.h"

UCLASS(Blueprintable)
class HEDGEHOG_API UHHMathUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHHMathUtility();

    UFUNCTION(BlueprintCallable)
    static FVector Vector3RotateTowards(const FVector& Current, const FVector& Target, const FVector& Axis, float maxMagnitudeDelta);
    
    UFUNCTION(BlueprintCallable)
    static float Vector3Angle(const FVector& v0, const FVector& v1);
    
    UFUNCTION(BlueprintCallable)
    static float Percentile(float Min, float Max, float Value);
    
};

