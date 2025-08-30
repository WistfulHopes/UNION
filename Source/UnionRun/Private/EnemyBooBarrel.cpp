#include "EnemyBooBarrel.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ERandomObjType.h"
#include "StaticBodyComponent.h"

AEnemyBooBarrel::AEnemyBooBarrel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->RandomObjType = ERandomObjType::KrakenCommon;
    this->ComAvoid = true;
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("UStaticBodyComponent"));
    this->NiagaraExplosion = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraExplosion"));
    this->NiagaraBounce = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraBounce"));
    this->RotSpeed = -10.00f;
    this->IsCourseObject = false;
    this->NiagaraBounce->SetupAttachment(RootComponent);
    this->NiagaraExplosion->SetupAttachment(RootComponent);
    this->StaticBodyComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}


