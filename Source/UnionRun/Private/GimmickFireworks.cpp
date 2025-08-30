#include "GimmickFireworks.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "UnionAtomComponent.h"

AGimmickFireworks::AGimmickFireworks(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_niagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->AtomComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("AtomComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StartDelayTime = 0.00f;
    this->NXIgnore = false;
    this->AtomComponent->SetupAttachment(RootComponent);
    this->m_niagaraComponent->SetupAttachment(RootComponent);
}


