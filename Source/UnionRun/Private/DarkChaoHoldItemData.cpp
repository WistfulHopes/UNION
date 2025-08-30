#include "DarkChaoHoldItemData.h"

FDarkChaoHoldItemData::FDarkChaoHoldItemData() {
    this->ItemId = EItemId::NonItem;
    this->IsRareItem = false;
    this->MeshType = 0;
    this->IsIncludeUsableTimes = false;
    this->SkeletalMeshData = NULL;
    this->AnimClass = NULL;
    this->AnimAsset = NULL;
    this->TwiceTimesAnimAsset = NULL;
    this->OnceTimeAnimAsset = NULL;
}

