#include "CommonNoticeSubsystem.h"

UCommonNoticeSubsystem::UCommonNoticeSubsystem() {
    this->ChallengeWindow = NULL;
    this->StreamingInstallNotice = NULL;
    this->DeviceDisconnectedNotice = NULL;
}

void UCommonNoticeSubsystem::OnDeviceConnectedEvent(bool IsConnected) {
}

void UCommonNoticeSubsystem::AddChallengeNotice(int32 ChallengeId, float Time) {
}


