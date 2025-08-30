#include "CollisionHitInfo.h"

FCollisionHitInfo::FCollisionHitInfo() {
    this->CollisionHitType = ECollisionHitType::HitOnEnter;
    this->MyComponent = NULL;
    this->OtherComponent = NULL;
}

