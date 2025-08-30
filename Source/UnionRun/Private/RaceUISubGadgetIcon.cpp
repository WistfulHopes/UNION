#include "RaceUISubGadgetIcon.h"

URaceUISubGadgetIcon::URaceUISubGadgetIcon() : UUserWidget(FObjectInitializer::Get()) {
}


void URaceUISubGadgetIcon::SetGadgetId(EGadgetId InGadgetId) {
}

EGadgetId URaceUISubGadgetIcon::GetGadgetId() const {
    return EGadgetId::NonGadget;
}


