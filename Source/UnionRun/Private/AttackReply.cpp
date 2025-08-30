#include "AttackReply.h"

FAttackReply::FAttackReply() {
    this->AttackRacerIndex = 0;
    this->TakeDamageRacerIndex = 0;
    this->DamageType = RacerDamageType::Non;
    this->ElapsedTime = 0.00f;
    this->RemainTime = 0.00f;
    this->OverwrittenByThisDamageType = RacerDamageType::Non;
}

