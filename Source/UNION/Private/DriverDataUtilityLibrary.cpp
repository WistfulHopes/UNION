#include "DriverDataUtilityLibrary.h"

UDriverDataUtilityLibrary::UDriverDataUtilityLibrary() {
}

bool UDriverDataUtilityLibrary::UnloadDriverVoice() {
    return false;
}

bool UDriverDataUtilityLibrary::LoadDriverVoice() {
    return false;
}

bool UDriverDataUtilityLibrary::IsSkinDriverId(const EDriverId InDriverId) {
    return false;
}

void UDriverDataUtilityLibrary::InitUserDriverData() {
}

void UDriverDataUtilityLibrary::GetSkinDriverIdArray(const EDriverId InDriverId, const bool bInCheckSelectable, TArray<EDriverId>& OutSkinDriverIdArray) {
}

void UDriverDataUtilityLibrary::GetSkinCharaSelectIndexArray(const int32 InCharaSelectIndex, const bool bInCheckSelectable, TArray<int32>& OutSkinCharaSelectIndexArray) {
}

EDriverId UDriverDataUtilityLibrary::GetOriginalDriverId(EDriverId InDriverId) {
    return EDriverId::Sonic;
}

FText UDriverDataUtilityLibrary::GetDriverNameText(EDriverId DriverId) {
    return FText::GetEmpty();
}

EDriverId UDriverDataUtilityLibrary::GetDriverIdByCharaSelectIndex(int32 InCharaSelectIndex) {
    return EDriverId::Sonic;
}

TSoftObjectPtr<UTexture2D> UDriverDataUtilityLibrary::GetDriverIconSoftTexture2D(EDriverId DriverId, bool IsRival) {
    return NULL;
}

void UDriverDataUtilityLibrary::GetDriverData(const EDriverId InDriverId, FDriverData& OutDriverData) {
}

int32 UDriverDataUtilityLibrary::GetCharaSelectIndexByDriverId(EDriverId InDriverId) {
    return 0;
}

TMap<int32, EDriverId> UDriverDataUtilityLibrary::DownSortIntDriverIdMap(TMap<int32, EDriverId> Map) {
    return TMap<int32, EDriverId>();
}

void UDriverDataUtilityLibrary::Debug_SetAllDriverSelectable(bool bSetNewFlag) {
}

bool UDriverDataUtilityLibrary::CheckNewSkinExist(const EDriverId InDriverId) {
    return false;
}


