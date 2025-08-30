#include "GimmickMagmaDrop.h"
#include "Components/SceneComponent.h"
#include "UnionAtomComponent.h"
#include "UnionStaticMeshComponent.h"
#include "UnionVATMeshComponent.h"
#include "ERandomObjType.h"
#include "StaticBodyComponent.h"

AGimmickMagmaDrop::AGimmickMagmaDrop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->RandomObjType = ERandomObjType::MagmaDrop;
    this->bIsVioletVoidTarget = true;
    this->m_dropRootVATMesh = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("DropRootVATMesh"));
    this->m_dropLocator = CreateDefaultSubobject<USceneComponent>(TEXT("DropMovementLocator"));
    this->m_dropVATMesh = CreateDefaultSubobject<UUnionVATMeshComponent>(TEXT("DropVATMesh"));
    this->m_dropBody = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("DropBody"));
    this->m_puddleRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PuddleRoot"));
    this->m_puddleMesh = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("PuddleMesh"));
    this->m_puddleBody = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("PuddleBody"));
    this->m_dropSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("DropSound"));
    this->m_collisionSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("CollisionSound"));
    this->m_ignorePuddle = false;
    this->m_initialDelay = 0.00f;
    this->m_dropInterval = 4.00f;
    this->m_dropSpeed = 1.00f;
    this->m_puddleLifeTime = 2.00f;
    this->m_damageType = RacerDamageType::EnemyMedium;
    this->m_searchPuddlePointDistanceLimit = 15000.00f;
    this->m_ignorePuddleDropDistance = 15000.00f;
    this->m_puddleEmissiveStrengthMin = 0.00f;
    this->m_puddleEmissiveStrengthTimeToMin = 0.17f;
    this->m_puddleEmissiveStrengthMax = 4.00f;
    this->m_puddleEmissiveStrengthTimeToMax = 0.00f;
    this->m_dropEmissiveValue = 8.00f;
    this->m_dropEmissiveChangeTime = 0.30f;
    this->m_dropEmissiveKeepTime = 0.10f;
    this->m_dropEmissiveRevertTime = 1.00f;
    this->m_beforeDropEmissiveWithRoot = true;
    this->m_icicleBaseAnimTime = 13.00f;
    this->m_dropedFrame = 296;
    this->m_debugSearchPuddlePointEvery = false;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->m_collisionSound->SetupAttachment(RootComponent);
    this->m_dropBody->SetupAttachment(m_dropLocator);
    this->m_dropLocator->SetupAttachment(m_dropRootVATMesh);
    this->m_dropRootVATMesh->SetupAttachment(RootComponent);
    this->m_dropSound->SetupAttachment(RootComponent);
    this->m_dropVATMesh->SetupAttachment(m_dropLocator);
    this->m_puddleBody->SetupAttachment(m_puddleRoot);
    this->m_puddleMesh->SetupAttachment(m_puddleRoot);
    this->m_puddleRoot->SetupAttachment(RootComponent);
}


