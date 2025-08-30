#include "EndingSequenceStateMain.h"
#include "ERaceEndingSequenceState.h"

UEndingSequenceStateMain::UEndingSequenceStateMain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("Ending");
    this->DefaultMenuState = ERaceEndingSequenceState::Ending;
    this->InputKeyHandler = NULL;
}


