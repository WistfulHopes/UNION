#include "OneDirectionActor.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"

AOneDirectionActor::AOneDirectionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MeshRoot"));
    this->InstancedMesh = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Instanced"));
    this->ArrowInterval = 300.00f;
    this->InstancedMesh->SetupAttachment(MeshRoot);
}


