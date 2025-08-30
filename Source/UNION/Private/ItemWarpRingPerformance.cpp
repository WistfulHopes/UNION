#include "ItemWarpRingPerformance.h"
#include "UnionAtomComponent.h"

AItemWarpRingPerformance::AItemWarpRingPerformance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WarpStartSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("WarpStartSoundComponent"));
    this->WarpEndSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("WarpEndSoundComponent"));
    this->bIsInWarpRingExit = false;
    this->bIsTeamWarp = false;
    this->WarpEndSound->SetupAttachment(RingChildActorComponent);
    this->WarpStartSound->SetupAttachment(RingChildActorComponent);
}


