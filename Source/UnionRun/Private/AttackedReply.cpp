#include "AttackedReply.h"

FAttackedReply::FAttackedReply() {
    this->SenderObject = NULL;
    this->DamageType = RacerDamageType::Non;
    this->DamageTypeOtherInfo = RacerDamageType::Non;
    this->ResultType = ERacerDamageNotifyType::None;
    this->ElapsedTime = 0.00f;
    this->RemainTime = 0.00f;
    this->bReplyProcessed = false;
}

