#pragma once
#include "CoreMinimal.h"
#include "RacerReactionVoice.h"
#include "RacerReactionVoicePack.generated.h"

USTRUCT(BlueprintType)
struct UNIONRUN_API FRacerReactionVoicePack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RacerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> SerifScreenIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRacerReactionVoice RacerReactionVoice;
    
    FRacerReactionVoicePack();
};

