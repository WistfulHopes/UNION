#include "UnionPlatformCrossPlayChangedWindow.h"

AUnionPlatformCrossPlayChangedWindow::AUnionPlatformCrossPlayChangedWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PopupWindowPtr = NULL;
}

void AUnionPlatformCrossPlayChangedWindow::OnDecisionCrossPlayReloginWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}


