#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "UnionRacerFunction.generated.h"

class APlayerController;
class UUnionRacers;

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRacerFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionRacerFunction();

    UFUNCTION(BlueprintCallable)
    static bool IsSameGroup(int32 InRacerIndexA, int32 InRacerIndexB);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInScreen(const APlayerController* PlayerController, const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    static UUnionRacers* GetUnionRacers();
    
    UFUNCTION(BlueprintCallable)
    static float GetRankUpGaugeSpeed();
    
    UFUNCTION(BlueprintCallable)
    static float GetRankingSkipInterval();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRacerIndexByPlayerID(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRacerIndexByDriverID(EDriverId DriverId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRacerGroupIndex(int32 InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static float GetDistance(const FVector& Pos1, const FVector& Pos2);
    
};

