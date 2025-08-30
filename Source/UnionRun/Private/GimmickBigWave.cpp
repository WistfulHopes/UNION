#include "GimmickBigWave.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ECourseObjColType.h"
#include "EGimmickContactType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickBigWave::AGimmickBigWave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ColType = ECourseObjColType::MoveCollision;
    this->GimmickContactType = EGimmickContactType::UnBreakable;
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->MoveSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("MoveSE"));
    this->GimmickStaticBodyComponent01 = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBody01"));
    this->GimmickStaticBodyComponent02 = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBody02"));
    this->GimmickStaticBodyComponent03 = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("StaticBody03"));
    this->m_bAutoMove = false;
    this->GimmickStaticBodyComponent01->SetupAttachment(StaticMeshComponent);
    this->GimmickStaticBodyComponent02->SetupAttachment(StaticMeshComponent);
    this->GimmickStaticBodyComponent03->SetupAttachment(StaticMeshComponent);
    this->MoveSoundComponent->SetupAttachment(StaticMeshComponent);
}


