#include "UnionRacePlayerStatus.h"

UUnionRacePlayerStatus::UUnionRacePlayerStatus() {
    this->bIndexInited = false;
    this->RacerIndex = -1;
    this->PlayerControllerIndex = -1;
    this->PresentDomainIndex = EDomainIndex::DomainIndex0;
    this->PresentDomainNumber = 0;
    this->PresentNextDomainIndex = EDomainIndex::InvalidDomainIndex;
    this->PresentNextDomainNumber = EDomainNumber::InvalidDomainNumber;
    this->bPresentValidTravelRing = false;
    this->bPresentNoticeRingOn = false;
    this->bPresentSelectStartOn = false;
    this->bPresentSelectingA = false;
    this->bPresentSelectingB = false;
    this->bPresentAnotherConfirmEndOn = false;
    this->bPresentJustBeforeOn = false;
    this->bPresentIsSameDomainNumber = false;
    this->PresentDomainVehicleModelInfo = NULL;
    this->PresentDomainGameCameraInfo = NULL;
    this->InRingDomainIndex = EDomainIndex::DomainIndex0;
    this->InRingDomainNumber = 0;
    this->bInRingValidTravelRing = false;
    this->bInRingAnotherConfirmEndOn = false;
    this->bInRingJustBeforeOn = false;
    this->bInRingIsSameDomainNumber = false;
    this->InRingDomainVehicleModelInfo = NULL;
    this->InRingDomainGameCameraInfo = NULL;
    this->bInitRacerIndex = false;
    this->bInitPlayerIndex = false;
}


