#pragma once
#include "CoreMinimal.h"
#include "EPartyRacePreset.h"
#include "ERewardType.h"
#include "EStageId.h"
#include "AppOutRaceSetting.generated.h"

USTRUCT(BlueprintType)
struct FAppOutRaceSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingDonpaTicketRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGadgetPlateRankUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERewardType> InGameGettingRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyRacePreset RaceParkPresetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> AnotherStageIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> AlreadyRunStageIds;
    
    UNION_API FAppOutRaceSetting();
};

