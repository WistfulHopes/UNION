#include "FullGameStoreDialogActor.h"

AFullGameStoreDialogActor::AFullGameStoreDialogActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PopupWindow = NULL;
}

void AFullGameStoreDialogActor::RemoveWidget() {
}

void AFullGameStoreDialogActor::DecideAndRemoveWidget(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex) {
}

void AFullGameStoreDialogActor::CreateWidget(const UObject* WorldContextObject) {
}


