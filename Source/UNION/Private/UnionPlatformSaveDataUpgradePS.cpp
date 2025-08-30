#include "UnionPlatformSaveDataUpgradePS.h"

AUnionPlatformSaveDataUpgradePS::AUnionPlatformSaveDataUpgradePS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PopupWindowPtr = NULL;
}

void AUnionPlatformSaveDataUpgradePS::RequestStartUpgradeSaveData() {
}

void AUnionPlatformSaveDataUpgradePS::OnDecisionUserConfirmationPopupWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

bool AUnionPlatformSaveDataUpgradePS::IsBusy() const {
    return false;
}


