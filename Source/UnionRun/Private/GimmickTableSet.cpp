#include "GimmickTableSet.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "GimmickStaticBodyComponent.h"

AGimmickTableSet::AGimmickTableSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BreakActionTime = 1.50f;
    this->DamageType = RacerDamageType::GimmickDecelLarge;
    this->BodyStatickMeshComponent = NULL;
    this->MainModelMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("TableMeshComponent"));
    this->MainStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainTableBody"));
    this->CarHitEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("HitEffect"));
    this->HitSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("HitSE"));
    this->CarHitEffect->SetupAttachment(MainModelMeshComponent);
    this->HitSoundComponent->SetupAttachment(MainModelMeshComponent);
    this->MainStaticBodyComponent->SetupAttachment(MainModelMeshComponent);
}


