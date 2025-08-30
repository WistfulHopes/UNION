#pragma once
#include "CoreMinimal.h"
#include "ERivalTeamId.h"
#include "EStageId.h"
#include "ItemSwitchSettingSave.h"
#include "PartyRacePresetSettingSave.h"
#include "UserPartyRaceData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FUserPartyRaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalTeamId, int32> RivalTeamWinCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalTeamId, int32> RivalTeamEliminatedCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalTeamId SelectedRivalTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalTeamId LastSelectedRivalTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RivalTeamCutinNextPlayRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RivalTeamAllEliminatedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRacePresetSettingSave RaceParkCustomRaceSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSwitchSettingSave ItemSwitchSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStageId> CourseSwitchSetting;
    
    FUserPartyRaceData();
};

