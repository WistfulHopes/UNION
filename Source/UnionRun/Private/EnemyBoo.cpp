#include "EnemyBoo.h"
#include "UnionVATAnimEventComponent.h"
#include "ERandomObjType.h"

AEnemyBoo::AEnemyBoo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("VATMeshComponent"));
    this->RandomObjType = ERandomObjType::KrakenCommon;
    this->VATMeshComponent = (UUnionVATAnimEventComponent*)RootComponent;
    this->NiagaraBarrel = NULL;
    this->bInterval = false;
    this->SpawnFrame = 0;
    this->AnimStartFrame = 0;
    this->SpawnEffectFrame = 0;
    this->ThrowingSoundFrame = 0;
    this->PrepareSoundFrame = 0;
    this->IntervalSpawnFrame = 0;
    this->IntervalAnimStartFrame = 0;
    this->IntervalSpawnEffectFrame = 0;
    this->IntervalThrowingSoundFrame = 0;
    this->IntervalPrepareSoundFrame = 0;
}


