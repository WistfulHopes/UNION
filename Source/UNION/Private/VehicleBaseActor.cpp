#include "VehicleBaseActor.h"
#include "UnionCombineDescendantBoundsComponent.h"
#include "MachineEffectComponent.h"
#include "MachineEngineSoundComponent.h"
#include "MachineMaterialComponent.h"
#include "MachineSoundComponent.h"
#include "MachineSurfaceEffectComponent.h"

AVehicleBaseActor::AVehicleBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionCombineDescendantBoundsComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->MachineSoundComponent = CreateDefaultSubobject<UMachineSoundComponent>(TEXT("Sound"));
    this->MachineEngineSoundComponent = CreateDefaultSubobject<UMachineEngineSoundComponent>(TEXT("EngineSound"));
    this->MachineEffectComponent = CreateDefaultSubobject<UMachineEffectComponent>(TEXT("Effect"));
    this->MachineSurfaceEffectComponent = CreateDefaultSubobject<UMachineSurfaceEffectComponent>(TEXT("SurfaceEffect"));
    this->MachineMaterialComponent = CreateDefaultSubobject<UMachineMaterialComponent>(TEXT("Material"));
    this->VehicleRearPartsClass = NULL;
    this->RacerMaterialParameters = NULL;
    this->MachineMaterialParameters = NULL;
    this->bInViewer = false;
    this->FrontEngineSound = NULL;
    this->RearEngineSound = NULL;
    this->VehicleRearPartsActor = NULL;
}

void AVehicleBaseActor::VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value) {
}

void AVehicleBaseActor::VehicleModelEventItemId(const int32& EventId, const EItemId& Value, const int32& IntValue, const EItemThrowDirection& ThrowType, const bool bGadgetLuckyItem) {
}

void AVehicleBaseActor::VehicleModelEventInt(const int32& EventId, const int32& Value) {
}

void AVehicleBaseActor::VehicleModelEventAttackedInfo(const int32& EventId, const FAttackedInfo& Value) {
}

void AVehicleBaseActor::TurnOnEngine() {
}

void AVehicleBaseActor::TurnOffEngine() {
}

void AVehicleBaseActor::StopMaterialAnimation(EVehicleMaterialAnimationType MaterialAnimationType, bool bReset) {
}

void AVehicleBaseActor::SetVectorParameterValue(FName ParameterName, FLinearColor Value) {
}

void AVehicleBaseActor::SetScalarParameterValue(FName ParameterName, float Value) {
}

void AVehicleBaseActor::SetForcedLod(int32 NewForcedLodModel) {
}

void AVehicleBaseActor::SetForceDisableWheelPosUpdate(const bool bDisable) {
}

void AVehicleBaseActor::SetDriftIntensity(int32 ChargeLevel, float Intensity) {
}

void AVehicleBaseActor::SetDamageIntensity(float Intensity) {
}

void AVehicleBaseActor::ResetSpecialStatus() {
}

void AVehicleBaseActor::ReleaseAllEffect() {
}

void AVehicleBaseActor::PlayMaterialAnimation(EVehicleMaterialAnimationType MaterialAnimationType, float StartTime, bool bAutoDeactive) {
}

bool AVehicleBaseActor::IsPlayingAnimation() const {
    return false;
}

bool AVehicleBaseActor::IsLocalPlayer() const {
    return false;
}

bool AVehicleBaseActor::IsInRace() const {
    return false;
}

bool AVehicleBaseActor::IsInDriving() const {
    return false;
}

bool AVehicleBaseActor::IsInBodyCut() const {
    return false;
}

bool AVehicleBaseActor::IsHoverboard() const {
    return false;
}

bool AVehicleBaseActor::IsEqualMachineForm_PrevCur() {
    return false;
}

void AVehicleBaseActor::EndAnimation() {
}

void AVehicleBaseActor::DamageOn() {
}

void AVehicleBaseActor::DamageOff() {
}

void AVehicleBaseActor::ChangeVehicleType(EVehicleType NewVehicleType) {
}

void AVehicleBaseActor::BeginAnimation() {
}


