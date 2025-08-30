#include "LoadAssetState.h"
#include "EMenuSequenceMainState.h"

ULoadAssetState::ULoadAssetState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("LoadAssets");
    this->DefaultMenuState = EMenuSequenceMainState::LoadAssets;
}


