#include "AbsorbedObjectInfo.h"

FAbsorbedObjectInfo::FAbsorbedObjectInfo() {
    this->AbsorbedObject = NULL;
    this->Mesh = NULL;
    this->RingType = ETakeRingType::Non;
    this->RingNum = 0;
    this->ItemBoxType = EItemBoxType::Normal;
    this->itemType = EItemId::NonItem;
    this->bFroceStartFromCenter = false;
    this->bOnlyVisibleHolder = false;
}

