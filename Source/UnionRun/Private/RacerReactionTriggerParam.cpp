#include "RacerReactionTriggerParam.h"

URacerReactionTriggerParam::URacerReactionTriggerParam() {
    this->RunDelaySeconds = 10.00f;
    this->ReverseRunDelaySeconds = 1.00f;
    this->RunOffDelaySeconds = 1.00f;
    this->CharacterStartDelaySeconds = 10.00f;
    this->CharacterEndSeconds = 40.00f;
    this->CharacterMainCourseEnterSeconds = 10.00f;
    this->CharacterAnotherCourseEnterSeconds = 3.00f;
    this->RivalStartDelaySeconds = 30.00f;
    this->RivalCatchUpDist = 15.00f;
    this->RivalCatchUpDelaySeconds = 15.00f;
    this->RivalCaughtUpDist = 15.00f;
    this->RivalCaughtUpDelaySeconds = 15.00f;
    this->KeepTopDelaySeconds = 15.00f;
}


