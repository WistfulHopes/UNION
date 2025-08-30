#include "UnionContentUtils.h"

UUnionContentUtils::UUnionContentUtils() {
}

void UUnionContentUtils::RequestCheckContent(bool bEnableMasterData) {
}

bool UUnionContentUtils::IsStickerReleased(int32 stickerId) {
    return false;
}

bool UUnionContentUtils::IsMachineTirePartsReleased(EMachineId MachineId) {
    return false;
}

bool UUnionContentUtils::IsMachineRearPartsReleased(EMachineId MachineId) {
    return false;
}

bool UUnionContentUtils::IsMachineFrontPartsReleased(EMachineId MachineId) {
    return false;
}

bool UUnionContentUtils::IsHornReleased(EMachineHornType hornId) {
    return false;
}

bool UUnionContentUtils::IsHonorTitleReleased(int32 HonorTitleId) {
    return false;
}

bool UUnionContentUtils::IsGadgetReleased(EGadgetId gadgetId) {
    return false;
}

bool UUnionContentUtils::IsCharacterReleased(EDriverId DriverId) {
    return false;
}

bool UUnionContentUtils::IsBusyCheckContent() {
    return false;
}

bool UUnionContentUtils::IsAuraReleased(EMachineAuraId AuraId) {
    return false;
}

void UUnionContentUtils::GetUseItemList(EGameModeId GameModeID, const TArray<FContentItem>& CheckItemList, TArray<FContentItem>& UnlockItemList) {
}

void UUnionContentUtils::GetIsItemReleased(FContentItem CheckItem, bool& IsReleased) {
}

bool UUnionContentUtils::CanUseSticker(int32 stickerId) {
    return false;
}

bool UUnionContentUtils::CanUseStageByGameMode(EGameModeId GameModeID, EStageId StageId) {
    return false;
}

bool UUnionContentUtils::CanUseMachine(EMachineId MachineId) {
    return false;
}

bool UUnionContentUtils::CanUseHonorTitle(int32 HonorTitleId) {
    return false;
}

bool UUnionContentUtils::CanUseCharacter(EDriverId DriverId) {
    return false;
}

bool UUnionContentUtils::CanUseAlbum(int32 AlbumID) {
    return false;
}


