#include "CommonMenuControllerUI.h"

UCommonMenuControllerUI::UCommonMenuControllerUI() : UUserWidget(FObjectInitializer::Get()) {
    this->ButtonImageType = EControllerButtonType::GamePadFaceButton;
    this->bIsRaceKey = false;
    this->WidgetSwitcher_Pict = NULL;
    this->WBP_FooterMenu_Sub_ControllerCross = NULL;
    this->WBP_FooterMenu_Sub_ControllerBtn = NULL;
    this->WBP_FooterMenu_Sub_KeyCross = NULL;
    this->WBP_FooterMenu_Sub_Key = NULL;
    this->Meter = NULL;
}

void UCommonMenuControllerUI::UpdateByCurrentFKeySetting() {
}

void UCommonMenuControllerUI::SetGamePadKeyFlag(bool InIsGamePadKey) {
}

void UCommonMenuControllerUI::SetFKey(const FKey& InKey) {
}

void UCommonMenuControllerUI::SetControllerButton(EControllerButtonTextureIndex InControllerButton) {
}


