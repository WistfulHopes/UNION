#include "MenuSequence.h"
#include "Components/ChildActorComponent.h"

AMenuSequence::AMenuSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerNameButtonClass = NULL;
    this->IsUseWirelessDebugSequence = false;
    this->CharaSelectPreloaderComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("CharaSelectPreloader"));
    this->SpeedMachineSelectPreloaderComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("SpeedMachineSelectPreloader"));
    this->AcceleMachineSelectPreloaderComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("AcceleMachineSelectPreloader"));
    this->HandleMachineSelectPreloaderComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("HandleMachineSelectPreloader"));
    this->PowerMachineSelectPreloaderComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PowerMachineSelectPreloader"));
    this->DashMachineSelectPreloaderComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("DashMachineSelectPreloader"));
    this->FrontPartsSelectPreloaderComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("FrontPartsSelectPreloader"));
    this->RearPartsSelectPreloaderComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("RearPartsSelectPreloader"));
    this->TirePartsSelectPreloaderComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("TirePartsSelectPreloader"));
}


void AMenuSequence::OnInitStateIdle_Implementation() {
}

void AMenuSequence::OnInitStateExit_Implementation() {
}

void AMenuSequence::OnChangeToTitleSequence(EUnionUIFadeDirection FadeDirection) {
}

void AMenuSequence::OnChangeToOnlineSequence(EUnionUIFadeDirection FadeDirection) {
}

void AMenuSequence::OnAcceptedInvite() {
}

void AMenuSequence::InitializeMenuSequence_Implementation() {
}

EMenuSequenceMainState AMenuSequence::GetMainStateID(EGameModeId GameModeID, bool IsCameBackFromRace, bool IsBackToTopMenu, bool IsBackToTitle) {
    return EMenuSequenceMainState::Idle;
}



