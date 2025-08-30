#pragma once
#include "CoreMinimal.h"
#include "UnionRaceInfoInterface.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateSendRaceStart.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateSendRaceStart : public URaceSequenceStateBase, public IUnionRaceInfoInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MySequenceStateTimeoutTime;
    
public:
    URaceSequenceStateSendRaceStart(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopExecuteCRM();
    
    UFUNCTION(BlueprintCallable)
    void NextState();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSkipCurrentState();
    

    // Fix for true pure virtual functions not being implemented
};

