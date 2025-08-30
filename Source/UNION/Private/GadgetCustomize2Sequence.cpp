#include "GadgetCustomize2Sequence.h"

AGadgetCustomize2Sequence::AGadgetCustomize2Sequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AGadgetCustomize2Sequence::SetNextGadgetCustomizeState(EGadgetCustomize2SequenceState InState) {
}

EGadgetCustomize2SequenceState AGadgetCustomize2Sequence::GetCurrentGadgetCustomizeState() const {
    return EGadgetCustomize2SequenceState::Init;
}


