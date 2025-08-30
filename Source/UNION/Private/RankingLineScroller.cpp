#include "RankingLineScroller.h"

URankingLineScroller::URankingLineScroller() {
    this->LastItemIndex = 99;
    this->MyLine = NULL;
    this->ScrollBox_0 = NULL;
    this->GameModeID = EGameModeId::None;
    this->TXT_MyDetaDay = NULL;
    this->TXT_OtherDetaDay = NULL;
    this->ItemClass = NULL;
}

void URankingLineScroller::UpdateVisibility(int32 InIndex, ESlateVisibility InVisibility) {
}

void URankingLineScroller::UpdateMyLine(const FMenuRankingLineData& RankingLineData) {
}

void URankingLineScroller::UpdateItems() {
}

void URankingLineScroller::SetRankDateString(const FString& DateString) {
}

void URankingLineScroller::SetRankDateDateTime(const FDateTime& DateTime) {
}

void URankingLineScroller::SetMyRankDateString(const FString& DateString) {
}

void URankingLineScroller::SetMyRankDateDateTime(const FDateTime& DateTime) {
}

void URankingLineScroller::SetGameMode(EGameModeId InGameMode) {
}

void URankingLineScroller::InitializeHover() {
}

int32 URankingLineScroller::GetCurrentIndex() const {
    return 0;
}

void URankingLineScroller::ConvertRankingDataTimeTrialToRankingList(const FRankingDataTimeTrialList& RankingData) {
}

void URankingLineScroller::ConvertRankingDataTimeTrialToRankingLine(const FRankingDataTimeTrial& RankingData, FMenuRankingLineData& OutLineData) {
}

void URankingLineScroller::ConvertRankingDataRankMatchToRankingList(const FRankingDataRankMatchList& RankingData) {
}

void URankingLineScroller::ConvertRankingDataRankMatchToRankingLine(const FRankingDataRankMatch& RankingData, FMenuRankingLineData& OutLineData) {
}

void URankingLineScroller::ConvertRankingDataLegendCompeToRankingList(const FRankingDataLegendCompeList& RankingData) {
}

void URankingLineScroller::ConvertRankingDataLegendCompeToRankingLine(const FRankingDataLegendCompe& RankingData, FMenuRankingLineData& OutLineData) {
}

void URankingLineScroller::ConvertRankingDataFestaToRankingList(const FRankingDataFestaPointList& RankingData) {
}

void URankingLineScroller::ConvertRankingDataFestaPointToRankingLine(const FRankingDataFestaPoint& RankingData, FMenuRankingLineData& OutLineData) {
}

void URankingLineScroller::ConvertMyRankingDataTimeTrialToRankingLine(EAppSupportedPlatform Platform, const FMyRankingAsyncResult& RankingData, FMenuRankingLineData& OutLineData) {
}

void URankingLineScroller::ClearLines() {
}

void URankingLineScroller::AddItem(const FMenuRankingLineData& RankingLineData) {
}


