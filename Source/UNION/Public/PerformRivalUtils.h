#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDriverId.h"
#include "EPerformRivalOutcome.h"
#include "EPerformRivalInteractionType.h"
#include "EPerformRivalMode.h"
#include "ERivalLipSyncType.h"
#include "PerformRivalUtils.generated.h"

UCLASS(Blueprintable)
class UNION_API UPerformRivalUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPerformRivalUtils();

    UFUNCTION(BlueprintCallable)
    static EPerformRivalMode GetPerformRivalMode(const EDriverId PlayerDriverId);
    
    UFUNCTION(BlueprintCallable)
    static FSoftObjectPath GetLipSyncAnimationPath(const EDriverId ID, const ERivalLipSyncType Type, const EDriverId RivalId);
    
    UFUNCTION(BlueprintCallable)
    static EPerformRivalInteractionType GetFirstPerformRivalInteractionType(const EDriverId PlayerDriverId, const EDriverId RivalDriverId);
    
    UFUNCTION(BlueprintCallable)
    static EPerformRivalInteractionType GetFirstPerformPlayerInteractionType(const EDriverId PlayerDriverId, const EDriverId RivalDriverId);
    
    UFUNCTION(BlueprintCallable)
    static EPerformRivalInteractionType GetFinalPerformRivalInteractionType(const EDriverId RivalDriverId, const EPerformRivalOutcome Outcome);
    
    UFUNCTION(BlueprintCallable)
    static EPerformRivalOutcome GetCurrentRivalOutcome(const int32 RivalRacerIndex);
    
};

