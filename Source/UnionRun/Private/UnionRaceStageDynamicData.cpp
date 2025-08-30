#include "UnionRaceStageDynamicData.h"

FUnionRaceStageDynamicData::FUnionRaceStageDynamicData() {
    this->CollisionAsset = NULL;
    this->NavigationAsset = NULL;
    this->RunPathAsset = NULL;
    this->ComPathAsset = NULL;
    this->bUseOverwriteDirectionalLightParameter = false;
    this->OverwriteDirectionalLightIntensity = 0.00f;
}

