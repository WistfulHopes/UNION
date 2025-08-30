#include "OptionKeyconfigListItem.h"

UOptionKeyconfigListItem::UOptionKeyconfigListItem() {
    this->TXT_Cell_Title = NULL;
    this->Cell_Active_Loop = NULL;
    this->Cell_Selecte_Loop = NULL;
    this->WBP_Option_Sub_Key_Cell_Config_Pri = NULL;
    this->WBP_Option_Sub_Key_Cell_Config_Sec = NULL;
    this->WBP_Option_Sub_Key_Cell_Config_pad = NULL;
    this->KeyBordData = NULL;
    this->GamePadData = NULL;
    this->ItemIndex = 0;
}

void UOptionKeyconfigListItem::SetSeconderyKeyData(const FKey& InSecondaryKey) {
}

void UOptionKeyconfigListItem::SetPrimaryKeyData(const FKey& InPrimaryKey) {
}

void UOptionKeyconfigListItem::SetKeyItem(FName KeyName, UKeyConfigItem* inKeyBordData, UKeyConfigItem* inGamePadData) {
}

void UOptionKeyconfigListItem::SetGamePadKeyData(const FKey& InGamePadKey) {
}

void UOptionKeyconfigListItem::SetCellTitle(FText Text) {
}




int32 UOptionKeyconfigListItem::GetItemIndex() const {
    return 0;
}

void UOptionKeyconfigListItem::BackToListEvent() {
}


