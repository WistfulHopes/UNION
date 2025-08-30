#include "OptionOnlineSequence.h"

UOptionOnlineSequence::UOptionOnlineSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaitConnectPopup = NULL;
    this->ErrorConnectPopup = NULL;
}

void UOptionOnlineSequence::OnNetworkRecieve(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

void UOptionOnlineSequence::OnIndicatorDecisionEvent(uint8 kind, uint8 Val) {
}

void UOptionOnlineSequence::OnCompleteSave(ESaveDataStatus Status) {
}

void UOptionOnlineSequence::DestroyErrorWindow(UUnionUIButtonBase* Button, int32 panelIdx, int32 buttonIdx) {
}


