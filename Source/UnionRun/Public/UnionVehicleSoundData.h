#pragma once
#include "CoreMinimal.h"
#include "UnionVehicleSoundData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionVehicleSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> CueList;
    
    FUnionVehicleSoundData();
};

