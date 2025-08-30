#pragma once
#include "CoreMinimal.h"
#include "PreRaceSequenceStateBase.h"
#include "PreRaceSequenceStateMeasurementExitDelegateDelegate.h"
#include "PreRaceSequenceStateMeasurement.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UPreRaceSequenceStateMeasurement : public UPreRaceSequenceStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreRaceSequenceStateMeasurementExitDelegate OnExitDelegate;
    
    UPreRaceSequenceStateMeasurement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLatencyScoreMap(TMap<FString, int32>& OutScoreMap) const;
    
};

