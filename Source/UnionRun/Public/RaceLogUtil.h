#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RaceLogUtil.generated.h"

UCLASS(Blueprintable)
class URaceLogUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URaceLogUtil();

    UFUNCTION(BlueprintCallable)
    static void PrintWarpLog(int32 RacerIndex, const FString& str, const FString& at);
    
    UFUNCTION(BlueprintCallable)
    static void PrintRunLog(int32 RacerIndex, const FString& str, const FString& at);
    
    UFUNCTION(BlueprintCallable)
    static void PrintRaceLog(int32 RacerIndex, const FString& str, const FString& at);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRacerStatusInfo(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    static FString GetRacerLapInfo(int32 RacerIndex);
    
};

