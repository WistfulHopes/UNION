#include "GimmickTentacle.h"
#include "UnionVATMeshComponent.h"

AGimmickTentacle::AGimmickTentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VATMeshComponent = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("VATMeshComponent"));
    this->m_IdleEndFrame = -1;
    this->m_MoveEndFrame = -1;
}


