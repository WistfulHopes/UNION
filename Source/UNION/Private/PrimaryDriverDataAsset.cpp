#include "PrimaryDriverDataAsset.h"

UPrimaryDriverDataAsset::UPrimaryDriverDataAsset() {
    this->DriverId = EDriverId::Num;
    this->SkeletalMesh = NULL;
    this->SceneSkeletalMesh = NULL;
    this->IconTexture = NULL;
}

void UPrimaryDriverDataAsset::Refresh() {
}


