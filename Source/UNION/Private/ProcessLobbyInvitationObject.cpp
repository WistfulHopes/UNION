#include "ProcessLobbyInvitationObject.h"

AProcessLobbyInvitationObject::AProcessLobbyInvitationObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckLobbyInvitation = NULL;
}

void AProcessLobbyInvitationObject::OnGetInviteUserData(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void AProcessLobbyInvitationObject::OnFinishPlatformCheck(bool Result) {
}

void AProcessLobbyInvitationObject::OnCheckFinishUserName(bool Success, const FString& SanitizedUserName) {
}

void AProcessLobbyInvitationObject::CheckUserNameStart() {
}

void AProcessLobbyInvitationObject::CheckPlatformStart() {
}

void AProcessLobbyInvitationObject::CheckLobbyInvitationStart() {
}

void AProcessLobbyInvitationObject::AddLobbyInvitation(ULobbyJoinInfo* LobbyInvitation) {
}


