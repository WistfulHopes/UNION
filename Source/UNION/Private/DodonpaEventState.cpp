#include "DodonpaEventState.h"
#include "EMenuSequenceSubState.h"

UDodonpaEventState::UDodonpaEventState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("EventScene");
    this->DefaultMenuState = EMenuSequenceSubState::TopMenuDodonpaEvent;
    this->EventCamera = NULL;
}

void UDodonpaEventState::SpawnEventCamera(FTransform CameraTransform) {
}

void UDodonpaEventState::SetDodonpaEventStatus_Implementation(FName InCallEventName, EGrandPrixEventFlag InSaveDataFlagId, EMenuSequenceBGM InBGMId) {
}

void UDodonpaEventState::DestroyEventCamera() {
}


