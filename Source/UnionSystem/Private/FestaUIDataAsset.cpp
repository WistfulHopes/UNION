#include "FestaUIDataAsset.h"

UFestaUIDataAsset::UFestaUIDataAsset() {
    this->FestaUIDataTable = NULL;
}

void UFestaUIDataAsset::Update() {
}

bool UFestaUIDataAsset::IsFestaUITableDataTeamUIDataArrayIndexFound(FName RowName, int32 Index) {
    return false;
}

void UFestaUIDataAsset::GetFestaUITeamUIDataByGroupColorId(int32 TeamId, EGroupColorId GroupColorID, TArray<FFestaTeamUIData>& ArrayData, bool& IsFound) {
}

TArray<TSoftObjectPtr<UTexture2D>> UFestaUIDataAsset::GetFestaUITableSignageTex(FName RowName) {
    return TArray<TSoftObjectPtr<UTexture2D>>();
}

FFestaTeamUIData UFestaUIDataAsset::GetFestaUITableDataTeamUIDataArrayIndex(FName RowName, int32 Index) {
    return FFestaTeamUIData{};
}

TArray<FFestaTeamUIData> UFestaUIDataAsset::GetFestaUITableDataTeamUIDataArray(int32 InFestaId) {
    return TArray<FFestaTeamUIData>();
}

void UFestaUIDataAsset::GetFestaUIData(int32 festaId, bool& bFoundData, FFestaUIData& FestaUIData) const {
}

void UFestaUIDataAsset::ClearData() {
}


