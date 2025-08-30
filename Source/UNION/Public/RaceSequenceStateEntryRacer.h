#pragma once
#include "CoreMinimal.h"
#include "UnionRaceInfoInterface.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateEntryRacer.generated.h"

class URaceBeforeSharedData;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateEntryRacer : public URaceSequenceStateBase, public IUnionRaceInfoInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URaceBeforeSharedData* RaceBeforeSharedData;
    
public:
    URaceSequenceStateEntryRacer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanProceedSequence() const;
    

    // Fix for true pure virtual functions not being implemented
};

