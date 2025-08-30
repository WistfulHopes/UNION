#include "ItemTimeBombObject.h"
#include "UnionStaticMeshComponent.h"

AItemTimeBombObject::AItemTimeBombObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_staticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
}


