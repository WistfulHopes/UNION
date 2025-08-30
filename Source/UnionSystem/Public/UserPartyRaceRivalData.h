#pragma once
#include "CoreMinimal.h"
#include "UserPartyRaceRivalData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserPartyRaceRivalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RivalTeamLevelAdjust;
    
    FUserPartyRaceRivalData();
};

