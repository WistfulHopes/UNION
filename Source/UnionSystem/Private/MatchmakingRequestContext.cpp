#include "MatchmakingRequestContext.h"
#include "MatchmakingRequestMemberContext.h"

UMatchmakingRequestContext::UMatchmakingRequestContext() {
    this->LobbyMemberContextClass = UMatchmakingRequestMemberContext::StaticClass();
}

void UMatchmakingRequestContext::SetNoTriggerMatchmakingComplete(bool bNewValue) {
}

bool UMatchmakingRequestContext::IsSeries() const {
    return false;
}


