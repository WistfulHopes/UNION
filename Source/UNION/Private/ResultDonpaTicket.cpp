#include "ResultDonpaTicket.h"

UResultDonpaTicket::UResultDonpaTicket() {
    this->SpeedClassId = EMenuSpeedClassId::NormalSpeed;
    this->RivalLevel = 1;
    this->bPowerRival = false;
    this->bPlayAnimFinished = false;
    this->_BeforeTicketText = NULL;
    this->_AfterTicketText = NULL;
    this->_AddTicketText = NULL;
    this->_BonusOverlay = NULL;
}


bool UResultDonpaTicket::IsAnimFinished() const {
    return false;
}



void UResultDonpaTicket::BeginRivalLevelDonpaTicket(const int32 ZOrder) {
}

void UResultDonpaTicket::AppendRivalLevelDonpaTicket() {
}

void UResultDonpaTicket::AppendRaceResultDonpaTicket() {
}




