#include "ContentsItemHelper.h"

UContentsItemHelper::UContentsItemHelper() {
}

void UContentsItemHelper::GetUnlockItemList(TArray<FContentItem>& CheckItemList) {
}

bool UContentsItemHelper::GetIsStickerReleased(int32 stickerId) {
    return false;
}

bool UContentsItemHelper::GetIsMachineReleased(EMachineId MachineId) {
    return false;
}

void UContentsItemHelper::GetIsItemReleased(FContentItem CheckItem, bool& IsReleased) {
}

bool UContentsItemHelper::GetIsHornReleased(EMachineHornType hornId) {
    return false;
}

bool UContentsItemHelper::GetIsHonorTitleReleased(int32 HonorTitleId) {
    return false;
}

bool UContentsItemHelper::GetIsGadgetReleased(EGadgetId gadgetId) {
    return false;
}

bool UContentsItemHelper::GetIsCharacterReleased(EDriverId DriverId) {
    return false;
}

bool UContentsItemHelper::GetIsAuraReleased(EMachineAuraId AuraId) {
    return false;
}

void UContentsItemHelper::GetCanUseItemList(EGameModeId GameModeID, TArray<FContentItem>& CheckItemList) {
}

void UContentsItemHelper::GetCanUseDLCStageList(TArray<FContentItem>& CheckItemList) {
}

bool UContentsItemHelper::ForceGetIsMachineReleased(EMachineId MachineId) {
    return false;
}

void UContentsItemHelper::ForceGetIsItemReleased(FContentItem CheckItem, bool& IsReleased) {
}

bool UContentsItemHelper::ForceGetIsHonorTitleReleased(int32 HonorTitleId) {
    return false;
}

bool UContentsItemHelper::ForceGetIsGadgetReleased(EGadgetId gadgetId) {
    return false;
}

bool UContentsItemHelper::ForceGetIsCharacterReleased(EDriverId DriverId) {
    return false;
}


