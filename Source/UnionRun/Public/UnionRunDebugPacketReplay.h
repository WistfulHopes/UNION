#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnlineRaceReplay.h"
#include "UnionRunDebugPacketReplay.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API UUnionRunDebugPacketReplay : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUnionRunDebugPacketReplay();

    UFUNCTION(BlueprintCallable)
    static void SetOnlineRaceReplay(FOnlineRaceReplay& RaceReplayData);
    
    UFUNCTION(BlueprintCallable)
    static int32 LoadOnlineRaceReplay(FOnlineRaceReplay& RaceReplayData);
    
    UFUNCTION(BlueprintCallable)
    static void GetOnlineRaceReplayData(TArray<uint8>& Data);
    
};

