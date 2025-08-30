#pragma once
#include "CoreMinimal.h"
#include "RaceReactionVoiceEtc.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FRaceReactionVoiceEtc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> CueVoiceId;
    
    UNIONRUN_API FRaceReactionVoiceEtc();
};

