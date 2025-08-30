#include "MatchmakingContext_WithFlexMatch.h"
#include "DummyMatchmakingMemberContext.h"

UMatchmakingContext_WithFlexMatch::UMatchmakingContext_WithFlexMatch() {
    this->LobbyMemberContextClass = UDummyMatchmakingMemberContext::StaticClass();
    this->DefaultMatchmakingDescribeTimeSpan = 3.00f;
}

void UMatchmakingContext_WithFlexMatch::InitializeFlexMatch(int32 LocalUserNum) {
}


