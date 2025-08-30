#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EUnionSurfaceType.h"
#include "EVehicleSound.h"
#include "MachineSurfaceSoundData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct UNIONRUN_API FMachineSurfaceSoundData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleSound SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnionSurfaceType, TSoftObjectPtr<USoundAtomCue>> CueMap;
    
    FMachineSurfaceSoundData();
};

