#include "CharaSelectCharaIcon.h"

UCharaSelectCharaIcon::UCharaSelectCharaIcon() {
    this->MLC_CharaIcon_CursorBG = NULL;
    this->WidgetSwitcher_CharaIcon = NULL;
    this->DMY_CharaIcon = NULL;
    this->DSP_LockCover = NULL;
    this->WidgetSwitcher_LockIcon = NULL;
    this->P1_Cursor = NULL;
    this->P2_Cursor = NULL;
    this->P3_Cursor = NULL;
    this->P4_Cursor = NULL;
    this->WBP_CMN_PlayerNumber_P1 = NULL;
    this->WBP_CMN_PlayerNumber_P2 = NULL;
    this->WBP_CMN_PlayerNumber_P3 = NULL;
    this->WBP_CMN_PlayerNumber_P4 = NULL;
    this->WBP_CMN_PlayerNumber_Decide = NULL;
    this->WidgetSwitcher_RivalSelectIcon = NULL;
    this->WBP_RivalWinIcon = NULL;
    this->DSP_NewIcon = NULL;
    this->WBP_Chara_ShopLabel = NULL;
    this->CharaIndex = 0;
    this->FocusSoundAtomCue = NULL;
    this->DLCDialog = NULL;
}

void UCharaSelectCharaIcon::UpdateBGColor() {
}



void UCharaSelectCharaIcon::SetVisibilityRivalWinIcon(bool Visible) {
}

void UCharaSelectCharaIcon::SetVisibilityRivalSelectIcon(bool IsVisible) {
}

void UCharaSelectCharaIcon::SetVisibilityLockCover(bool IsVisible) {
}

void UCharaSelectCharaIcon::SetVisibilityFriendShipIcon(bool Visible) {
}

void UCharaSelectCharaIcon::SetShowDialog(bool InFlag) {
}

void UCharaSelectCharaIcon::SetShopLabel(ELockType InType, int32 InPrice) {
}

void UCharaSelectCharaIcon::SetDecisionPlayerIndex(int32 InPlayerIndex) {
}

void UCharaSelectCharaIcon::SetActiveRivalSelectIcon(ERivalSelectIconType InType) {
}

void UCharaSelectCharaIcon::SelectRivalIconType(bool Selected, bool RivalLevelEnhanced) {
}










EDriverId UCharaSelectCharaIcon::GetDriverID() const {
    return EDriverId::Sonic;
}

FDriverData UCharaSelectCharaIcon::GetDriverData() const {
    return FDriverData{};
}

int32 UCharaSelectCharaIcon::GetCharaIndex() const {
    return 0;
}

void UCharaSelectCharaIcon::Event_OnRandomSelect_Impl(int32 InPlayerIndex) {
}

void UCharaSelectCharaIcon::Event_OnDecision_Impl(int32 InPlayerIndex) {
}

void UCharaSelectCharaIcon::Event_OnCancel_Impl(int32 InPlayerIndex, bool IsPlaySound) {
}

void UCharaSelectCharaIcon::DeleteDialogDLC(bool IsAccept) {
}



void UCharaSelectCharaIcon::Cancel(int32 InPlayerIndex, bool IsPlaySound) {
}

void UCharaSelectCharaIcon::CallbackDialogUnlock() {
}

void UCharaSelectCharaIcon::CallbackDialogPrice(EDialogResult InResult, int32 InPrice) {
}


