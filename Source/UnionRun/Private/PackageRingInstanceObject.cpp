#include "PackageRingInstanceObject.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"

APackageRingInstanceObject::APackageRingInstanceObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_packageRingType = EPackageRingType::Num10;
    this->m_hismDomain0 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Domain0"));
    this->m_hismDomain1 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Domain1"));
    this->m_hismDomain2 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Domain2"));
    this->m_hismDomain3 = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Domain3"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
}


