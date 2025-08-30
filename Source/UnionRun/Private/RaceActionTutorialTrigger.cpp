#include "RaceActionTutorialTrigger.h"

FRaceActionTutorialTrigger::FRaceActionTutorialTrigger() {
    this->tutorialAction = ETutorialAction::None;
    this->MinTriggerRate = 0.00f;
    this->MaxTriggerRate = 0.00f;
    this->MinTriggerGap = 0.00f;
    this->MaxTriggerGap = 0.00f;
}

