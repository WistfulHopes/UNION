#include "GimmickSlowNet.h"
#include "NiagaraComponent.h"
#include "UnionStaticMeshComponent.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickSlowNet::AGimmickSlowNet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GimmickContactType = EGimmickContactType::UnBreakableAndSendDamage;
    this->DamageType = RacerDamageType::GimmickDecelLarge;
    this->RelocateTime = 1.00f;
    this->NetMesh = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("NetStaticMesh"));
    this->ObjectBreakEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NetBreakFX"));
    this->BodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("NetMainBody"));
    this->BodyComponent->SetupAttachment(NetMesh);
    this->ObjectBreakEffect->SetupAttachment(NetMesh);
}


