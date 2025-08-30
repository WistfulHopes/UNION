#include "GimmickRotationWater.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "ECourseObjColType.h"
#include "GimmickStaticBodyComponent.h"

AGimmickRotationWater::AGimmickRotationWater(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->ColType = ECourseObjColType::PostEffectCollision;
    this->_DamageType = RacerDamageType::Non;
    this->_StaticMeshComponent = (UUnionStaticMeshComponent*)RootComponent;
    this->_GimmickStaticBodyComponent = CreateDefaultSubobject<UGimmickStaticBodyComponent>(TEXT("GimmickStaticBodyComponent"));
    this->_AtomComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("AtomComponent"));
    this->_bIsInitialized = false;
    this->_AtomComponent->SetupAttachment(RootComponent);
    this->_GimmickStaticBodyComponent->SetupAttachment(RootComponent);
}


