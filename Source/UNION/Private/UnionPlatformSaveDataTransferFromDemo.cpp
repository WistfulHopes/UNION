#include "UnionPlatformSaveDataTransferFromDemo.h"

AUnionPlatformSaveDataTransferFromDemo::AUnionPlatformSaveDataTransferFromDemo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_PopupWindow = NULL;
}

void AUnionPlatformSaveDataTransferFromDemo::RequestStart() {
}

void AUnionPlatformSaveDataTransferFromDemo::OnDecisionPopupWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

bool AUnionPlatformSaveDataTransferFromDemo::IsBusy() const {
    return false;
}


