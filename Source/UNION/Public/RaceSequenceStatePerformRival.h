#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnionRaceInfoInterface.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStatePerformRival.generated.h"

class UObject;
class URaceBeforeSharedData;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStatePerformRival : public URaceSequenceStateBase, public IUnionRaceInfoInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URaceBeforeSharedData* RaceBeforeSharedData;
    
public:
    URaceSequenceStatePerformRival(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    UObject* GetLoadedObject(const FSoftObjectPath& Path);
    

    // Fix for true pure virtual functions not being implemented
};

