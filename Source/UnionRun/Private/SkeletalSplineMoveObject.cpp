#include "SkeletalSplineMoveObject.h"
#include "UnionSkeletalMeshComponent.h"

ASkeletalSplineMoveObject::ASkeletalSplineMoveObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}


