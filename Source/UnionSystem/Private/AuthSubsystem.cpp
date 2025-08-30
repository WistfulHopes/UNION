#include "AuthSubsystem.h"

UAuthSubsystem::UAuthSubsystem() {
}

void UAuthSubsystem::StartLogout(int32 LocalUserNum, FAuthSubsystemOnLogoutComplete OnComplete) {
}

void UAuthSubsystem::StartLogin(int32 LocalUserNum, FAuthSubsystemOnLoginComplete OnComplete) {
}

void UAuthSubsystem::SetupCachedAppUserBaseData() {
}

void UAuthSubsystem::SetCachedAppUserFairPlayPointData(const FFairPointCheckFairPointResponse& Response) {
}

void UAuthSubsystem::SetCachedAppUserBaseData(const FUserGetDataResponse& Response) {
}

void UAuthSubsystem::OnCompleteUserGetDataRequest(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

bool UAuthSubsystem::IsMatchLoggedInUserId(const FString& ProductUserId) const {
    return false;
}

bool UAuthSubsystem::IsLoggedIn(int32 LocalUserNum) const {
    return false;
}

FString UAuthSubsystem::GetPlatformToken(int32 LocalUserNum) const {
    return TEXT("");
}

bool UAuthSubsystem::GetOnlineTokenFromnUniqueNetId(const FUniqueNetIdRepl& UserId, FString& outToken) {
    return false;
}

bool UAuthSubsystem::GetOnlineToken(int32 LocalUserNum, FString& outToken) {
    return false;
}

FString UAuthSubsystem::GetOnlineEnvironment(int32 LocalUserNum) const {
    return TEXT("");
}

FString UAuthSubsystem::GetLoggedInUserIdString(int32 LocalUserNum) const {
    return TEXT("");
}

FUniqueNetIdRepl UAuthSubsystem::GetLoggedInUserId(int32 LocalUserNum) const {
    return FUniqueNetIdRepl{};
}

FString UAuthSubsystem::GetLoggedInPlayerNickname(int32 LocalUserNum) const {
    return TEXT("");
}

FString UAuthSubsystem::GetExternalAccountId(int32 LocalUserNum) const {
    return TEXT("");
}

FString UAuthSubsystem::GetEOSAuthToken(int32 LocalUserNum) const {
    return TEXT("");
}

FAppUserBaseData UAuthSubsystem::GetCachedAppUserBaseData() const {
    return FAppUserBaseData{};
}

FString UAuthSubsystem::GetAuthenticatedWith(int32 LocalUserNum) const {
    return TEXT("");
}

void UAuthSubsystem::DebugPrintLoggedInUserInfo(int32 LocalUserNum) {
}

void UAuthSubsystem::DebugGetOnlineToken(const FString& Endpoint, int32 LocalUserNum) {
}

FUniqueNetIdRepl UAuthSubsystem::CreateUniquePlayerId(const FString& PlayerIdString) const {
    return FUniqueNetIdRepl{};
}

FUniqueNetIdRepl UAuthSubsystem::CreatePlatformUniquePlayerId(const FString& PlayerIdString) const {
    return FUniqueNetIdRepl{};
}


