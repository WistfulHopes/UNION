#include "UnionCrossPlayCheck.h"

AUnionCrossPlayCheck::AUnionCrossPlayCheck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PopupWindowPtr = NULL;
    this->m_bIsUserConfirmed = false;
}

void AUnionCrossPlayCheck::ResetWarningWindow() {
}

void AUnionCrossPlayCheck::OnUserConfirmation(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

bool AUnionCrossPlayCheck::CheckCrossPlay() {
    return false;
}


