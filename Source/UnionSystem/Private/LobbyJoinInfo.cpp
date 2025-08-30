#include "LobbyJoinInfo.h"

ULobbyJoinInfo::ULobbyJoinInfo() {
}

FString ULobbyJoinInfo::ToString() const {
    return TEXT("");
}

bool ULobbyJoinInfo::IsAccepted() const {
    return false;
}

bool ULobbyJoinInfo::HasSessionInvite() const {
    return false;
}

FUniqueNetIdRepl ULobbyJoinInfo::GetSourceUserId() const {
    return FUniqueNetIdRepl{};
}

FString ULobbyJoinInfo::GetSourceDisplayName() const {
    return TEXT("");
}

FString ULobbyJoinInfo::GetPasswrod() const {
    return TEXT("");
}

FLobbyId ULobbyJoinInfo::GetLobbyId() const {
    return FLobbyId{};
}


