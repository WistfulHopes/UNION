#include "GarageMenuGalleryState.h"
#include "EMenuSequenceSubState.h"

UGarageMenuGalleryState::UGarageMenuGalleryState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Gallery");
    this->DefaultMenuState = EMenuSequenceSubState::Gallery;
}


