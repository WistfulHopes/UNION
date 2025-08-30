#include "LobbySequenceParam.h"

FLobbySequenceParam::FLobbySequenceParam() {
    this->NetworkTimeoutSeconds = 0.00f;
    this->NetworkAddMemberInitCompleteTimeoutSeconds = 0.00f;
    this->NetworkSendStampLimit = 0;
    this->NetworkSendHornLimit = 0;
    this->NetworkSendStampTimerSeconds = 0.00f;
    this->NetworkSendHornTimerSeconds = 0.00f;
    this->NetworkSendCustomDataTimerSeconds = 0.00f;
    this->NetworkP2PSetupResendInterval = 0.00f;
    this->NetworkP2PSetupResendMax = 0;
    this->NetworkClientP2PStartTimeout = 0.00f;
    this->NetworkP2PSequenceTimeout = 0.00f;
    this->NetworkP2PCanSendPackeTimeout = 0.00f;
    this->SelectCourseWaitSeconds = 0.00f;
    this->SelectCourseTimeout = 0.00f;
    this->NetworkPreRaceWaitP2PConnectioniTimeout = 0.00f;
    this->ThresholdDisconnectPeersTime = 0.00f;
    this->JoinSquadTimeout = 0.00f;
    this->SelectCourseResultTimeout = 0.00f;
}

