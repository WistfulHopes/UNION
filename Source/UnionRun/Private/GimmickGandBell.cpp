#include "GimmickGandBell.h"
#include "UnionAtomComponent.h"
#include "UnionVATMeshComponent.h"
#include "GimmickStaticBodyComponent.h"

AGimmickGandBell::AGimmickGandBell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoveTime = 1.50f;
    this->BodyStatickMeshComponent = NULL;
    this->BellVatMeshComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("BellVatMesh"));
    this->MainStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("MainBellBody"));
    this->HitSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("HitSE"));
    this->HitSoundComponent->SetupAttachment(BellVatMeshComponent);
    this->MainStaticBodyComponent->SetupAttachment(BellVatMeshComponent);
}



