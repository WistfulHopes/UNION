#include "UnionNavMarker.h"
#include "Components/SceneComponent.h"

AUnionNavMarker::AUnionNavMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->LapType = ENavMarkerLapType::Common;
    this->Type = EUnionNavMarkerType::None;
    this->Name = TEXT("NoName");
    this->Width = 25.00f;
    this->Height = -1.00f;
    this->SplineOnPosition = 0;
    this->UseSplineLength = 0.00f;
    this->TransformRingType = ETransformRingType::Car;
    this->Index = -1;
    this->bIsInvalid = false;
    this->bIsAnother = false;
}

void AUnionNavMarker::UpdateSplineOnPosition_Implementation() {
}

void AUnionNavMarker::SetUseSplineLength(float InLength) {
}

void AUnionNavMarker::SetUseSplineActor(TSoftObjectPtr<AActor> InUseSplineActor) {
}

void AUnionNavMarker::SetType(EUnionNavMarkerType NewType) {
}

void AUnionNavMarker::SetTransformRingType(ETransformRingType TransformType) {
}

void AUnionNavMarker::SetSplineOnPosition(int32 InPosition) {
}

void AUnionNavMarker::SetLapType(ENavMarkerLapType NewType) {
}

void AUnionNavMarker::SetIsAnother(bool flag) {
}

void AUnionNavMarker::SetIndex(int32 NewIndex) {
}

bool AUnionNavMarker::IsInvalid() const {
    return false;
}

bool AUnionNavMarker::IsFinalLapOnly() {
    return false;
}

bool AUnionNavMarker::IsAnother() const {
    return false;
}

float AUnionNavMarker::GetUseSplineLength() const {
    return 0.0f;
}

TSoftObjectPtr<AActor> AUnionNavMarker::GetUseSplineActor() {
    return NULL;
}

UUnionSplineComponent* AUnionNavMarker::GetUnionSplineComponent() const {
    return NULL;
}

EUnionNavMarkerType AUnionNavMarker::GetType() const {
    return EUnionNavMarkerType::None;
}

ETransformRingType AUnionNavMarker::GetTransformRingType() const {
    return ETransformRingType::Car;
}

int32 AUnionNavMarker::GetSplineOnPosition() const {
    return 0;
}

ENavMarkerLapType AUnionNavMarker::GetLapType() const {
    return ENavMarkerLapType::Common;
}

int32 AUnionNavMarker::GetIndex() const {
    return 0;
}


