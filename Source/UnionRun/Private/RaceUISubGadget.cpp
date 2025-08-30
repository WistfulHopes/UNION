#include "RaceUISubGadget.h"

URaceUISubGadget::URaceUISubGadget() : UUserWidget(FObjectInitializer::Get()) {
}

bool URaceUISubGadget::IsNotEnableGadget(EGadgetId gadgetId) {
    return false;
}


