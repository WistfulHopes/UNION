#include "RaceCameraActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"

ARaceCameraActor::ARaceCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->RaceCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("RaceCameraComponent"));
    this->RaceSpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    this->PlayerControllerRef = NULL;
    this->ViewSplitId = EViewSplitId::None;
    this->LookActorRef = NULL;
    this->CameraComponentRef = NULL;
    this->VehicleInRacePawnRef = NULL;
    this->bEnabledRaceCamera = true;
    this->RaceCameraMode = ERaceCameraMode::NOT_USED;
    this->CurrentCarStatusType = ECarStatusType::CarStatusSpeed;
    this->CurrentDriverID = EDriverId::Sonic;
    this->bPause = false;
    this->DataAssetResultCamera = NULL;
    this->ResultCameraState = EResultCameraState::PAUSE;
    this->ResultCurrentPlayIndex = 0;
    this->CurrentProductionType = EResultCameraProductionType::DEFAULT;
    this->ResultNextPlayIndex = 0;
    this->ResultNextPlayType = EResultCameraProductionType::DEFAULT;
    this->ResultFixedPlayType = EResultCameraProductionType::DEFAULT;
    this->DataAssetRivalCamera = NULL;
    this->RivalCameraState = ERivalCameraState::PAUSE;
    this->ReplayCameraState = EReplayCameraState::PAUSE;
    this->RaceCameraComponent->SetupAttachment(RaceSpringArmComponent);
    this->RaceSpringArmComponent->SetupAttachment(RootComponent);
}

void ARaceCameraActor::SwitchViewSplitID(const EViewSplitId SetViewSplitId) {
}

void ARaceCameraActor::SwitchDriverID(const EDriverId SetDriverId) {
}

void ARaceCameraActor::SwitchCarStatusType(const ECarStatusType SetType) {
}

void ARaceCameraActor::Stop() {
}

void ARaceCameraActor::StartRivalViewCamera(APlayerController* SetPlayerController, const EViewSplitId SetViewSplitId, AActor* SetLookActor, UCameraComponent* SetCameraComponent) {
}

void ARaceCameraActor::StartResultCamera(APlayerController* SetPlayerController, const EViewSplitId SetViewSplitId, AActor* SetLookActor, UCameraComponent* SetCameraComponent) {
}

void ARaceCameraActor::StartReplayCamera(APlayerController* SetPlayerController, const EViewSplitId SetViewSplitId, AActor* SetLookActor, UCameraComponent* SetCameraComponent) {
}

void ARaceCameraActor::SetResultFixedCameraMode(const EResultCameraProductionType SetProdType) {
}

void ARaceCameraActor::SetPauseEnabled(const bool SetEnabled) {
}

void ARaceCameraActor::ReStart() {
}

bool ARaceCameraActor::IsPause() const {
    return false;
}

void ARaceCameraActor::Finished() {
}

void ARaceCameraActor::EnabledRaceCamera(const bool SetEnabled) {
}


