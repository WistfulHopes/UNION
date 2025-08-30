#include "GroupSelectComponent.h"

UGroupSelectComponent::UGroupSelectComponent() : UUserWidget(FObjectInitializer::Get()) {
    this->Platform = ECrossplayPlatform::None;
    this->PlatformIconImage = NULL;
    this->CharacterIconImage = NULL;
    this->bIsLocalPlayer = false;
    this->LocalPlayerIndex = 0;
    this->GroupIndex = -1;
}








