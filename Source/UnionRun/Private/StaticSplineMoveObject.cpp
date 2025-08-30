#include "StaticSplineMoveObject.h"
#include "UnionStaticMeshComponent.h"

AStaticSplineMoveObject::AStaticSplineMoveObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}


