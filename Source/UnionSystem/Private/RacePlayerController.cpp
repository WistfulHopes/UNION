#include "RacePlayerController.h"

ARacePlayerController::ARacePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->RaceInputReciever = NULL;
}

void ARacePlayerController::SetSubMode(ERacePlayerControllerSubMode InSubMode) {
}

bool ARacePlayerController::IsRaceInputEnabled() const {
    return false;
}

ERacePlayerControllerSubMode ARacePlayerController::GetSubMode() const {
    return ERacePlayerControllerSubMode::Race;
}

void ARacePlayerController::DoInputRaceReleased(ERaceInputKey InKey) {
}

void ARacePlayerController::DoInputRacePressed(ERaceInputKey InKey, float Amount) {
}


