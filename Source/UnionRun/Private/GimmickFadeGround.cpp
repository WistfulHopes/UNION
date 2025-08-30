#include "GimmickFadeGround.h"
#include "UnionStaticMeshComponent.h"

AGimmickFadeGround::AGimmickFadeGround(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_staticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
}


