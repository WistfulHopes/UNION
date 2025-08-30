#include "GimmickGoalglow.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"

AGimmickGoalglow::AGimmickGoalglow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_laserStaticMesh = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("UnionStaticMeshComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->m_laserStaticMesh->SetupAttachment(RootComponent);
}



