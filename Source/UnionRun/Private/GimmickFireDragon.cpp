#include "GimmickFireDragon.h"
#include "Components/SceneComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "ERandomObjType.h"

AGimmickFireDragon::AGimmickFireDragon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->RandomObjType = ERandomObjType::FireDragon;
    this->m_skeletalMesh = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->m_bodyList.AddDefaulted(5);
    this->DamageType = RacerDamageType::EnemyMedium;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->m_skeletalMesh->SetupAttachment(RootComponent);
}


