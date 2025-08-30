#include "RacerReactionText.h"

FRacerReactionText::FRacerReactionText() {
    this->ID = ERacerReactionId::None;
    this->VoiceType = ERacerReactionVoiceType::None;
    this->DriverId = EDriverId::Sonic;
    this->RivalId = EDriverId::Sonic;
    this->VoiceChrId = EDriverId::Sonic;
    this->WindowId = ERacerReactionWindow::None;
    this->FaceId = EDriverId::Sonic;
    this->StageId = 0;
}

