#include "GhostSubSystem.h"

UGhostSubSystem::UGhostSubSystem() {
    this->m_GhostDebugMenu = NULL;
    this->m_CurrentSpeedClassId = ESpeedClassId::SonicSpeed;
    this->m_CurrentStageId = EStageId::MainBegin;
}

void UGhostSubSystem::SetGhostRequestFailed(bool InFailed) {
}

void UGhostSubSystem::SetDownloadGhostData(const FString& InUserId, const ESpeedClassId InSpeedClass, const EStageId InStageId, const FString& InDateTime, const FReplaySaveInfo& InGhostData) {
}

void UGhostSubSystem::ResetDownloadGhostData() {
}

void UGhostSubSystem::OnCompleteSanitize(bool bSuccess, const FString& SanitizeMessage) {
}

bool UGhostSubSystem::IsGhostRequestFailed() const {
    return false;
}

bool UGhostSubSystem::CheckCachedGhostDataUserMatch(const FString& InUserId, const ESpeedClassId InSpeedClass, const EStageId InStageId, const FString& InDateTime) {
    return false;
}


