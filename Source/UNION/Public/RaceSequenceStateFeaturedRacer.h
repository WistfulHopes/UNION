#pragma once
#include "CoreMinimal.h"
#include "UnionRaceInfoInterface.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateFeaturedRacer.generated.h"

class URaceBeforeSharedData;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateFeaturedRacer : public URaceSequenceStateBase, public IUnionRaceInfoInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URaceBeforeSharedData* RaceBeforeSharedData;
    
public:
    URaceSequenceStateFeaturedRacer(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

