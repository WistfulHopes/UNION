#include "SessionManager.h"

USessionManager::USessionManager() {
}

void USessionManager::StartLogin(FStartLoginDelegate Callback) {
}

bool USessionManager::GetUserID(FString& UserId) {
    return false;
}

bool USessionManager::GetSwitchOnlineCode(int32& switchOnlineCode) {
    return false;
}

EResponseCodeAbstract USessionManager::GetResponseCodeAbstract() {
    return EResponseCodeAbstract::RES_SUCCESS;
}

bool USessionManager::GetRegionCode(FString& regionCode) {
    return false;
}

bool USessionManager::GetPenaltyEndTime(FString& endTime) {
    return false;
}

bool USessionManager::GetLoginComplete() {
    return false;
}

bool USessionManager::GetIsBan(bool& bOutIsBan) {
    return false;
}

bool USessionManager::GetFairPlayPoint(int32& OutFairPlayPoint) {
    return false;
}

bool USessionManager::GetExternalAddressRegionName(FString& AddressRegionName) {
    return false;
}

bool USessionManager::GetDisplayCode(FString& displayCode) {
    return false;
}


