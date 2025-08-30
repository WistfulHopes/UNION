#include "MachinePartsDataAsset.h"

UMachinePartsDataAsset::UMachinePartsDataAsset() {
    this->PartsStaticMesh = NULL;
    this->IconTexture = NULL;
    this->bIsColor1Enabled = true;
    this->bIsColor2Enabled = true;
    this->bIsColor3Enabled = true;
    this->bIsGlowEnabled = true;
    this->StickerUVTexture = NULL;
    this->PatternData.AddDefaulted(3);
}

TSoftObjectPtr<USoundAtomCue> UMachinePartsDataAsset::GetEngineSound(bool bLocalPlayer) const {
    return NULL;
}

void UMachinePartsDataAsset::AutoSet() {
}


