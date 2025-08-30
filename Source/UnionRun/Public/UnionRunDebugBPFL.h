#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnionRunDebugBPFL.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRunDebugBPFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionRunDebugBPFL();

    UFUNCTION(BlueprintCallable)
    static void SwitchComStopMove();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAttackItemDevOnly(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterAttackItemDevOnly(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsForcedCom(const int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ForceGoalRacerWithoutLocalPlayer();
    
    UFUNCTION(BlueprintCallable)
    static void ForceGoalRacerOnce();
    
};

