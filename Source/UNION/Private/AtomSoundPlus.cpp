#include "AtomSoundPlus.h"
#include "AtomComponentPlus.h"

AAtomSoundPlus::AAtomSoundPlus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAtomComponentPlus>(TEXT("AtomComponent0"));
    this->bFollow = false;
    this->AtomComponent = (UAtomComponentPlus*)RootComponent;
}


