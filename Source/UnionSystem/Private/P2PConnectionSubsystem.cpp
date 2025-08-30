#include "P2PConnectionSubsystem.h"

UP2PConnectionSubsystem::UP2PConnectionSubsystem() {
    this->SquadLobby = NULL;
}

int32 UP2PConnectionSubsystem::StartConnect(bool bIsHost, bool bIsResend) {
    return 0;
}

void UP2PConnectionSubsystem::OnUpdateLobbyComplete(bool bSuccessful, const FLobbyOperationResult& Result, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void UP2PConnectionSubsystem::EndConnect() {
}

void UP2PConnectionSubsystem::ClientTimeoutCheckStart() {
}


