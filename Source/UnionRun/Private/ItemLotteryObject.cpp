#include "ItemLotteryObject.h"

AItemLotteryObject::AItemLotteryObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IrregularInfiniteDataTable = NULL;
    this->StockTime = 0.10f;
    this->GracePeriodTime = 0.10f;
    this->LotteryRouletteTime = 1.00f;
    this->IrregularInfiniteRouletteTime = 1.00f;
    this->LotteryRouletteSubAddTime = 0.50f;
    this->DisableRestrictionsThresholdCount = 6;
    this->PointDistanceDataTable = NULL;
    this->PlayerPointDistanceDataTable = NULL;
    this->ComPointDistanceDataTableList = NULL;
    this->RankGroupLotteryRateDataTable = NULL;
    this->DangerousRaceRankGroupLotteryRateDataTable = NULL;
    this->OtherPlayerRankGroupLotteryRateDataTable = NULL;
    this->ComPlayerRankGroupLotteryRateDataTableList = NULL;
    this->ExtremeRankGroupLotteryRateDataTableList = NULL;
    this->PartyRevengeRankGroupLotteryRateDataTable = NULL;
    this->GadgetLotteryRateDataDataTable = NULL;
    this->GadgetLotteryRateMagnificationCorrectionDataTable = NULL;
    this->GroupRaceRuleLotteryRateDataTable = NULL;
    this->TeamBattleLotteryRateDataDataTable = NULL;
    this->PackageRingVariationRateDataTable = NULL;
    this->LimitingFactorDataTable = NULL;
    this->ItemBoxUnavailableTime = 1.00f;
    this->bIsExcludingGroupRacers = true;
}


