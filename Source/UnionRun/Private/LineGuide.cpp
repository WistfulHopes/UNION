#include "LineGuide.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

ALineGuide::ALineGuide(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HierarchicalInstancedStaticMeshComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HierarchicalInstancedStaticMesh"));
    this->ZOffset = 100.00f;
    this->NumVisible = 100;
    this->IntervalFrames = 8;
    this->MinDistance = 50.00f;
    this->DataTable = NULL;
    this->DataAsset = NULL;
}


