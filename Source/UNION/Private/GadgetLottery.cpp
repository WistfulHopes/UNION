#include "GadgetLottery.h"

UGadgetLottery::UGadgetLottery() {
}

void UGadgetLottery::Reset() {
}

EGadgetId UGadgetLottery::Lot(EGadgetId InCurrentGadgetId) {
    return EGadgetId::NonGadget;
}

int32 UGadgetLottery::GetSeed() const {
    return 0;
}


