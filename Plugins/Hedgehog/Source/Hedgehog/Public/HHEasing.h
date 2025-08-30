#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HHEasing.generated.h"

UCLASS(Blueprintable)
class HEDGEHOG_API UHHEasing : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHHEasing();

    UFUNCTION(BlueprintCallable)
    static float SineEaseOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float SineEaseInOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float SineEaseIn(float T);
    
    UFUNCTION(BlueprintCallable)
    static float QuinticEaseOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float QuinticEaseInOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float QuinticEaseIn(float T);
    
    UFUNCTION(BlueprintCallable)
    static float QuarticEaseOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float QuarticEaseInOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float QuarticEaseIn(float T);
    
    UFUNCTION(BlueprintCallable)
    static float QuadraticEaseOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float QuadraticEaseInOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float QuadraticEaseIn(float T);
    
    UFUNCTION(BlueprintCallable)
    static float LinearEaseOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float LinearEaseInOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float LinearEaseIn(float T);
    
    UFUNCTION(BlueprintCallable)
    static float ExponentialEaseInOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float ExponentialEaseIn(float T);
    
    UFUNCTION(BlueprintCallable)
    static float ElasticEaseOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float ElasticEaseInOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float ElasticEaseIn(float T);
    
    UFUNCTION(BlueprintCallable)
    static float CubicEaseOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float CubicEaseInOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float CubicEaseIn(float T);
    
    UFUNCTION(BlueprintCallable)
    static float CircularEaseOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float CircularEaseInOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float CircularEaseIn(float T);
    
    UFUNCTION(BlueprintCallable)
    static float BounceEaseOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float BounceEaseInOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float BounceEaseIn(float T);
    
    UFUNCTION(BlueprintCallable)
    static float BackEaseOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float BackEaseInOut(float T);
    
    UFUNCTION(BlueprintCallable)
    static float BackEaseIn(float T);
    
};

