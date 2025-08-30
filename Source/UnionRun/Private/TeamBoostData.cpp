#include "TeamBoostData.h"

FTeamBoostData::FTeamBoostData() {
    this->GameMode = EGameModeId::None;
    this->GroupCount = 0;
    this->ThresholdCount = 0;
    this->BoostLevel = 0;
    this->BoostMul = 0.00f;
    this->TeamNearConnectThickness = 0.00f;
    this->TeamFarConnectThickness = 0.00f;
    this->EnergyChargeDist = 0.00f;
    this->CatchUpMinDist = 0.00f;
    this->CatchUpMaxDist = 0.00f;
    this->CatchUpSpeed = 0.00f;
    this->CatchUpAccelMul = 0.00f;
    this->bEnableCOMCatchUpSpeedInterp = false;
    this->bEnableCOMCatchUpAccelInterp = false;
    this->FriendCOMCatchUpMinDist = 0.00f;
    this->FriendCOMCatchUpMaxDist = 0.00f;
    this->FriendCOMCatchUpSpeed = 0.00f;
    this->FriendCOMCatchUpAccelMul = 0.00f;
    this->EnemyCOMCatchUpMinDist = 0.00f;
    this->EnemyCOMCatchUpMaxDist = 0.00f;
    this->EnemyCOMCatchUpSpeed = 0.00f;
    this->EnemyCOMCatchUpAccelMul = 0.00f;
    this->TeamTouchDash_BoostLevel = 0;
    this->TeamTouchDash_BoostSeconds = 0.00f;
    this->TeamTouchDash_BoostMul = 0.00f;
    this->TeamTouchDash_CoolDownSeconds = 0.00f;
    this->AscentGaugeSpeed = 0.00f;
    this->AddEnergyValueByItemHit = 0.00f;
    this->AddEnergyValueByAllTouchDash = 0.00f;
    this->AddEnergyValueByTouchDash = 0.00f;
    this->AddEnergyValueByDriftDash = 0.00f;
    this->AddEnergyValueByAirTrick = 0.00f;
    this->AddEnergyValueByDashPanel = 0.00f;
    this->AddEnergyValueByDriftCharge = 0.00f;
    this->AddEnergyValueByRing = 0.00f;
    this->AddEnergyValueBySlipstream = 0.00f;
    this->AddEnergyValueBySpinDrift = 0.00f;
    this->AddEnergyValueByDriftJustDash = 0.00f;
    this->AddEnergyValueByOddNumRank = 0.00f;
}

