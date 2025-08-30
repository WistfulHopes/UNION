#include "GadgetUIData2.h"

FGadgetUIData2::FGadgetUIData2() {
    this->gadgetId = EGadgetId::NonGadget;
    this->State = EGadgetState::Attachable;
    this->bIsNew = false;
    this->bCanPurchase = false;
    this->IndexInSelectWindow = 0;
    this->LocationXInSelectWindow = 0;
    this->LocationYInSelectWindow = 0;
}

