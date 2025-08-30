#include "TextureSwitcherComponent.h"

UTextureSwitcherComponent::UTextureSwitcherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPurgeAfterSwitch = true;
}

void UTextureSwitcherComponent::SwitchTextureByIndexAfterLoad(int32 TextureIndex) {
}

bool UTextureSwitcherComponent::SwitchTextureByIndex(int32 MaterialIndex, const FName ParameterName, int32 TextureIndex) {
    return false;
}

bool UTextureSwitcherComponent::SwitchTexture(int32 MaterialIndex, const FName ParameterName, UTexture2D* Texture) {
    return false;
}


