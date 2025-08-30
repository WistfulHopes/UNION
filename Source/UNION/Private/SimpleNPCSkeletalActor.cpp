#include "SimpleNPCSkeletalActor.h"
#include "UnionSkeletalMeshComponent.h"

ASimpleNPCSkeletalActor::ASimpleNPCSkeletalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MachineMeshComponent = CreateDefaultSubobject<UUnionSkeletalMeshComponent>(TEXT("Machine Mesh"));
    this->TireMarkMaterialInterface = NULL;
    this->BodyCutSurfaceEffectComponent = NULL;
    this->SimpleNpcDataTable = NULL;
    this->MachineMeshComponent->SetupAttachment(RootComponent);
}

void ASimpleNPCSkeletalActor::SetupTireMarkEffect() {
}

void ASimpleNPCSkeletalActor::SetupSurfaceEffect() {
}

void ASimpleNPCSkeletalActor::SetupPresetColor(const EMachineId MachineId) {
}

void ASimpleNPCSkeletalActor::SetupEngineSound(const EMachineId MachineId) {
}

void ASimpleNPCSkeletalActor::SetupEffectData(const EMachineId MachineId) {
}

void ASimpleNPCSkeletalActor::SetMachineMesh(ECarStatusType InCarStatusType, EDriverSize InDriverSize, bool bIsEnabledAnimation) {
}

void ASimpleNPCSkeletalActor::MontageStop(EMachineAnimationMontageAssetId AssetId, float InBlendOutTime) {
}

void ASimpleNPCSkeletalActor::MontagePlay(EMachineAnimationMontageAssetId AssetId, float PlayRate) {
}

void ASimpleNPCSkeletalActor::MontageJumpToSection(FName SectionName) {
}


