#include "Driver.h"
#include "MaterialPlayerComponent.h"
#include "CustomAttrAnimComponent.h"
#include "ItemHolderComponent.h"

ADriver::ADriver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterMesh = NULL;
    this->CustomAttrAnimComponent = CreateDefaultSubobject<UCustomAttrAnimComponent>(TEXT("CustomAttrAnimation"));
    this->MaterialPlayerComponent = CreateDefaultSubobject<UMaterialPlayerComponent>(TEXT("MaterialPlayer"));
    this->RacerMaterialParameters = NULL;
    this->FreshlyPaintColor = NULL;
    this->ItemHolderComponent = CreateDefaultSubobject<UItemHolderComponent>(TEXT("ItemHolderComponent"));
    this->SteeringWheelMesh = NULL;
    this->FurComponent = NULL;
    this->UnionAtomComponent = NULL;
    this->bCanMontageAnimOnDrifting = false;
}

void ADriver::SwapMaterials(const EDriverMaterialType Type) {
}

void ADriver::SetVisibleSteeringWheel(const bool Visible) {
}

void ADriver::SetVectorParameterValue(FName ParameterName, FLinearColor Value) {
}

void ADriver::SetUseInRace(const bool Enabled) {
}

void ADriver::SetupGFurComponent(UMeshComponent* NewFurComponent) {
}

void ADriver::SetSteeringWheelSurface(EMachineColorArea ColorArea, int32 SurfaceNo) {
}

void ADriver::SetSteeringWheelPresetColor(EMachineColorPresetId ColorPresetId) {
}

void ADriver::SetSteeringWheelMaterials(const FUserMachineCustomizeData& MachineCustomizeData) {
}

void ADriver::SetSteeringWheelColor(EMachineColorArea ColorArea, int32 ColorNo) {
}

void ADriver::SetScalarParameterValue(FName ParameterName, float Value) {
}

void ADriver::SetRacerIndex(const int32 InRacerIndex) {
}

void ADriver::SetOverlayMaterial(UMaterialInterface* NewOverlayMaterial) {
}

void ADriver::SetOnlyOwnerSee(bool bNewOnlyOwnerSee) {
}

void ADriver::SetLightingChannels_Implementation(bool Channel0, bool Channel1, bool Channel2) {
}

void ADriver::SetHandleMeshForcedLOD(int32 InNewForcedLOD) {
}

void ADriver::SetGhostMaterialDynamic(UMaterialInstanceDynamic* GhostMaterial) {
}

void ADriver::SetGhostMaterial(UMaterialInterface* GhostMaterial) {
}

void ADriver::RegisterRacerEvent_Implementation(const int32& InRacerIndex) {
}

bool ADriver::IsUseInRace() {
    return false;
}

void ADriver::InvokeRacerEvent(const EUnionRacerEvent InEvent, const int32 InParam) {
}

int32 ADriver::GetRacerIndex() const {
    return 0;
}

EDriverPose ADriver::GetDriverPose() const {
    return EDriverPose::Car;
}

void ADriver::CreateSteeringWheelDynamicMaterialInstance() {
}


