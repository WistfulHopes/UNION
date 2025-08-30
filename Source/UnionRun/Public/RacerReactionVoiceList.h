#pragma once
#include "CoreMinimal.h"
#include "RacerReactionVoicePack.h"
#include "RacerReactionVoiceList.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerReactionVoiceList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRacerReactionVoicePack> VoiceList;
    
    FRacerReactionVoiceList();
};

