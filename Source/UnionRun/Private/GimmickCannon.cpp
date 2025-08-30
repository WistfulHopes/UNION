#include "GimmickCannon.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "UnionStaticMeshComponent.h"
#include "GimmickStaticBodyComponent.h"
#include "StaticBodyComponent.h"

AGimmickCannon::AGimmickCannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->JumpStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("JumpStaticComponent"));
    this->EffectStaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("EffectStaticBodyComponent"));
    this->CannonStaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("CannonStaticMeshComponent"));
    this->NiagaraCannonFire = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraCannonFire"));
    this->CannonStaticMeshComponent->SetupAttachment(RootComponent);
    this->EffectStaticBodyComponent->SetupAttachment(RootComponent);
    this->JumpStaticBodyComponent->SetupAttachment(RootComponent);
    this->NiagaraCannonFire->SetupAttachment(RootComponent);
}


