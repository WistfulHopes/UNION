#include "MonsterTruckInRaceActor.h"
#include "UnionSkeletalMeshComponent.h"
#include "UnionStaticMeshComponent.h"

AMonsterTruckInRaceActor::AMonsterTruckInRaceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CockpitMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("Cockpit"));
    this->UnitCarStaticMeshComponents.AddDefaulted(4);
    this->UnitBoatStaticMeshComponents.AddDefaulted(4);
    this->TireMarkComponents.AddDefaulted(4);
    this->TireMarkMaterialInterface = NULL;
    this->TireDataTable = NULL;
    this->CarShadowDataTable = NULL;
    this->DecalMeshComponent = CreateDefaultSubobject<UUnionStaticMeshComponent>(TEXT("ShadowMesh"));
    this->DecalMID = NULL;
    this->bOverrideVehicleMeshType = false;
    this->VehicleMeshTypeOverride = EVehicleMeshType::Default;
    this->CockpitMeshComponent->SetupAttachment(RootComponent);
}

void AMonsterTruckInRaceActor::SetVisibleFlightUnitMaterial(const bool bVisible) {
}

void AMonsterTruckInRaceActor::SetupMaterials() {
}

void AMonsterTruckInRaceActor::SetupCockpitMesh(const EDriverSize InDriverSize, const bool bEnabledAnimation) {
}

void AMonsterTruckInRaceActor::SetupAttachments() {
}

void AMonsterTruckInRaceActor::SetTireSurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void AMonsterTruckInRaceActor::SetTireMarkScale() {
}

void AMonsterTruckInRaceActor::SetTireGlowColor(int32 GlowNo) {
}

void AMonsterTruckInRaceActor::SetTireColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

void AMonsterTruckInRaceActor::SetPresetColor(EMachineColorPresetId ColorPresetId) {
}

void AMonsterTruckInRaceActor::SetCustomColor(const FUserMachineCustomizeData& MachineCustomizeData) {
}

void AMonsterTruckInRaceActor::SetCockpitSurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void AMonsterTruckInRaceActor::SetCockpitColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

void AMonsterTruckInRaceActor::SetCarShadow() {
}

void AMonsterTruckInRaceActor::SetBodySurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void AMonsterTruckInRaceActor::SetBodyGlowColor(int32 GlowNo) {
}

void AMonsterTruckInRaceActor::SetBodyColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

void AMonsterTruckInRaceActor::OnCountDown_Implementation(bool bIsPlay, const FLinearColor& Color, bool bWithDriver) {
}

void AMonsterTruckInRaceActor::MontageStop(EMachineAnimationMontageAssetId AssetId, float InBlendOutTime) {
}

void AMonsterTruckInRaceActor::MontagePlay(EMachineAnimationMontageAssetId AssetId, float PlayRate) {
}

void AMonsterTruckInRaceActor::MontageJumpToSection(EMachineAnimationMontageAssetId AssetId, FName SectionName) {
}

void AMonsterTruckInRaceActor::LoadingCockpitMesh_Implementation(const EDriverSize InDriverSize) {
}

void AMonsterTruckInRaceActor::LoadingCockpitAnimation_Implementation(const EDriverSize InDriverSize) {
}


