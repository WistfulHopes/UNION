#include "UserCommonData.h"

FUserCommonData::FUserCommonData() {
    this->PlayerLevel = 0;
    this->TotalRaceCount = 0;
    this->RedStarRing = 0;
    this->TotalRedStarRing = 0;
    this->DonpaTicket = 0;
    this->TotalDonpaTicket = 0;
    this->UseDonpaTicket = 0;
    this->SelectedDriverId = EDriverId::Sonic;
    this->SelectedMachineId = EMachineId::SPD_01;
    this->bHasEnteredMachineCustomizeSequence = false;
    this->ChallengeLastShowProgress = 0.00f;
    this->RateHighPoint = 0;
    this->festaPoint = 0;
    this->festaId = 0;
    this->NiceCount = 0;
    this->bHasAgreedNoticeAgreement = false;
    this->bFinishedAdvertiseLogoFlow = false;
    this->bOpenFever = false;
    this->ConfirmedPatchVersion = 0;
    this->LastCheckedBanStatus = EBanStatus::None;
}

