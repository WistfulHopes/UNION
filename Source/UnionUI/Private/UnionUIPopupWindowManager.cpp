#include "UnionUIPopupWindowManager.h"

UUnionUIPopupWindowManager::UUnionUIPopupWindowManager() {
    this->ErrorViewer = NULL;
}

void UUnionUIPopupWindowManager::SetFocusExistPopupWindow() {
}

void UUnionUIPopupWindowManager::OnPopupWindowRemoveFromParent(UUnionUIPopupWindowBase* RemovedPopupWindow) {
}

bool UUnionUIPopupWindowManager::IsPopupTypeExist(EPopupWindowType WindowType) {
    return false;
}

bool UUnionUIPopupWindowManager::IsAlreadyPopupWindowExist() {
    return false;
}

UUnionUIPopupWindowBase* UUnionUIPopupWindowManager::CreatePopupWindow(EPopupWindowType WindowType) {
    return NULL;
}


