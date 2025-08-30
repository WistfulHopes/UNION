#pragma once
#include "CoreMinimal.h"
#include "UnionRaceInfoInterface.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateReady.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateReady : public URaceSequenceStateBase, public IUnionRaceInfoInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RaceStartTimeSec;
    
    URaceSequenceStateReady(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool StartRace(int32 InRaceStartTimeSec);
    
    UFUNCTION(BlueprintCallable)
    void SetClockStartWait(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    bool ReadyRace();
    

    // Fix for true pure virtual functions not being implemented
};

