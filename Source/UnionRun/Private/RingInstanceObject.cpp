#include "RingInstanceObject.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"

ARingInstanceObject::ARingInstanceObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_hismDomain0 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Domain0"));
    this->m_hismDomain1 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Domain1"));
    this->m_hismDomain2 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Domain2"));
    this->m_hismDomain3 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Domain3"));
    this->m_hismDroppedRings = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_DroppedRings"));
    this->m_hismOmochaoRings = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_OmochaoRings"));
    this->m_hismSubDomain0 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Sub_Domain0"));
    this->m_hismSubDomain1 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Sub_Domain1"));
    this->m_hismSubDomain2 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Sub_Domain2"));
    this->m_hismSubDomain3 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Sub_Domain3"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
}


