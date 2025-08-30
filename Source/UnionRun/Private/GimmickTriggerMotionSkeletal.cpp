#include "GimmickTriggerMotionSkeletal.h"
#include "UnionSkeletalMeshComponent.h"

AGimmickTriggerMotionSkeletal::AGimmickTriggerMotionSkeletal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->_SkeletalMeshComponent = (UUnionSkeletalMeshComponent*)RootComponent;
}


