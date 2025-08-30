#include "MachineBaseActor.h"
#include "UnionAOStaticMeshComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"

AMachineBaseActor::AMachineBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CockpitMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("Cockpit"));
    this->FrontMeshComponent = CreateDefaultSubobject<UUnionAOStaticMeshComponent>(TEXT("Front"));
    this->RearMeshComponent = CreateDefaultSubobject<UUnionAOStaticMeshComponent>(TEXT("Rear"));
    this->SideMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Side"));
    this->TireMeshComponents.AddDefaulted(4);
    this->TireDataTable = NULL;
    this->CarShadowDataTable = NULL;
    this->DummyMaterialInterface = NULL;
    this->CockpitMeshComponent->SetupAttachment(RootComponent);
    this->FrontMeshComponent->SetupAttachment(CockpitMeshComponent);
    this->RearMeshComponent->SetupAttachment(CockpitMeshComponent);
    this->SideMeshComponent->SetupAttachment(CockpitMeshComponent);
}

void AMachineBaseActor::SetTireSurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void AMachineBaseActor::SetTireMesh(EMachineId MachineId) {
}

void AMachineBaseActor::SetTireGlowColor(int32 GlowNo) {
}

void AMachineBaseActor::SetTireColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

void AMachineBaseActor::SetSideMesh() {
}

void AMachineBaseActor::SetRearSticker(UTexture* StickerTexture) {
}

void AMachineBaseActor::SetRearMesh(EMachineId MachineId) {
}

void AMachineBaseActor::SetPresetColor(EMachineColorPresetId ColorPresetId) {
}

void AMachineBaseActor::SetFrontSticker(UTexture* StickerTexture) {
}

void AMachineBaseActor::SetFrontMesh(EMachineId MachineId) {
}

void AMachineBaseActor::SetCustomColor(const FUserMachineCustomizeData& MachineCustomizeData) {
}

void AMachineBaseActor::SetCockpitSurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void AMachineBaseActor::SetCockpitMesh(ECarStatusType InCarStatusType, EDriverSize DriverSize, ECockpitMode CockpitMode, bool bIsEnabledAnimation) {
}

void AMachineBaseActor::SetCockpitColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

void AMachineBaseActor::SetCheckContentReleased(bool Check) {
}

void AMachineBaseActor::SetBodySurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void AMachineBaseActor::SetBodyGlowColor(int32 GlowNo) {
}

void AMachineBaseActor::SetBodyColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

UTexture* AMachineBaseActor::GetRearSticker() const {
    return NULL;
}

UTexture* AMachineBaseActor::GetFrontSticker() const {
    return NULL;
}


