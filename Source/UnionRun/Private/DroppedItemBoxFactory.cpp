#include "DroppedItemBoxFactory.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

ADroppedItemBoxFactory::ADroppedItemBoxFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_hismNormal = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Normal"));
    this->m_hismDouble = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Double"));
    this->m_hismSpecial = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISM_Special"));
    this->MaxAliveItemBoxNum = 60;
    this->DroppedItemBoxClass = NULL;
}


