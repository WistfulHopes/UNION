#include "VehicleInRacePawn.h"
#include "Camera/CameraComponent.h"
#include "Components/TimelineComponent.h"
#include "NiagaraComponent.h"
#include "AppListenerFocusPoint.h"
#include "UnionAtomComponent.h"
#include "UnionCombineDescendantBoundsComponent.h"
#include "MachineAuraEffectComponent.h"
#include "MachineGadgetActionComponent.h"

AVehicleInRacePawn::AVehicleInRacePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUnionCombineDescendantBoundsComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->TeamRubberBandMesh = NULL;
    this->GhostRoadEffectForwardOffsetScale = 100.00f;
    this->TPCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->CameraObstructEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("CameraObstructEffect"));
    this->CameraObstructSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("CameraObstructSound"));
    this->CameraObstructInputSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("CameraObstructInputSound"));
    this->RaceCameraActor = NULL;
    this->ListenerFocusPoint = CreateDefaultSubobject<UAppListenerFocusPoint>(TEXT("ListenerFocusPoint"));
    this->UnionRacerStatusObject = NULL;
    this->MachineClass = NULL;
    this->SimpleNpcSkeletalMachineClass = NULL;
    this->SimpleNpcStaticMachineClass = NULL;
    this->HoverboadClass = NULL;
    this->MonsterTruckClass = NULL;
    this->SimpleNpcMonsterTruckClass = NULL;
    this->YellowDrillClass = NULL;
    this->DroneClass = NULL;
    this->RecoverRingExitClass = NULL;
    this->FootcutWarpRingPerformanceClass = NULL;
    this->ItemSlimePerformanceClass = NULL;
    this->ItemDarkChaoPerformanceClass = NULL;
    this->ItemWarpPerformaceClass = NULL;
    this->ItemWeightPerformaceClass = NULL;
    this->BehaviorParameter = NULL;
    this->CameraObstructEffectParam = NULL;
    this->ItemCountDownAnimCurve = NULL;
    this->CameraEffectDisappearCurve = NULL;
    this->MachineGadgetAction = CreateDefaultSubobject<UMachineGadgetActionComponent>(TEXT("MachineGadgetAction"));
    this->MachineAuraEffect = CreateDefaultSubobject<UMachineAuraEffectComponent>(TEXT("MachineAuraEffect"));
    this->MachineHornComponentClass = NULL;
    this->MachineHornComponent = NULL;
    this->GhostMaterialInterface = NULL;
    this->GhostMaterialInterfaceDynamic = NULL;
    this->VehicleActor = NULL;
    this->MonsterTruckActor = NULL;
    this->YellowDrillActor = NULL;
    this->DriverActor = NULL;
    this->DroneActor = NULL;
    this->RecoverRingExitActor = NULL;
    this->CameraModifierPostEffect = NULL;
    this->AudioListenerOverride = NULL;
    this->TeamRubberBandComponents[0] = NULL;
    this->TeamRubberBandComponents[1] = NULL;
    this->TeamRubberBandComponents[2] = NULL;
    this->TeamRubberBandComponents[3] = NULL;
    this->TeamRubberBandComponents[4] = NULL;
    this->TeamRubberBandComponents[5] = NULL;
    this->GhostRoadEffectMeshComponent = NULL;
    this->GhostRoadEffectMID = NULL;
    this->CameraEffectTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CameraEffectTimeline"));
    this->bUseSimpleSkeletalMeshMachineNPC = false;
    this->bUseSimpleSkeletalMeshMachineLocalPlayer = false;
    this->bUseSimpleStaticMeshMachineNPC = false;
    this->bUseSimpleStaticMeshMachineLocalPlayer = false;
    this->bEnableRainbowEffect = false;
    this->DummyMaterialInterface = NULL;
    this->CameraObstructEffect->SetupAttachment(TPCameraComponent);
    this->ListenerFocusPoint->SetupAttachment(TPCameraComponent);
    this->TPCameraComponent->SetupAttachment(RootComponent);
}

void AVehicleInRacePawn::VehicleModelEventSpecialStatus(const int32& EventId, const EVehicleSpecialStatusType& Value) {
}

void AVehicleInRacePawn::VehicleModelEventItemId(const int32& EventId, const EItemId& Value, const int32& IntValue, const EItemThrowDirection& ThrowType, const bool bGadgetLuckyItem) {
}

void AVehicleInRacePawn::VehicleModelEventInt(const int32& EventId, const int32& Value) {
}

void AVehicleInRacePawn::VehicleModelEventFloat(const int32& EventId, const float& Value) {
}

void AVehicleInRacePawn::VehicleModelEventAttackedInfo(const int32& EventId, const FAttackedInfo& Value) {
}

void AVehicleInRacePawn::StartHiddenNoUpdate() {
}


void AVehicleInRacePawn::SetVectorParameterValue(FName ParameterName, FLinearColor Value, bool bWithDriver) {
}

void AVehicleInRacePawn::SetTPCameraComponent(UCameraComponent* NewCameraComponent) {
}

void AVehicleInRacePawn::SetScalarParameterValue(FName ParameterName, float Value, bool bWithDriver) {
}

void AVehicleInRacePawn::SetRacerStatusObject_Implementation(UUnionRacerStatusObject* NewUnionRacerStatusObject) {
}

void AVehicleInRacePawn::SetRacerIndex_Implementation(const int32& NewIndex) {
}

void AVehicleInRacePawn::SetOverwriteModelTransform(bool bEnable, FTransform Transform) {
}


