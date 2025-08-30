#include "JumpStand.h"
#include "Components/SceneComponent.h"
#include "UnionStaticMeshComponent.h"

AJumpStand::AJumpStand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DrawStaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("DrawStaticMeshComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->JumpStandSize = EJumpStandSize::Mesh2x2;
    this->JumpStandType = EJumpStandType::Deg5;
    this->bIsGravity = false;
    this->bIsDash = false;
    this->bUseMeshBySize = false;
    this->bNoCollision = false;
    this->bCollisionOnly = false;
    this->DrawStaticMeshComponent->SetupAttachment(RootComponent);
}


