#include "TodayRecordState.h"
#include "EMenuSequenceSubState.h"

UTodayRecordState::UTodayRecordState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("TodayRecord");
    this->DefaultMenuState = EMenuSequenceSubState::TodayRecord;
}


