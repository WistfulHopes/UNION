#include "RacerDamageData.h"

FRacerDamageData::FRacerDamageData() {
    this->DamageType = RacerDamageType::Non;
    this->ReactionType = ERacerDamageReactionType::Non;
    this->DamageRingCount = 0;
    this->Priority = 0;
    this->Duration = 0.00f;
    this->DamageInvincibleTime = 0.00f;
    this->ItemUnavailableTime = 0.00f;
    this->IsApplyRingLostSetting = false;
    this->IsForceSpin = false;
    this->IsForceSpin_LostAllRingRule = false;
    this->IsSquashed = false;
    this->IsLostAllItem = false;
    this->IsLostHoldItem = false;
    this->IsPhysicalDamage = false;
    this->IsImmediateDeceleration = false;
    this->IsIgnoreTravalRingInvincible = false;
    this->IsDashAndDriftCancel = false;
    this->IsNeedReply = false;
}

