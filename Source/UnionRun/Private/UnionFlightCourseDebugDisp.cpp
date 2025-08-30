#include "UnionFlightCourseDebugDisp.h"
#include "ProceduralMeshComponent.h"

AUnionFlightCourseDebugDisp::AUnionFlightCourseDebugDisp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("CustomMesh"));
    this->SplineActor = NULL;
    this->DispMesh = (UProceduralMeshComponent*)RootComponent;
    this->CylinderSplitNum = 18;
    this->Material = NULL;
    this->bUseAssistLength = false;
    this->AssistLength = 5.00f;
}

void AUnionFlightCourseDebugDisp::UpdateDispMesh() {
}

void AUnionFlightCourseDebugDisp::SetUseAssistLength(bool flag) {
}


