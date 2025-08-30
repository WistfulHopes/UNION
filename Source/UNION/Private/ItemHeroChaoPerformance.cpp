#include "ItemHeroChaoPerformance.h"
#include "AtomComponent.h"
#include "NiagaraComponent.h"

AItemHeroChaoPerformance::AItemHeroChaoPerformance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeroChaoNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("HeroChaoEffect"));
    this->HeroChaoSoundComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("HeroChaoSE"));
    this->HeroChaoNiagaraComponent->SetupAttachment(RootComponent);
    this->HeroChaoSoundComponent->SetupAttachment(RingRoot);
}


