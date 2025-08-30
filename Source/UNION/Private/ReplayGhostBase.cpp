#include "ReplayGhostBase.h"
#include "Components/StaticMeshComponent.h"
#include "UnionCombineDescendantBoundsComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "MachineEffectComponent.h"
#include "MachineEngineSoundComponent.h"
#include "MachineSoundComponent.h"

AReplayGhostBase::AReplayGhostBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionCombineDescendantBoundsComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->MachineSoundComponent = CreateDefaultSubobject<UMachineSoundComponent>(TEXT("Sound"));
    this->MachineEngineSoundComponent = CreateDefaultSubobject<UMachineEngineSoundComponent>(TEXT("EngineSound"));
    this->MachineEffectComponent = CreateDefaultSubobject<UMachineEffectComponent>(TEXT("Effect"));
    this->MachineSurfaceEffectComponent = NULL;
    this->MachineMaterialComponent = NULL;
    this->VehicleRearPartsClass = NULL;
    this->RacerMaterialParameters = NULL;
    this->MachineMaterialParameters = NULL;
    this->bInViewer = false;
    this->DriverSkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("DriverCharacter"));
    this->DriverStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SteeringWheel"));
    this->FrontEngineSound = NULL;
    this->RearEngineSound = NULL;
    this->VehicleRearPartsActor = NULL;
    this->AnimSequenceAssets[0] = NULL;
    this->AnimSequenceAssets[1] = NULL;
    this->AnimSequenceAssets[2] = NULL;
    this->AnimSequenceAssets[3] = NULL;
    this->DriverSkeletalMeshComponent->SetupAttachment(RootComponent);
    this->DriverStaticMeshComponent->SetupAttachment(DriverSkeletalMeshComponent);
}

void AReplayGhostBase::VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value) {
}

void AReplayGhostBase::VehicleModelEventItemId(const int32& EventId, const EItemId& Value, const int32& IntValue, const EItemThrowDirection& ThrowType, const bool bGadgetLuckyItem) {
}

void AReplayGhostBase::VehicleModelEventInt(const int32& EventId, const int32& Value) {
}

void AReplayGhostBase::VehicleModelEventAttackedInfo(const int32& EventId, const FAttackedInfo& Value) {
}

void AReplayGhostBase::TurnOnEngine() {
}

void AReplayGhostBase::TurnOffEngine() {
}

void AReplayGhostBase::StopMaterialAnimation(EVehicleMaterialAnimationType MaterialAnimationType, bool bReset) {
}

void AReplayGhostBase::SetVectorParameterValue(FName ParameterName, FLinearColor Value) {
}

void AReplayGhostBase::SetScalarParameterValue(FName ParameterName, float Value) {
}

void AReplayGhostBase::SetForceDisableWheelPosUpdate(const bool bDisable) {
}

void AReplayGhostBase::SetDriftIntensity(int32 ChargeLevel, float Intensity) {
}

void AReplayGhostBase::SetDamageIntensity(float Intensity) {
}

void AReplayGhostBase::ResetSpecialStatus() {
}

void AReplayGhostBase::ReleaseAllEffect() {
}

void AReplayGhostBase::PlayMaterialAnimation(EVehicleMaterialAnimationType MaterialAnimationType, float StartTime, bool bAutoDeactive) {
}

bool AReplayGhostBase::IsPlayingAnimation() const {
    return false;
}

bool AReplayGhostBase::IsLocalPlayer() const {
    return false;
}

bool AReplayGhostBase::IsInRace() const {
    return false;
}

bool AReplayGhostBase::IsInDriving() const {
    return false;
}

bool AReplayGhostBase::IsInBodyCut() const {
    return false;
}

bool AReplayGhostBase::IsHoverboard() const {
    return false;
}

void AReplayGhostBase::EndAnimation() {
}

void AReplayGhostBase::DamageOn() {
}

void AReplayGhostBase::DamageOff() {
}

void AReplayGhostBase::ChangeVehicleType(EVehicleType NewVehicleType) {
}

void AReplayGhostBase::BeginAnimation() {
}


