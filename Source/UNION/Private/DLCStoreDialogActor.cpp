#include "DLCStoreDialogActor.h"

ADLCStoreDialogActor::ADLCStoreDialogActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DialogPopupWindow = NULL;
}

void ADLCStoreDialogActor::OnRemovePopupWindow() {
}

void ADLCStoreDialogActor::OnDecisionDLCStoreDialog(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void ADLCStoreDialogActor::CreateDLCStoreDialog(const UObject* WorldContextObject) {
}


