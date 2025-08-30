#include "EnemyNal.h"
#include "NiagaraComponent.h"
#include "UnionVATAnimEventComponent.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"

AEnemyNal::AEnemyNal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionVATAnimEventComponent>(TEXT("VATMesh"));
    this->GimmickContactType = EGimmickContactType::InvincibleBreakAndSendDamage;
    this->VATMesh = (UUnionVATAnimEventComponent*)RootComponent;
    this->Body = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("Body"));
    this->ExplosionEffect1 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Explosion1"));
    this->ExplosionEffect2 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Explosion2"));
    this->VATDamageAnimIndex = 1;
    this->ExplosionFrame1 = 5;
    this->ExplosionFrame2 = 17;
    this->Body->SetupAttachment(RootComponent);
    this->ExplosionEffect1->SetupAttachment(RootComponent);
    this->ExplosionEffect2->SetupAttachment(RootComponent);
}


