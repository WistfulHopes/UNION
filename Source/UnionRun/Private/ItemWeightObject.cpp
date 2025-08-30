#include "ItemWeightObject.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"

AItemWeightObject::AItemWeightObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Mesh"));
    this->Ring = CreateDefaultSubobject<UChildActorComponent>(TEXT("Ring"));
    this->ThrowRingMaxScale = 1.00f;
    this->ThrowRingAppearTime = 0.40f;
    this->ThrowRingDisappearTime = 0.40f;
    this->ThrowObjectMoveTime = 1.80f;
    this->ThrowOverDistance = 10.00f;
    this->ThrowCurve = NULL;
    this->Mesh->SetupAttachment(RootComponent);
    this->Ring->SetupAttachment(RootComponent);
}


