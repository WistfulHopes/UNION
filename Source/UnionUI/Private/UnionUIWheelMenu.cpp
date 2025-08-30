#include "UnionUIWheelMenu.h"

UUnionUIWheelMenu::UUnionUIWheelMenu() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->MenuInputReceiveObject = NULL;
}

void UUnionUIWheelMenu::WheelMenuSelectInput_Impl(UObject* Object, FVector2D InStickVector) {
}

void UUnionUIWheelMenu::WheelMenuSelect_Impl(FVector InStickVector) {
}

void UUnionUIWheelMenu::UISceneWheelMenuKeyUnBind(APlayerController* InPlayerController) {
}

void UUnionUIWheelMenu::UISceneWheelMenuKeyBind(APlayerController* InPlayerController) {
}

void UUnionUIWheelMenu::SetUpWheelParam(bool bInIsLeftTurn, float InLStickIgone, bool bInIsTopHalf, float InBitweenDeathZone) {
}

void UUnionUIWheelMenu::OnUISceneWheelSelectEvent_Impl(UUnionUIButtonBase* UnionButton, int32 ButtonIndex) {
}


