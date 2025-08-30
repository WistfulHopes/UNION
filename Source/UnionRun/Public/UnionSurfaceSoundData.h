#pragma once
#include "CoreMinimal.h"
#include "EUnionSurfaceType.h"
#include "UnionSurfaceSoundData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct UNIONRUN_API FUnionSurfaceSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionSurfaceType, USoundAtomCue*> SurfaceCueMap;
    
    FUnionSurfaceSoundData();
};

