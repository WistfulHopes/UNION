#include "ExtraMenuSceneBase.h"

UExtraMenuSceneBase::UExtraMenuSceneBase() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->ExtraMenuType = EOptionSequenceMainState::Idle;
}

UWidget* UExtraMenuSceneBase::OnExecButtonNavigation(EUINavigation Direction) {
    return NULL;
}

void UExtraMenuSceneBase::OnChangeControllerInputType(EAppControllerInputType BeforeType, EAppControllerInputType AfterType) {
}


