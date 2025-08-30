#include "UnionEnemyBase.h"
#include "ECourseObjColType.h"

AUnionEnemyBase::AUnionEnemyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ColType = ECourseObjColType::Enemy;
    this->EnemyType = EEnemyType::None;
    this->DamageType = RacerDamageType::EnemyMedium;
    this->AnimationPlayRate = 1.00f;
}


