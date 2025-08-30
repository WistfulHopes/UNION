#include "VehicleRearPartsActor.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"

AVehicleRearPartsActor::AVehicleRearPartsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CockpitMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("Cockpit"));
    this->RearMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Rear"));
    this->TireMeshComponents.AddDefaulted(2);
    this->BoatMeshComponents.AddDefaulted(2);
    this->FlightMeshComponents.AddDefaulted(2);
    this->LocationCurve = NULL;
    this->RotationCurve = NULL;
    this->ScaleCurve = NULL;
    this->CutoffTime = 1.00f;
    this->CutoffScale = 0.00f;
}

void AVehicleRearPartsActor::SetLightingChannels(bool Channel0, bool Channel1, bool Channel2) {
}

void AVehicleRearPartsActor::ChangeVehicleType(EVehicleType NewVehicleType) {
}


