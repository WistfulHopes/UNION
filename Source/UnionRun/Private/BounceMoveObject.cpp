#include "BounceMoveObject.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"
#include "UnionBounceMoveComponent.h"

ABounceMoveObject::ABounceMoveObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->GimmickContactType = EGimmickContactType::InvincibleBreakAndSendDamage;
    this->BounceComponent = CreateDefaultSubobject<UUnionBounceMoveComponent>(TEXT("BounceComponent"));
    this->Body = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBody"));
    this->LoopSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("LoopSound"));
    this->BounceSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("BounceSound"));
    this->LoopEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LoopEffect"));
    this->AllowBounce = 0;
    this->DamageType = RacerDamageType::Non;
    this->StopLoopSoundOnBounce = false;
    this->StopLoopEffectOnBounce = false;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->Body->SetupAttachment(RootComponent);
    this->BounceSound->SetupAttachment(RootComponent);
    this->LoopEffect->SetupAttachment(RootComponent);
    this->LoopSound->SetupAttachment(RootComponent);
}

void ABounceMoveObject::OnFinishedBounce() {
}


