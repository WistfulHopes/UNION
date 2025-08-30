#include "GadgetParameterDataAsset.h"

UGadgetParameterDataAsset::UGadgetParameterDataAsset() {
    this->ChargeRateMax = 3.00f;
    this->bUseMaxChargeRate = false;
    this->AirTrickPlayRateMax = 3.00f;
    this->QuickAirTrick_bMultiplyParameter = false;
    this->ShortenDamagetTime.AddDefaulted(6);
    this->ShortenItemSlotTime.AddDefaulted(6);
}


