#include "RacerReactionTypeParam.h"

FRacerReactionTypeParam::FRacerReactionTypeParam() {
    this->ID = ERacerReactionId::None;
    this->Priority = RacerReactionPriority::Force;
    this->CoolTime = 0.00f;
    this->SplitDispType = ERacerReactionSplitDispType::Normal;
}

