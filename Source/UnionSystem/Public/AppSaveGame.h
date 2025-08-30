#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AppFriendUserData.h"
#include "ChallengeSaveData.h"
#include "CompensationData.h"
#include "SaveDataHeader.h"
#include "StatsSaveData.h"
#include "UserActivityCardFlagData.h"
#include "UserAssistData.h"
#include "UserCommonData.h"
#include "UserCustomLapBGMData.h"
#include "UserDriverData.h"
#include "UserFriendShipData.h"
#include "UserGadgetCustomizeData.h"
#include "UserGrandPrixData.h"
#include "UserHintData.h"
#include "UserHonorTitleData.h"
#include "UserJukeboxData.h"
#include "UserMachineAssemblyData.h"
#include "UserNoticeData.h"
#include "UserPartyRaceData.h"
#include "UserPartyRaceRivalData.h"
#include "UserRewardGetDisplayRequestData.h"
#include "UserTimeTrialData.h"
#include "UserTutorialData.h"
#include "AppSaveGame.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UAppSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDataHeader _Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserCommonData _UserCommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserMachineAssemblyData _UserMachineAssemblyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserGrandPrixData _UserGrandPrixData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserTimeTrialData _UserTimeTrialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeSaveData _UserChallengeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserTutorialData _UserTutorialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserDriverData _UserDriverData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserHintData _UserHintData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserAssistData> _UserAssistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserRewardGetDisplayRequestData _UserRewardGetDisplayRequestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsSaveData _StatsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppFriendUserData _AppFriendUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserNoticeData _AppNoticeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPartyRaceData _UserPartyRaceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPartyRaceRivalData _UserPartyRaceRivalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserHonorTitleData _UserHonorTitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserCustomLapBGMData _UserCustomLapBGMData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserJukeboxData _UserJukeboxData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserFriendShipData _UserFriendShipData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserGadgetCustomizeData _UserGadgetCustomizeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserActivityCardFlagData _UserActivityCardFlagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompensationData _CompensationData;
    
    UAppSaveGame();

};

