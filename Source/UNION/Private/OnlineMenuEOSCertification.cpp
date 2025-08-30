#include "OnlineMenuEOSCertification.h"
#include "EMenuSequenceSubState.h"

UOnlineMenuEOSCertification::UOnlineMenuEOSCertification(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SelectOnlineMatch");
    this->DefaultMenuState = EMenuSequenceSubState::SelectOnlineMatch;
}


