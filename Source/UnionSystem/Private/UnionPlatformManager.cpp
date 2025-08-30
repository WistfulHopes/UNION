#include "UnionPlatformManager.h"

UUnionPlatformManager::UUnionPlatformManager() {
    this->m_DebugMenu = NULL;
    this->m_XboxDeviceSelector = NULL;
    this->m_SoftwareKeyboard = NULL;
    this->m_ContentManager = NULL;
}

void UUnionPlatformManager::OnPlatformEvent(const FUnionPlatformEventInfo& EventInfo) {
}


