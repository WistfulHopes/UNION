#include "MinimapIconData.h"

FMinimapIconData::FMinimapIconData() {
    this->Rotation = 0.00f;
    this->SpinTime = 0.00f;
    this->DriverId = 0;
    this->PlayerIndex = 0;
    this->GroupIndex = 0;
    this->MinimapIconType = EMinimapIconType::Character;
    this->ItemId = EItemId::NonItem;
    this->Visibility = ESlateVisibility::Visible;
    this->ZOrder = 0;
    this->bPlayer = false;
    this->bLocalMulti = false;
    this->bRival = false;
    this->bPowerRival = false;
    this->bReader = false;
}

