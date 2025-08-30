#include "GimmickCannonBoo.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "UnionStaticMeshComponent.h"
#include "UnionVATMeshComponent.h"

AGimmickCannonBoo::AGimmickCannonBoo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->BulletBooVATMeshComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("BulletBooVATMeshComponent"));
    this->GunnerBooVATMeshComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("GunnerBooVATMeshComponent"));
    this->CannonStaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("CannonStaticMeshComponent"));
    this->NiagaraCannon = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraCannon"));
    this->AnimStartFrame = 0;
    this->EffectSpawnFrame = 0;
    this->UseBallet = true;
    this->LoadingSoundFrame = 0;
    this->FireSoundFrame = 0;
    this->BulletBooVATMeshComponent->SetupAttachment(RootComponent);
    this->CannonStaticMeshComponent->SetupAttachment(RootComponent);
    this->GunnerBooVATMeshComponent->SetupAttachment(RootComponent);
    this->NiagaraCannon->SetupAttachment(RootComponent);
}

void AGimmickCannonBoo::OnVATFrameFunction(UUnionVATMeshComponent* VATMeshComponent, const FUnionVATSequenceInfo& SequenceInfo) {
}


