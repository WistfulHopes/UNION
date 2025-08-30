#include "GimmickDisplayShip.h"
#include "UnionStaticMeshComponent.h"

AGimmickDisplayShip::AGimmickDisplayShip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodyStatickMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MainStatickMeshComponent"));
}


