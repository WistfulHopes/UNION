#include "RacerReactionInfo_TableRow.h"

FRacerReactionInfo_TableRow::FRacerReactionInfo_TableRow() {
    this->bIsValid = false;
    this->ID = ERacerReactionId::None;
    this->Priority = RacerReactionPriority::Force;
    this->CoolTime = 0.00f;
    this->SplitDispType = ERacerReactionSplitDispType::Normal;
}

