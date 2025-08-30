#include "CharaMachineSelectSequence.h"

ACharaMachineSelectSequence::ACharaMachineSelectSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}





void ACharaMachineSelectSequence::SetupCharaMachineSelectWindow() {
}

void ACharaMachineSelectSequence::SetSaveRequest(bool IsSave) {
}

void ACharaMachineSelectSequence::SetNextMenuSequenceSubState_Implementation(EMenuSequenceSubState InState) {
}

void ACharaMachineSelectSequence::SetNextMenuSequenceState(EMenuSequenceMainState InState) {
}

void ACharaMachineSelectSequence::SetIsParentSequenceReady(bool Value) {
}

void ACharaMachineSelectSequence::ResetCharaMachineSelectWindow() {
}


void ACharaMachineSelectSequence::PlayVoice(int32 InPlayerIndex, EDriverId InDriverId) {
}



bool ACharaMachineSelectSequence::IsSaveRequest() const {
    return false;
}

bool ACharaMachineSelectSequence::IsParentSequenceReady() const {
    return false;
}


void ACharaMachineSelectSequence::FocusCharaIcon(int32 InPlayerControllerIndex, int32 InCharaIndex) {
}


void ACharaMachineSelectSequence::ExitCharaMachineSelectWindow() {
}

void ACharaMachineSelectSequence::DeleteLocalPlayer() {
}

void ACharaMachineSelectSequence::DecideCharaIcon(int32 InPlayerControllerIndex, int32 InCharaIndex) {
}

void ACharaMachineSelectSequence::CreateLocalPlayer() {
}




