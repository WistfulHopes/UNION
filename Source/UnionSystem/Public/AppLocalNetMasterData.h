#pragma once
#include "CoreMinimal.h"
#include "NetMasterData_BanReleaseData.h"
#include "NetMasterData_BannerData.h"
#include "NetMasterData_CourseSettingData.h"
#include "NetMasterData_DlcTeaserData.h"
#include "NetMasterData_FairPlayPointData.h"
#include "NetMasterData_FestaCourseLotteryData.h"
#include "NetMasterData_FestaData.h"
#include "NetMasterData_FestaPointBonusData.h"
#include "NetMasterData_FestaPointRaceOrderData.h"
#include "NetMasterData_FestaPointRewardConditionsData.h"
#include "NetMasterData_FestaPointRewardData.h"
#include "NetMasterData_FestaPointSetData.h"
#include "NetMasterData_FestaPointTeamContribAttackHitData.h"
#include "NetMasterData_FestaPointTeamContribRingData.h"
#include "NetMasterData_FestaPointTeamWldData.h"
#include "NetMasterData_FestaRankingRewardData.h"
#include "NetMasterData_FestaRoundRewardData.h"
#include "NetMasterData_FestaTimeSceduleData.h"
#include "NetMasterData_FreeContentData.h"
#include "NetMasterData_FreeDlcData.h"
#include "NetMasterData_GeneralizedParameterData.h"
#include "NetMasterData_LegendCompeData.h"
#include "NetMasterData_LegendCompeGradeRewardData.h"
#include "NetMasterData_LegendCompeGradeTableData.h"
#include "NetMasterData_LegendCompeRankTableData.h"
#include "NetMasterData_LegendCompeRankingRewardData.h"
#include "NetMasterData_LegendCompeRewardData.h"
#include "NetMasterData_LegendCompeRewardFirstCountData.h"
#include "NetMasterData_LegendCompeRewardParticipateCountData.h"
#include "NetMasterData_LegendCompeRewardRaceCountData.h"
#include "NetMasterData_LegendCompeUniqueRewardData.h"
#include "NetMasterData_NewsData.h"
#include "NetMasterData_RankMatchRankTableData.h"
#include "NetMasterData_ReleaseAuraData.h"
#include "NetMasterData_ReleaseCharacterData.h"
#include "NetMasterData_ReleaseCourseData.h"
#include "NetMasterData_ReleaseDegreeData.h"
#include "NetMasterData_ReleaseFrontPartsData.h"
#include "NetMasterData_ReleaseGadgetData.h"
#include "NetMasterData_ReleaseHornData.h"
#include "NetMasterData_ReleaseRearPartsData.h"
#include "NetMasterData_ReleaseStickerData.h"
#include "NetMasterData_ReleaseTirePartsData.h"
#include "NetMasterData_ReleaseVersionData.h"
#include "AppLocalNetMasterData.generated.h"

USTRUCT(BlueprintType)
struct UNIONSYSTEM_API FAppLocalNetMasterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaData> festaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaCourseLotteryData> FestaCourseLotteryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaPointBonusData> FestaPointBonusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaPointRaceOrderData> FestaPointRaceOrderData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaPointRewardData> FestaPointRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaPointRewardConditionsData> FestaPointRewardConditionsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaPointSetData> FestaPointSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaPointTeamContribAttackHitData> FestaPointTeamContribAttackHitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaPointTeamContribRingData> FestaPointTeamContribRingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaPointTeamWldData> FestaPointTeamWldData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaRankingRewardData> FestaRankingRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaRoundRewardData> FestaRoundRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FestaTimeSceduleData> FestaTimeSceduleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_LegendCompeData> LegendCompeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_LegendCompeGradeTableData> LegendCompeGradeTableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_LegendCompeGradeRewardData> LegendCompeGradeRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_LegendCompeRankingRewardData> LegendCompeRankingRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_LegendCompeRankTableData> LegendCompeRankTableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_LegendCompeRewardData> LegendCompeRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_LegendCompeRewardFirstCountData> LegendCompeRewardFirstCountData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_LegendCompeRewardParticipateCountData> LegendCompeRewardParticipateCountData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_LegendCompeRewardRaceCountData> LegendCompeRewardRaceCountData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_LegendCompeUniqueRewardData> LegendCompeUniqueRewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_RankMatchRankTableData> RankMatchRankTableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FairPlayPointData> FairPlayPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_BanReleaseData> BanReleaseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_GeneralizedParameterData> GeneralizedParameterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_BannerData> BannerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FreeDlcData> FreeDlcData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_FreeContentData> FreeContentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_DlcTeaserData> DlcTeaserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_NewsData> NewsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_ReleaseAuraData> ReleaseAuraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_ReleaseCharacterData> ReleaseCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_ReleaseDegreeData> ReleaseDegreeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_ReleaseFrontPartsData> ReleaseFrontPartsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_ReleaseGadgetData> ReleaseGadgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_ReleaseHornData> ReleaseHornData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_ReleaseRearPartsData> ReleaseRearPartsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_ReleaseStickerData> ReleaseStickerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_ReleaseTirePartsData> ReleaseTirePartsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_ReleaseCourseData> ReleaseCourseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_ReleaseVersionData> ReleaseVersionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetMasterData_CourseSettingData> CourseSettingData;
    
    FAppLocalNetMasterData();
};

