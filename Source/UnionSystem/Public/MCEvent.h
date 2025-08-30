#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MCEventData.h"
#include "MCEvent.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UMCEvent : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMCEvent();

    UFUNCTION(BlueprintCallable)
    static int32 LotteryMCEventId();
    
    UFUNCTION(BlueprintCallable)
    static FMCEventData GetMCEventData_SpecifyId(int32 PointUpChanceId);
    
};

