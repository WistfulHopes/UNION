#include "PartyRaceItemIcon.h"

UPartyRaceItemIcon::UPartyRaceItemIcon() {
    this->ItemId = EItemId::WhiteBoost;
    this->bIsMultiple = false;
    this->ItemCount = 1;
    this->GroupSetting = ERaceSettingGrouping::Group_3Group;
    this->ItemSwitchState = EPartyRaceItemSwitchState::BOTH_ON;
    this->ItemSwitchPanalHolder = NULL;
    this->NonActiveImagePanel = NULL;
    this->CursorPanel = NULL;
    this->Active_Loop = NULL;
    this->Select_Loop = NULL;
    this->NonActive_Loop = NULL;
    this->ItemIconMaterial = NULL;
    this->DSP_RingNum = NULL;
}

void UPartyRaceItemIcon::UpdateSetting() {
}

void UPartyRaceItemIcon::SetItemTexture(UTexture* InTexture) {
}

void UPartyRaceItemIcon::SetItemId(const EItemId InItemId, bool bInMultiple) {
}

void UPartyRaceItemIcon::SetEnableSettingAutoGroup(bool bInEnable) {
}

void UPartyRaceItemIcon::SetEnableSetting(int32 GroupIndex, bool bInEnable) {
}

void UPartyRaceItemIcon::SetALLGroupSetting(const TMap<int32, bool>& InGroupIndex_ItemEnableMap) {
}



void UPartyRaceItemIcon::ChangeToNextSetting() {
}


