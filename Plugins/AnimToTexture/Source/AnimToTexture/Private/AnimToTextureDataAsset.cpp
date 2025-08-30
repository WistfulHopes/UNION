#include "AnimToTextureDataAsset.h"

UAnimToTextureDataAsset::UAnimToTextureDataAsset() {
    this->UVChannel = 1;
    this->Mode = EAnimToTextureMode::Vertex;
    this->SampleRate = 30.00f;
    this->NumFrames = 0;
    this->VertexRowsPerFrame = 1;
    this->BoneWeightRowsPerFrame = 1;
    this->BoneRowsPerFrame = 1;
}

void UAnimToTextureDataAsset::Reset() {
}

int32 UAnimToTextureDataAsset::GetIndexFromAnimSequence(const UAnimSequence* Sequence) {
    return 0;
}


