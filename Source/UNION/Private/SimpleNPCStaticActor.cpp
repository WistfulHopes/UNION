#include "SimpleNPCStaticActor.h"
#include "UnionStaticMeshComponent.h"

ASimpleNPCStaticActor::ASimpleNPCStaticActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("NPC Mesh"));
    this->SimpleNpcDataTable = NULL;
    this->HoverboardMaterialParameters = NULL;
    this->bIsSpinning = false;
    this->DummyMaterialInterface = NULL;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void ASimpleNPCStaticActor::UpdateDamageSpinRotation(float SpinRate) {
}

void ASimpleNPCStaticActor::SetupEngineSound(const EMachineId InMachineID) {
}

void ASimpleNPCStaticActor::SetupEffectData(const EMachineId InMachineID) {
}

void ASimpleNPCStaticActor::SetTireSurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void ASimpleNPCStaticActor::SetTireGlowColor(int32 GlowNo) {
}

void ASimpleNPCStaticActor::SetTireColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

void ASimpleNPCStaticActor::SetCustomColor(const FUserMachineCustomizeData& MachineCustomizeData) {
}

void ASimpleNPCStaticActor::SetCockpitSurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void ASimpleNPCStaticActor::SetCockpitColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

void ASimpleNPCStaticActor::SetBodySurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void ASimpleNPCStaticActor::SetBodyGlowColor(int32 GlowNo) {
}

void ASimpleNPCStaticActor::SetBodyColor(EMachineColorArea ColorArea, int32 ColorNo) {
}