void AVehicleInRacePawn::SetForceCameraAttach(bool bNewFlag) {
}

void AVehicleInRacePawn::SetEnableCameraPostEffect(EUnionCameraModifierPostEffectType EffectType, bool bEnable) {
}

void AVehicleInRacePawn::SetDriverActor(ADriver* InDriverActor) {
}

void AVehicleInRacePawn::SetCameraPostEffectParameter(EUnionCameraModifierPostEffectType EffectType, FName ParameterName, float Value) {
}

void AVehicleInRacePawn::SetCameraEffectParameter(float BoostIntensity, float HispeedIntensity) {
}

void AVehicleInRacePawn::ResetVehicleDefaultAttachments() {
}

void AVehicleInRacePawn::ResetSpecialStatus() {
}


void AVehicleInRacePawn::OnRainbowBlinkStart_Implementation(bool bWithDriver) {
}

void AVehicleInRacePawn::OnRainbowBlinkEnd_Implementation(bool bWithDriver) {
}







void AVehicleInRacePawn::OnBlinkStart_Implementation(const FLinearColor& Color, bool bWithDriver) {
}

void AVehicleInRacePawn::OnBlinkEnd_Implementation(bool bWithDriver) {
}

void AVehicleInRacePawn::NoticeSpecialStatusEvent(const int32& EventId, const EVehicleSpecialStatusType Value) {
}

bool AVehicleInRacePawn::IsVisibleTireMark() const {
    return false;
}

bool AVehicleInRacePawn::IsVisibleSurfaceEffect() const {
    return false;
}

bool AVehicleInRacePawn::IsVisibleEffect() const {
    return false;
}

bool AVehicleInRacePawn::IsVisibleDriftEffect() const {
    return false;
}

bool AVehicleInRacePawn::IsSpawnDriverActor() const {
    return false;
}

bool AVehicleInRacePawn::IsInShield() const {
    return false;
}

bool AVehicleInRacePawn::IsInRingMax() const {
    return false;
}

bool AVehicleInRacePawn::IsInRace() const {
    return false;
}

bool AVehicleInRacePawn::IsInFreshlyPaint() const {
    return false;
}

bool AVehicleInRacePawn::IsInDriving() const {
    return false;
}

bool AVehicleInRacePawn::IsInBodyCut() const {
    return false;
}

bool AVehicleInRacePawn::IsEnableSound() const {
    return false;
}

EVehicleType AVehicleInRacePawn::GetVehicleType() const {
    return EVehicleType::VehicleTypeCar;
}

EVehicleMeshType AVehicleInRacePawn::GetVehicleMeshType() const {
    return EVehicleMeshType::Default;
}

FUnionVehicleRaceInput AVehicleInRacePawn::GetVehicleInput() {
    return FUnionVehicleRaceInput{};
}

EVehicleDisplayMode AVehicleInRacePawn::GetVehicleDisplayMode() const {
    return EVehicleDisplayMode::Nomal;
}

UUnionVehicleModelInfo* AVehicleInRacePawn::GetUnionVehicleModelInfo() {
    return NULL;
}

UUnionRacerStatusObject* AVehicleInRacePawn::GetUnionRacerStatusObject() {
    return NULL;
}

float AVehicleInRacePawn::GetTrickSpeedRate() const {
    return 0.0f;
}

UCameraComponent* AVehicleInRacePawn::GetTPCameraComponentRef() {
    return NULL;
}

int32 AVehicleInRacePawn::GetRacerIndex_Implementation() const {
    return 0;
}

ERaceInfoStateType AVehicleInRacePawn::GetRaceInfoState() const {
    return ERaceInfoStateType::Idle;
}

int32 AVehicleInRacePawn::GetPlayerControllerIndex() const {
    return 0;
}

UMaterialInstanceDynamic* AVehicleInRacePawn::GetOverlayMaterial(EMachineOverlayMaterialType OverlayMaterialType) const {
    return NULL;
}

int32 AVehicleInRacePawn::GetLocalPlayerCount() const {
    return 0;
}

bool AVehicleInRacePawn::GetIsVehicleChanging() const {
    return false;
}

EDriverSize AVehicleInRacePawn::GetDriverSize() const {
    return EDriverSize::S;
}

USkeletalMeshComponent* AVehicleInRacePawn::GetDriverMeshComponent() {
    return NULL;
}

ADriver* AVehicleInRacePawn::GetDriverActor() {
    return NULL;
}

AVehicleBaseActor* AVehicleInRacePawn::GetActiveVehicle() {
    return NULL;
}

void AVehicleInRacePawn::EndRacePerformanceState() {
}

void AVehicleInRacePawn::DeactivateCamera() {
}

void AVehicleInRacePawn::ChangeVehicleTypeGyroSetting(EVehicleType NewVehicleType) {
}

void AVehicleInRacePawn::ChangeVehicleType(EVehicleType NewVehicleType) {
}


void AVehicleInRacePawn::ChangeVehicleDisplayMode(EVehicleDisplayMode NewVehicleDisplayMode) {
}

void AVehicleInRacePawn::CameraEffectTimelineStepFunction(float Value) {
}

void AVehicleInRacePawn::CameraEffectTimelineFinishFunction() {
}

bool AVehicleInRacePawn::CalculateStartTransform(FTransform& OutBaseTransform, FTransform& OutTransform) const {
    return false;
}

void AVehicleInRacePawn::AddItemPerformanceObject(AItemPerformanceBase* obj) {
}

void AVehicleInRacePawn::ActivateCamera() {
}


