#include "SaveAndLoadPlayLogState.h"
#include "EMenuSequenceMainState.h"

USaveAndLoadPlayLogState::USaveAndLoadPlayLogState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("SaveAndLoadPlayLog");
    this->DefaultMenuState = EMenuSequenceMainState::SaveAndLoadPlayLog;
}

void USaveAndLoadPlayLogState::OnPlayLogSaveComplete(ESaveDataStatus Status) {
}

void USaveAndLoadPlayLogState::OnPlayLogLoadComplete(ESaveDataStatus Status) {
}


