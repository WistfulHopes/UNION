#include "EmoteWheelState.h"
#include "EMenuSequenceSubState.h"

UEmoteWheelState::UEmoteWheelState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("EmoteWheel");
    this->DefaultMenuState = EMenuSequenceSubState::EmoteWheel;
    this->CanSendStamp = false;
    this->IsSendLimitTimerStamp = false;
    this->CanRecevStamp = true;
    this->bIsSquadLobby = false;
}


void UEmoteWheelState::SetIsSquadLobby(bool bInIsSquadlobby) {
}

void UEmoteWheelState::SetCanSendStamp(bool bInCanSendStamp) {
}

void UEmoteWheelState::SetCanRecevStamp(bool bInCanRecevStamp) {
}

void UEmoteWheelState::PlayEmoteAndStamp_Implementation(AMenuRacerBase* InRacer, int32 InButtonIndex, int32 InLobbyIndex) {
}

void UEmoteWheelState::OnInitialize_Implementation(UCanvasPanel* InCanvasPanel, UUnionUISceneBase* InBaseScene) {
}

bool UEmoteWheelState::GetCanSendStamp() {
    return false;
}

void UEmoteWheelState::EmoteWheelTimeUp_Implementation() {
}



