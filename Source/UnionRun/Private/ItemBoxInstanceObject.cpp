#include "ItemBoxInstanceObject.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"

AItemBoxInstanceObject::AItemBoxInstanceObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_domainNumber = EDomainNumber::DomainNumber0;
    this->m_hismNormal = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Normal"));
    this->m_hismDouble = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Double"));
    this->m_hismSpecail = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Special"));
    this->m_hismIrregular = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Irregular"));
    this->m_hismShadow = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Shadow"));
    this->m_hismNormalTT = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_NormalTT"));
    this->m_hismDoubleTT = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_DoubleTT"));
    this->m_hismSpecailTT = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_SpecialTT"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
}


