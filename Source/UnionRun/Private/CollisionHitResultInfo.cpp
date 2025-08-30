#include "CollisionHitResultInfo.h"

FCollisionHitResultInfo::FCollisionHitResultInfo() {
    this->CollisionHitType = ECollisionHitType::HitOnEnter;
    this->HitComponent = NULL;
}

