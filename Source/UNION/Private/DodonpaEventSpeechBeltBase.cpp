#include "DodonpaEventSpeechBeltBase.h"
#include "Templates/SubclassOf.h"

UDodonpaEventSpeechBeltBase::UDodonpaEventSpeechBeltBase() : UUserWidget(FObjectInitializer::Get()) {
    this->TXT_Dialogue = NULL;
    this->DialogueDecorator = NULL;
    this->TXT_Name = NULL;
    this->DSP_SpeechArrow = NULL;
    this->SpeechBelt_In = NULL;
    this->SpeechBelt_Out = NULL;
}

void UDodonpaEventSpeechBeltBase::StartWaitAllowInput() {
}

void UDodonpaEventSpeechBeltBase::SetText(FText CharacterName, FText Message) {
}

void UDodonpaEventSpeechBeltBase::SetSequentialText(FText CharacterName, FText Message) {
}

void UDodonpaEventSpeechBeltBase::SetDecorator(TSubclassOf<URichTextBlockDecorator> TextBlockDecorator) {
}

void UDodonpaEventSpeechBeltBase::Open() {
}

void UDodonpaEventSpeechBeltBase::HandleAcceptKeyPressed() {
}

void UDodonpaEventSpeechBeltBase::Close() {
}

void UDodonpaEventSpeechBeltBase::AllowInput() {
}


