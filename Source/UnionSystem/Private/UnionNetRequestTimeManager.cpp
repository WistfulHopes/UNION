#include "UnionNetRequestTimeManager.h"

UUnionNetRequestTimeManager::UUnionNetRequestTimeManager() {
}

void UUnionNetRequestTimeManager::SetResponseTimeCompensation(bool bSuccess) {
}

void UUnionNetRequestTimeManager::SetResponseTime(const FString& ApiName, bool bSuccess) {
}

bool UUnionNetRequestTimeManager::IsCommunicationTimeForError(const FString& ApiName) {
    return false;
}

bool UUnionNetRequestTimeManager::IsCommunicationTimeCompensation() {
    return false;
}

bool UUnionNetRequestTimeManager::IsCommunicationTime(const FString& ApiName) {
    return false;
}

void UUnionNetRequestTimeManager::ClearCompensationRequestTime() {
}

void UUnionNetRequestTimeManager::ClearAll() {
}


