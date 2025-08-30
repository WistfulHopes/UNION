#include "ItemSlimePerformance.h"
#include "NiagaraComponent.h"
#include "ItemStaticBodyComponent.h"
#include "UnionAtomComponent.h"

AItemSlimePerformance::AItemSlimePerformance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlimeNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SlimeEffect"));
    this->SlimeDestroyedNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SlimeDestroyedEffect"));
    this->SlimeStaticBody = CreateDefaultSubobject<UItemStaticBodyComponent>(TEXT("StaticBody"));
    this->SlimeSoundComponent = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("SlimeSE"));
    this->SlimeAbsorbMesh = NULL;
    this->SlimeDestroyedNiagaraComponent->SetupAttachment(RingRoot);
    this->SlimeNiagaraComponent->SetupAttachment(RootComponent);
    this->SlimeSoundComponent->SetupAttachment(RingRoot);
    this->SlimeStaticBody->SetupAttachment(RingRoot);
}


