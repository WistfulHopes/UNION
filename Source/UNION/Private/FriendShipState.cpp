#include "FriendShipState.h"

UFriendShipState::UFriendShipState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFriendShipState::SetGivedTicket(EDriverId ID, int32 Num) {
}

float UFriendShipState::PlayVoice(EDriverId InDriverId, bool bVeryHappy) {
    return 0.0f;
}

int32 UFriendShipState::GetGivedTicket(EDriverId ID) {
    return 0;
}


