#pragma once
#include "CoreMinimal.h"
#include "ChallengeStatsData.h"
#include "EChallengeId.h"
#include "ChallengeSaveData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FChallengeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EChallengeId, FChallengeStatsData> ChallengeStatsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteMainChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCompleteSpecialChallenge;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Dammy;
    
    FChallengeSaveData();
};

