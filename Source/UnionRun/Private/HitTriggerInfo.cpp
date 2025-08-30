#include "HitTriggerInfo.h"

FHitTriggerInfo::FHitTriggerInfo() {
    this->CollisionHitType = ECollisionHitType::HitOnEnter;
    this->MyComponent = NULL;
}

