#include "DialogueEventManagerBase.h"

ADialogueEventManagerBase::ADialogueEventManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CubotActor = NULL;
    this->OrbotActor = NULL;
    this->DodonpaActor = NULL;
    this->DisplayActor = NULL;
}

void ADialogueEventManagerBase::DestroyActorObject() {
}

void ADialogueEventManagerBase::CreateActorObject() {
}


