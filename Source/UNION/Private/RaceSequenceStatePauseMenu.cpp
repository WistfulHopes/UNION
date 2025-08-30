#include "RaceSequenceStatePauseMenu.h"
#include "ERaceSequenceState.h"

URaceSequenceStatePauseMenu::URaceSequenceStatePauseMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("PauseMenu");
    this->DefaultMenuState = ERaceSequenceState::PauseMenu;
}

void URaceSequenceStatePauseMenu::StopVehiclePawnSE() {
}


