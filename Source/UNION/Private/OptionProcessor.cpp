#include "OptionProcessor.h"
#include "OptionAudioSequence.h"
#include "OptionControlSequence.h"
#include "OptionGraphicSequence.h"
#include "OptionLanguageSequence.h"
#include "OptionOnlineSequence.h"
#include "OptionRaceSequence.h"

AOptionProcessor::AOptionProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RaceSequence = CreateDefaultSubobject<UOptionRaceSequence>(TEXT("RaceSequence"));
    this->ControlSequence = CreateDefaultSubobject<UOptionControlSequence>(TEXT("ControlSequence"));
    this->LanguageSequence = CreateDefaultSubobject<UOptionLanguageSequence>(TEXT("LanguageSequence"));
    this->GraphicSequence = CreateDefaultSubobject<UOptionGraphicSequence>(TEXT("GraphicSequence"));
    this->AudioSequence = CreateDefaultSubobject<UOptionAudioSequence>(TEXT("AudioSequence"));
    this->OnlineSequence = CreateDefaultSubobject<UOptionOnlineSequence>(TEXT("OnlineSequence"));
    this->AutoActive = true;
    this->OptionWidget = NULL;
    this->CurrentSequence = NULL;
}

void AOptionProcessor::OnExitFromWidget() {
}

void AOptionProcessor::OnChangeTab(EOptionTab prev, EOptionTab Next) {
}

void AOptionProcessor::ChangeButtonImageEvent() {
}


