#include "GimmickFracturedRock.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "UnionStaticMeshComponent.h"

AGimmickFracturedRock::AGimmickFracturedRock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_staticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->m_niagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->m_animationEndFrame = 150.00f;
    this->m_animationSpeed_fps = 60.00f;
    this->m_meshHiddenTimer = 0.10f;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->m_niagaraComponent->SetupAttachment(RootComponent);
    this->m_staticMeshComponent->SetupAttachment(RootComponent);
}



