#include "EnemyTentacle.h"
#include "NiagaraComponent.h"
#include "UnionVATAnimEventComponent.h"
#include "ERandomObjType.h"
#include "GimmickStaticBodyComponent.h"

AEnemyTentacle::AEnemyTentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RandomObjType = ERandomObjType::KrakenCommon;
    this->VATMeshComponent = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("VATMeshComponent"));
    this->StaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("UStaticBodyComponent"));
    this->NiagaraAttack = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Tentacle_Attack01"));
    this->AttackStartFrame = 0;
    this->AttackEndFrame = 0;
    this->SquashedEndFrame = 0;
    this->TentacleAnimStartFrame = 0;
    this->AttackEffectFrame = 0;
    this->AttackBlinkFrame = 0;
    this->BlinkAnimCurve = NULL;
    this->TentacleMID = NULL;
    this->NiagaraAttack->SetupAttachment(VATMeshComponent);
    this->StaticBodyComponent->SetupAttachment(VATMeshComponent);
}

void AEnemyTentacle::TimelineStep(float Value) {
}




