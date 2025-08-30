#include "GadgetData.h"

FGadgetData::FGadgetData() {
    this->bIsEnabled = false;
    this->ID = EGadgetId::NonGadget;
    this->Category = EGadgetCategory::Item;
    this->IconIndex = 0;
    this->Weight = 0;
    this->SizeX = 0;
    this->SizeY = 0;
    this->bIsDefault = false;
    this->Price = 0;
    this->plateId = EGadgetPlateId::Rank0;
    this->bIsTimeTrialEnabled = false;
    this->GadgetCustomSortId = 0;
    this->bInvisibleGadgetCustom = false;
}

