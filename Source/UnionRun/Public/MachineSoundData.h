#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVehicleSound.h"
#include "MachineSoundData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct UNIONRUN_API FMachineSoundData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleSound SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> Cue;
    
    FMachineSoundData();
};

