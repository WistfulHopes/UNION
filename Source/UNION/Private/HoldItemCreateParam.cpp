#include "HoldItemCreateParam.h"

FHoldItemCreateParam::FHoldItemCreateParam() {
    this->ItemId = EItemId::NonItem;
    this->PackageRingNum = 0;
    this->ItemCount = 0;
    this->ThrowDirection = EItemThrowDirection::Front;
    this->bShowThrowDirection = false;
    this->GroupColorID = EGroupColorId::None;
    this->bGadgetLuckyItem = false;
}

