#include "ProceduralMeshComponentEx.h"

UProceduralMeshComponentEx::UProceduralMeshComponentEx(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UProceduralMeshComponentEx::SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility) {
}

bool UProceduralMeshComponentEx::IsMeshSectionVisible(int32 SectionIndex) const {
    return false;
}

int32 UProceduralMeshComponentEx::GetNumSections() const {
    return 0;
}

void UProceduralMeshComponentEx::ClearMeshSection(int32 SectionIndex) {
}

void UProceduralMeshComponentEx::ClearAllMeshSections() {
}


