#include "ItemVioletVoidAbsorbedObject.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"

AItemVioletVoidAbsorbedObject::AItemVioletVoidAbsorbedObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->MeshRoot = CreateDefaultSubobject<USceneComponent>(TEXT("EffectRoot"));
    this->MeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("MeshMove"));
    this->MaxPrepairMoveSpeed = 1500.00f;
    this->MaxAbsorbTime = 0.35f;
    this->MoveRotateMaxAngle = 180.00f;
    this->MinAbsorbTime = 0.15f;
    this->MoveRotateAngularSpeed = 360.00f;
    this->MeshRotateSpeed = 180.00f;
    this->MoveLocalPosZAmplitude = 300.00f;
    this->MeshComponent->SetupAttachment(MeshRoot);
    this->MeshRoot->SetupAttachment(RootComponent);
}


