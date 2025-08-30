#include "MachineInRaceActor.h"

AMachineInRaceActor::AMachineInRaceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TireMeshComponents.AddDefaulted(4);
    this->TireMarkComponents.AddDefaulted(4);
    this->TireMarkMaterialInterface = NULL;
}

void AMachineInRaceActor::SetTireMarkScale() {
}

void AMachineInRaceActor::SetCarShadow() {
}

void AMachineInRaceActor::MontageStopAll(float InBlendOutTime) {
}

void AMachineInRaceActor::MontageStop(EMachineAnimationMontageAssetId AssetId, float InBlendOutTime) {
}

void AMachineInRaceActor::MontagePlay(EMachineAnimationMontageAssetId AssetId, float PlayRate) {
}

void AMachineInRaceActor::MontageJumpToSection(FName SectionName) {
}


