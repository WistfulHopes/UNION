#include "GimmickTestObject.h"
#include "Components/SceneComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"
#include "StaticBodyComponent.h"

AGimmickTestObject::AGimmickTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->bIsDamage = true;
    this->DamageType = RacerDamageType::EnemyMedium;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StaticBodyComponent = CreateDefaultSubobject<UStaticBodyComponent>(TEXT("StaticBody"));
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->StaticBodyComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}


