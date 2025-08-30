#include "AttackedInfo.h"

FAttackedInfo::FAttackedInfo() {
    this->SenderObject = NULL;
    this->AttackRacerIndex = 0;
    this->TakeDamageRacerIndex = 0;
    this->CarHitDamageRingCount = 0;
    this->UniqueID = 0;
    this->ItemId = EItemId::NonItem;
    this->DamageType = RacerDamageType::Non;
    this->HitFront = false;
    this->HitRear = false;
    this->HitLeft = false;
    this->HitRight = false;
    this->IsRingLost = false;
    this->IsNormalDamage = false;
    this->IsSpin = false;
    this->IsSquashed = false;
}

