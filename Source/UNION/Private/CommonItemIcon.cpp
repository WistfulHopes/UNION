#include "CommonItemIcon.h"

UCommonItemIcon::UCommonItemIcon() : UUserWidget(FObjectInitializer::Get()) {
    this->WidgetSwitcher = NULL;
    this->ItemIcon_MachineParts = NULL;
    this->ItemIcon_HornIcon = NULL;
    this->ItemIcon_DonpaTicket = NULL;
    this->ItemIcon_UnknownGadget = NULL;
    this->DMY_CompleteMachine = NULL;
    this->DMY_GadgetIcon = NULL;
    this->ItemIcon_StickerImage = NULL;
    this->DMY_StageRing = NULL;
    this->DMY_JukeBox_Image = NULL;
    this->TXT_Cost = NULL;
}

void UCommonItemIcon::SetupRewardTexture(ERewardType InRewardType, UTexture2D* Texture, int32 NumItem, bool bMatchSize) {
}

void UCommonItemIcon::SetTextureImpl(UTexture2D* Texture, bool bMatchSize) {
}

void UCommonItemIcon::SetStickerImage_Implementation(UTexture2D* Texture) {
}

void UCommonItemIcon::SetGadgetTexture_Implementation(UTexture2D* Texture) {
}

void UCommonItemIcon::SetGadgetCost(int32 Value) {
}

bool UCommonItemIcon::SetActiveWidgetIndexByRewardType(ERewardType InRewardType) {
    return false;
}

void UCommonItemIcon::SetActiveWidgetIndex(int32 InIndex) {
}



