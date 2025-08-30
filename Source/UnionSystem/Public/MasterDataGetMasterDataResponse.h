#pragma once
#include "CoreMinimal.h"
#include "MasterDataGetMasterDataResponse_MstBanReleaseData.h"
#include "MasterDataGetMasterDataResponse_MstBannerData.h"
#include "MasterDataGetMasterDataResponse_MstCourseSettingData.h"
#include "MasterDataGetMasterDataResponse_MstDlcTeaserData.h"
#include "MasterDataGetMasterDataResponse_MstFairPlayPointData.h"
#include "MasterDataGetMasterDataResponse_MstFestaCourseLotteryData.h"
#include "MasterDataGetMasterDataResponse_MstFestaData.h"
#include "MasterDataGetMasterDataResponse_MstFestaPointBonusData.h"
#include "MasterDataGetMasterDataResponse_MstFestaPointRaceOrderData.h"
#include "MasterDataGetMasterDataResponse_MstFestaPointRewardConditionsData.h"
#include "MasterDataGetMasterDataResponse_MstFestaPointRewardData.h"
#include "MasterDataGetMasterDataResponse_MstFestaPointSetData.h"
#include "MasterDataGetMasterDataResponse_MstFestaPointTeamContribAttackHitData.h"
#include "MasterDataGetMasterDataResponse_MstFestaPointTeamContribRingData.h"
#include "MasterDataGetMasterDataResponse_MstFestaPointTeamWldData.h"
#include "MasterDataGetMasterDataResponse_MstFestaRankingRewardData.h"
#include "MasterDataGetMasterDataResponse_MstFestaRoundRewardData.h"
#include "MasterDataGetMasterDataResponse_MstFestaTimeSceduleData.h"
#include "MasterDataGetMasterDataResponse_MstFreeContentData.h"
#include "MasterDataGetMasterDataResponse_MstFreeDlcData.h"
#include "MasterDataGetMasterDataResponse_MstGeneralizedParameterData.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeData.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeGradeRewardData.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeGradeTableData.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeRankTableData.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeRankingRewardData.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeRewardData.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeRewardFirstCountData.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeRewardParticipateCountData.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeRewardRaceCountData.h"
#include "MasterDataGetMasterDataResponse_MstLegendCompeUniqueRewardData.h"
#include "MasterDataGetMasterDataResponse_MstNewsData.h"
#include "MasterDataGetMasterDataResponse_MstRankMatchRankTableData.h"
#include "MasterDataGetMasterDataResponse_MstReleaseAuraData.h"
#include "MasterDataGetMasterDataResponse_MstReleaseCharacterData.h"
#include "MasterDataGetMasterDataResponse_MstReleaseCourseData.h"
#include "MasterDataGetMasterDataResponse_MstReleaseDegreeData.h"
#include "MasterDataGetMasterDataResponse_MstReleaseFrontPartsData.h"
#include "MasterDataGetMasterDataResponse_MstReleaseGadgetData.h"
#include "MasterDataGetMasterDataResponse_MstReleaseHornData.h"
#include "MasterDataGetMasterDataResponse_MstReleaseRearPartsData.h"
#include "MasterDataGetMasterDataResponse_MstReleaseStickerData.h"
#include "MasterDataGetMasterDataResponse_MstReleaseTirePartsData.h"
#include "MasterDataGetMasterDataResponse_MstReleaseVersionData.h"
#include "MasterDataGetMasterDataResponse.generated.h"

USTRUCT(BlueprintType)
struct FMasterDataGetMasterDataResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaData> mstFestaDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaCourseLotteryData> mstFestaCourseLotteryDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaPointBonusData> mstFestaPointBonusDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaPointRaceOrderData> mstFestaPointRaceOrderDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaPointRewardData> mstFestaPointRewardDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaPointRewardConditionsData> mstFestaPointRewardConditionsDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaPointSetData> mstFestaPointSetDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaPointTeamContribAttackHitData> mstFestaPointTeamContribAttackHitDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaPointTeamContribRingData> mstFestaPointTeamContribRingDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaPointTeamWldData> mstFestaPointTeamWldDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaRankingRewardData> mstFestaRankingRewardDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaRoundRewardData> mstFestaRoundRewardDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFestaTimeSceduleData> mstFestaTimeSceduleDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstLegendCompeData> mstLegendCompeDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstLegendCompeGradeTableData> mstLegendCompeGradeTableDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstLegendCompeGradeRewardData> mstLegendCompeGradeRewardDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstLegendCompeRankingRewardData> mstLegendCompeRankingRewardDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstLegendCompeRankTableData> mstLegendCompeRankTableDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstLegendCompeRewardData> mstLegendCompeRewardDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstLegendCompeRewardFirstCountData> mstLegendCompeRewardFirstCountDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstLegendCompeRewardParticipateCountData> mstLegendCompeRewardParticipateCountDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstLegendCompeRewardRaceCountData> mstLegendCompeRewardRaceCountDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstLegendCompeUniqueRewardData> mstLegendCompeUniqueRewardDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstRankMatchRankTableData> mstRankMatchRankTableDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFairPlayPointData> mstFairPlayPointDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstBanReleaseData> mstBanReleaseDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstGeneralizedParameterData> mstGeneralizedParameterDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstBannerData> mstBannerDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFreeDlcData> mstFreeDlcDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstFreeContentData> mstFreeContentDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstDlcTeaserData> mstDlcTeaserDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstNewsData> mstNewsDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstReleaseAuraData> mstReleaseAuraDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstReleaseCharacterData> mstReleaseCharacterDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstReleaseDegreeData> mstReleaseDegreeDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstReleaseFrontPartsData> mstReleaseFrontPartsDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstReleaseGadgetData> mstReleaseGadgetDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstReleaseHornData> mstReleaseHornDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstReleaseRearPartsData> mstReleaseRearPartsDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstReleaseStickerData> mstReleaseStickerDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstReleaseTirePartsData> mstReleaseTirePartsDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstReleaseCourseData> mstReleaseCourseDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstReleaseVersionData> mstReleaseVersionDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasterDataGetMasterDataResponse_MstCourseSettingData> mstCourseSettingDatas;
    
    UNIONSYSTEM_API FMasterDataGetMasterDataResponse();
};

