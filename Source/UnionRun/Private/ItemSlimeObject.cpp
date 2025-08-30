#include "ItemSlimeObject.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"

AItemSlimeObject::AItemSlimeObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->RingRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RingRoot"));
    this->ChildActorRing = CreateDefaultSubobject<UChildActorComponent>(TEXT("RingActor"));
    this->MeshSlime = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MeshSlime"));
    this->AppearCurve = NULL;
    this->AppearTime = 0.50f;
    this->SlimeMoveTime = 0.50f;
    this->DisappearTime = 0.20f;
    this->bAllowHitSelf = false;
    this->ChildActorRing->SetupAttachment(RingRoot);
    this->MeshSlime->SetupAttachment(RingRoot);
    this->RingRoot->SetupAttachment(RootComponent);
}


