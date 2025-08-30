#include "GimmickDragonHead.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"

AGimmickDragonHead::AGimmickDragonHead(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotateSpeed = 3.00f;
    this->RotateMax = 16.50f;
    this->OpenSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("DarkChaoSE"));
    this->HeadMesh = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("UpperJaw"));
    this->HeadMeshJaw = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Jaw"));
    this->HeadMeshJaw->SetupAttachment(HeadMesh);
    this->OpenSoundComponent->SetupAttachment(HeadMesh);
}


