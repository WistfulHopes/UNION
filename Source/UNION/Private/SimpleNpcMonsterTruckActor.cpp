#include "SimpleNpcMonsterTruckActor.h"
#include "UnionStaticMeshComponent.h"

ASimpleNpcMonsterTruckActor::ASimpleNpcMonsterTruckActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("NPC Mesh"));
    this->SimpleNpcDataTable = NULL;
    this->DummyMaterialInterface = NULL;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void ASimpleNpcMonsterTruckActor::SetupEngineSound(const EMachineId InMachineID) {
}

void ASimpleNpcMonsterTruckActor::SetupEffectData(const EMachineId InMachineID) {
}

void ASimpleNpcMonsterTruckActor::SetTireSurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void ASimpleNpcMonsterTruckActor::SetTireGlowColor(int32 GlowNo) {
}

void ASimpleNpcMonsterTruckActor::SetTireColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

void ASimpleNpcMonsterTruckActor::SetPresetColor(EMachineColorPresetId ColorPresetId) {
}

void ASimpleNpcMonsterTruckActor::SetCustomColor(const FUserMachineCustomizeData& MachineCustomizeData) {
}

void ASimpleNpcMonsterTruckActor::SetCockpitSurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void ASimpleNpcMonsterTruckActor::SetCockpitColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

void ASimpleNpcMonsterTruckActor::SetBodySurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void ASimpleNpcMonsterTruckActor::SetBodyGlowColor(int32 GlowNo) {
}

void ASimpleNpcMonsterTruckActor::SetBodyColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

void ASimpleNpcMonsterTruckActor::OnCountDown_Implementation(bool bIsPlay, const FLinearColor& Color, bool bWithDriver) {
}


