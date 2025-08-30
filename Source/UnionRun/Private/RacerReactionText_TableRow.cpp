#include "RacerReactionText_TableRow.h"

FRacerReactionText_TableRow::FRacerReactionText_TableRow() {
    this->ID = ERacerReactionId::None;
    this->VoiceType = ERacerReactionVoiceType::None;
    this->DriverId = EDriverId::Sonic;
    this->RivalId = EDriverId::Sonic;
    this->WindowId = ERacerReactionWindow::None;
    this->FaceId = EDriverId::Sonic;
    this->StageId = 0;
}

