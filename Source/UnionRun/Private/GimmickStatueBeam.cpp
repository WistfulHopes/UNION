#include "GimmickStatueBeam.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickStatueBeam::AGimmickStatueBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GimmickContactType = EGimmickContactType::UnBreakableAndSendDamage;
    this->BeamScaleCurve = NULL;
    this->DamageType = RacerDamageType::EnemyMedium;
    this->BeamScaleTime = 0.80f;
    this->m_AttackEffect = NULL;
    this->m_AttackStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBodyComponent"));
}

void AGimmickStatueBeam::StartBeamScaleTimer() {
}

void AGimmickStatueBeam::SetAttackEnable(bool IsEnable) {
}


