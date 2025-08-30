#include "SceneDriver.h"
#include "Components/StaticMeshComponent.h"
#include "UnionSkeletalMeshComponent.h"
#include "CustomAttrAnimComponent.h"

ASceneDriver::ASceneDriver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DriverId = EDriverId::Num;
    this->DriverPose = EDriverPose::Num;
    this->AnimationMode = ESceneDriverAnimationMode::AnimationSingleNode;
    this->bUseRivalSkin = false;
    this->bDLC = false;
    this->SkeletalMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("DriverCharacter"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SteeringWheel"));
    this->DriverDataTable = NULL;
    this->LipSyncAnimSequenceAsset = NULL;
    this->AnimSequenceAssets[0] = NULL;
    this->AnimSequenceAssets[1] = NULL;
    this->AnimSequenceAssets[2] = NULL;
    this->AnimSequenceAssets[3] = NULL;
    this->AnimSequenceAssets[4] = NULL;
    this->AnimSequenceAssets[5] = NULL;
    this->AnimSequenceAssets[6] = NULL;
    this->AnimSequenceAssets[7] = NULL;
    this->AnimSequenceAssets[8] = NULL;
    this->AnimSequenceAssets[9] = NULL;
    this->AnimSequenceAssets[10] = NULL;
    this->AnimSequenceAssets[11] = NULL;
    this->AnimSequenceAssets[12] = NULL;
    this->AnimSequenceAssets[13] = NULL;
    this->AnimSequenceAssets[14] = NULL;
    this->AnimSequenceAssets[15] = NULL;
    this->AnimSequenceAssets[16] = NULL;
    this->AnimSequenceAssets[17] = NULL;
    this->AnimSequenceAssets[18] = NULL;
    this->AnimSequenceAssets[19] = NULL;
    this->AnimSequenceAssets[20] = NULL;
    this->AnimSequenceAssets[21] = NULL;
    this->AnimSequenceAssets[22] = NULL;
    this->CustomAttrAnimComponent = CreateDefaultSubobject<UCustomAttrAnimComponent>(TEXT("CustomAttrAnimation"));
    this->UnionAtomComponent = NULL;
    this->StaticMeshComponent->SetupAttachment(SkeletalMeshComponent);
}

void ASceneDriver::StopAnimation() {
}

void ASceneDriver::SetSteeringWheelVisibility(bool IsVisible) {
}

void ASceneDriver::SetSteeringWheelMaterials(const FUserMachineCustomizeData& MachineCustomizeData) {
}

void ASceneDriver::SetDriverPose(const EDriverPose& NewDriverPose) {
}

void ASceneDriver::PlayRivalAnimationAndLipSync(EPerformRivalInteractionType InteractionType) {
}

void ASceneDriver::PlayAnimMontage(UAnimMontage* AnimMontage, const bool bIsLooping, const float Position) {
}

void ASceneDriver::PlayAnimationWithVoiceAndLipSync(EAnimationVoiceLipSyncId ID) {
}

bool ASceneDriver::PlayAnimationByAsset(UAnimationAsset* InAnimToPlay, bool bIsLooping, const float Position, const bool bWithPlayFacialSlot) {
    return false;
}

void ASceneDriver::PlayAnimation(ESceneDriverAnimationId ID, bool bIsLooping) {
}

bool ASceneDriver::OverrideAnimationData(UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate) {
    return false;
}

void ASceneDriver::OverrideAnimation(ESceneDriverAnimationId ID, bool bIsLooping) {
}

void ASceneDriver::MontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void ASceneDriver::MontageBlendOut(UAnimMontage* Montage, bool bInterrupted) {
}

bool ASceneDriver::LoadRivalLipSyncMotion(EDriverId ID, ERivalLipSyncType Type, EDriverId RivalId) {
    return false;
}

void ASceneDriver::LoadDriver_Implementation() {
}

bool ASceneDriver::IsValidAnimation(ESceneDriverAnimationId ID) {
    return false;
}

EDriverPose ASceneDriver::GetDriverPose() const {
    return EDriverPose::Car;
}

void ASceneDriver::CreateDriver_Implementation() {
}


