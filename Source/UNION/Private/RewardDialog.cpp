#include "RewardDialog.h"

URewardDialog::URewardDialog() {
    this->LastFocusedPlayerControllerIndex_ButtonsPanelIndex.AddDefaulted(4);
    this->WBP_CMN_ItemIcon = NULL;
    this->TXT_ItemName = NULL;
    this->TXT_Category = NULL;
    this->WidgetSwitcherText = NULL;
    this->TXT_MainTitle = NULL;
    this->TXT_MainTitle_1 = NULL;
    this->TXT_MainTitle_2 = NULL;
    this->Overlay_SourceNumber = NULL;
    this->WBP_DonpaTicketApp_Sub_TicketNumber = NULL;
    this->WBP_Popup_Sub_Btn_03 = NULL;
    this->WBP_Popup_Sub_Btn_04 = NULL;
    this->SoundCueYes = NULL;
    this->SoundCueNo = NULL;
    this->SoundCueCancel = NULL;
    this->ButtonsPanel = NULL;
}

void URewardDialog::SetupYesNo(const FRewardDialogParameter& InParam) {
}

void URewardDialog::SetupOK(const FRewardDialogParameter& InParam) {
}




void URewardDialog::OnDecisionYesNo(UUnionUIButtonBase* Button, int32 ButtonIndex) {
}

void URewardDialog::OnCancelYesNo(UUnionUIButtonBase* Button, int32 ButtonIndex) {
}

void URewardDialog::OnCancelOK(UUnionUIButtonBase* Button, int32 ButtonIndex) {
}

UCommonMenuPopupSubBtnStandard* URewardDialog::GetButtonYes() const {
    return NULL;
}

UCommonMenuPopupSubBtnStandard* URewardDialog::GetButtonNo() const {
    return NULL;
}

void URewardDialog::AnimationEndOut() {
}

void URewardDialog::AnimationEndIn() {
}


