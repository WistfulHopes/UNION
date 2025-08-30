#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVehicleSound.h"
#include "MachineLevelSoundData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct UNIONRUN_API FMachineLevelSoundData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleSound SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundAtomCue>> CueList;
    
    FMachineLevelSoundData();
};

