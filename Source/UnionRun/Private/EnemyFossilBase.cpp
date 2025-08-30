#include "EnemyFossilBase.h"
#include "UnionSkeletalMeshComponent.h"

AEnemyFossilBase::AEnemyFossilBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BodySkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("FossilMeshComponent"));
    this->m_isFinalLap = false;
    this->BreakSoundComponent = NULL;
}


