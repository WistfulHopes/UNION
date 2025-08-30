#include "GimmickWave.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ECourseObjColType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickWave::AGimmickWave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->ColType = ECourseObjColType::MoveCollision;
    this->StaticMeshComponent = (UUnionStaticMeshComponent*)RootComponent;
    this->GimmickStaticBodyComponent01 = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBody01"));
    this->GimmickStaticBodyComponent02 = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBody02"));
    this->GimmickStaticBodyComponent03 = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBody03"));
    this->WaveSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("WaveSoundComponent"));
    this->GimmickStaticBodyComponent01->SetupAttachment(RootComponent);
    this->GimmickStaticBodyComponent02->SetupAttachment(RootComponent);
    this->GimmickStaticBodyComponent03->SetupAttachment(RootComponent);
    this->WaveSoundComponent->SetupAttachment(RootComponent);
}


