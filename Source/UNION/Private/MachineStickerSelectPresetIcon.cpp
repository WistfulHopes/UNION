#include "MachineStickerSelectPresetIcon.h"

UMachineStickerSelectPresetIcon::UMachineStickerSelectPresetIcon() {
    this->MLC_Base = NULL;
    this->DSP_Cursor_StickerIcon = NULL;
    this->WBP_CMN_TextBalloon = NULL;
    this->DSP_Set_Icon = NULL;
    this->DSP_Icon_New = NULL;
    this->WidgetSwitcher_PresetIcon = NULL;
    this->DMY_PresetIcon = NULL;
    this->DMY_CharaIcon = NULL;
    this->FocusSoundCue = NULL;
    this->DecisionSoundCue = NULL;
    this->CancelSoundCue = NULL;
    this->ShoulderSoundCue = NULL;
}

void UMachineStickerSelectPresetIcon::ShowCursor(bool IsVisible) {
}

void UMachineStickerSelectPresetIcon::Setup() {
}

void UMachineStickerSelectPresetIcon::SetSelected(bool bInIsSelected) {
}

void UMachineStickerSelectPresetIcon::SetNew(bool bInIsNew) {
}

void UMachineStickerSelectPresetIcon::SetCharaIconVisible(bool IsVisible) {
}

void UMachineStickerSelectPresetIcon::SetBalloonVisible(bool IsVisible) {
}

FEventReply UMachineStickerSelectPresetIcon::OnFocusReceivedImpl() {
    return FEventReply{};
}

void UMachineStickerSelectPresetIcon::OnFocusLostImpl() {
}


