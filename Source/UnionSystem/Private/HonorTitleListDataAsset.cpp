#include "HonorTitleListDataAsset.h"

UHonorTitleListDataAsset::UHonorTitleListDataAsset() {
    this->HonorTitleCompositeDataTable = NULL;
}

void UHonorTitleListDataAsset::Update() {
}

bool UHonorTitleListDataAsset::GetIsHonorTitleDLC(int32 HonorTitleIndex) const {
    return false;
}

FText UHonorTitleListDataAsset::GetHonorTitleVBName(int32 HonorTitleId, bool& IsValid) const {
    return FText::GetEmpty();
}

int32 UHonorTitleListDataAsset::GetHonorTitleRarity(int32 HonorTitleId) const {
    return 0;
}

TSoftObjectPtr<UTexture2D> UHonorTitleListDataAsset::GetHonorTitlePlate(int32 HonorTitleId) const {
    return NULL;
}

TArray<FHonorTitleListData> UHonorTitleListDataAsset::GetAllHonorTitleWithRarity(int32 Rarity) const {
    return TArray<FHonorTitleListData>();
}

TArray<FHonorTitleListData> UHonorTitleListDataAsset::GetAllHonorTitleAndIdWithRarity(int32 Rarity, TArray<int32>& outHonorTitleIdArray) const {
    return TArray<FHonorTitleListData>();
}

void UHonorTitleListDataAsset::ClearData() {
}


