#include "BootSequence.h"

ABootSequence::ABootSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlatformSignIn = NULL;
}

void ABootSequence::SetNextBootSequenceState(EBootSequenceState InState) {
}

void ABootSequence::OnUpdateStateSignInPlatform_Implementation(float DeltaTime) {
}

void ABootSequence::OnUpdateStateInitializePlatform_Implementation(float DeltaTime) {
}

void ABootSequence::OnUpdateStateCheckPSParentalControl_Implementation(float DeltaTime) {
}

void ABootSequence::OnUpdateStateCheckGDKCrossPlay_Implementation(float DeltaTime) {
}

void ABootSequence::OnUpdateStateCheckContent_Implementation(float DeltaTime) {
}

void ABootSequence::OnInitStateSignInPlatform_Implementation() {
}

void ABootSequence::OnInitStateInitializePlatform_Implementation() {
}

void ABootSequence::OnInitStateIdle_Implementation() {
}

void ABootSequence::OnInitStateExit_Implementation() {
}

void ABootSequence::OnInitStateCheckPSParentalControl_Implementation() {
}

void ABootSequence::OnInitStateCheckGDKCrossPlay_Implementation() {
}

void ABootSequence::OnInitStateCheckContent_Implementation() {
}

void ABootSequence::OnExitStateSignInPlatform_Implementation() {
}

void ABootSequence::OnExitStateInitializePlatform_Implementation() {
}

void ABootSequence::OnExitStateCheckPSParentalControl_Implementation() {
}

void ABootSequence::OnExitStateCheckGDKCrossPlay_Implementation() {
}

void ABootSequence::OnExitStateCheckContent_Implementation() {
}


