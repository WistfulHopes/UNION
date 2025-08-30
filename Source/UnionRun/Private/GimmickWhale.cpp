#include "GimmickWhale.h"
#include "UnionSkeletalMeshComponent.h"

AGimmickWhale::AGimmickWhale(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsJampTwist = false;
    this->TremorHighDistance = 25.00f;
    this->TremorMiddleDistance = 50.00f;
    this->TremorLowDistance = 75.00f;
    this->SkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->AnimInstance = NULL;
}

void AGimmickWhale::StartWaveObject() {
}

void AGimmickWhale::OnTremorEvent() {
}


