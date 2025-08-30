#include "HoldItemData.h"

FHoldItemData::FHoldItemData() {
    this->ID = EItemId::NonItem;
    this->SpawnTime = 0.00f;
    this->bLeftHand = false;
    this->MovementSpeed = 0.00f;
}

