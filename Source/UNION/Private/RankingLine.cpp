#include "RankingLine.h"

URankingLine::URankingLine() {
    this->bIsMyLine = false;
    this->GameModeType = EGameModeId::None;
    this->DSP_WidgetSwitcher_Rank = NULL;
    this->NUM_th = NULL;
    this->DSP_WBP_ResultRate_Sub_RankIcon = NULL;
    this->DMY_CharaIcon = NULL;
    this->TXT_PlayerName = NULL;
    this->PlatformIcon = NULL;
    this->WBP_HonorTitle_Plate = NULL;
    this->Num_Point_01 = NULL;
    this->Num_Time = NULL;
    this->Active_Loop = NULL;
    this->Select_Loop = NULL;
    this->Myself_Loop = NULL;
}


void URankingLine::SetRecordTime(int32 TotalTime) {
}

void URankingLine::SetRateValue(int32 rateValue) {
}

void URankingLine::SetRankValue(int32 rankValue) {
}

void URankingLine::SetRankingLineData(EGameModeId RankType, const FMenuRankingLineData& Data) {
}

void URankingLine::SetRacerName(const FText& RacerName) {
}

void URankingLine::SetHonerTitleId(int32 titleId) {
}

void URankingLine::SetFestaPointValue(int32 TotalPoint) {
}

void URankingLine::SetCrossPlayIcon(ECrossplayPlatform CrossplayType) {
}

void URankingLine::SetCharacterId(EDriverId CharaId) {
}

void URankingLine::FireMyselfAnim() {
}

void URankingLine::ClearDisplay() {
}


