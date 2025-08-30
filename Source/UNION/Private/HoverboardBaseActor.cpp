#include "HoverboardBaseActor.h"
#include "UnionStaticMeshComponent.h"

AHoverboardBaseActor::AHoverboardBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FrontMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Front"));
    this->RearMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Rear"));
    this->CenterMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("Center"));
    this->UnitBoatStaticMeshComponents.AddDefaulted(2);
    this->UnitPlaneStaticMeshComponents.AddDefaulted(2);
    this->CenterMeshComponent->SetupAttachment(RootComponent);
    this->FrontMeshComponent->SetupAttachment(CenterMeshComponent);
    this->RearMeshComponent->SetupAttachment(CenterMeshComponent);
}

void AHoverboardBaseActor::SetRearSticker(UTexture* StickerTexture) {
}

void AHoverboardBaseActor::SetRearMesh(EMachineId MachineId) {
}

void AHoverboardBaseActor::SetPresetColor(EMachineColorPresetId ColorPresetId) {
}

void AHoverboardBaseActor::SetFrontSticker(UTexture* StickerTexture) {
}

void AHoverboardBaseActor::SetFrontMesh(EMachineId MachineId) {
}

void AHoverboardBaseActor::SetCustomColor(const FUserMachineCustomizeData& MachineCustomizeData) {
}

void AHoverboardBaseActor::SetCheckContentReleased(bool Check) {
}

void AHoverboardBaseActor::SetCenterMesh() {
}

void AHoverboardBaseActor::SetBodySurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void AHoverboardBaseActor::SetBodyGlowColor(int32 GlowNo) {
}

void AHoverboardBaseActor::SetBodyColor(EMachineColorArea ColorArea, int32 ColorNo) {
}


