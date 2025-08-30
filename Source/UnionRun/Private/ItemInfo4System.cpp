#include "ItemInfo4System.h"

FItemInfo4System::FItemInfo4System() {
    this->ItemId = EItemId::NonItem;
    this->DefualtCapacity = 0;
    this->DeplatedTempCapacity = 0;
    this->DefualtCapacity4TT = 0;
    this->ItemCatagoryType = EItemCategoryType::Non;
    this->ItemThorwType = EItemThrowType::Front;
    this->ItemUseType = EItemUseType::Once;
    this->bCancleStableItem = false;
}

