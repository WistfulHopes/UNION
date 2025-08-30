#include "RaceSequenceStateEndMenu.h"
#include "ERaceSequenceState.h"

URaceSequenceStateEndMenu::URaceSequenceStateEndMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("EndMenu");
    this->DefaultMenuState = ERaceSequenceState::EndMenu;
}


