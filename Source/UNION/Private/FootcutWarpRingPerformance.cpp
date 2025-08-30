#include "FootcutWarpRingPerformance.h"
#include "UnionAtomComponent.h"

AFootcutWarpRingPerformance::AFootcutWarpRingPerformance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WarpStartSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("WarpStartSound"));
    this->WarpEndSound = CreateDefaultSubobject<UUnionAtomComponent>(TEXT("WarpEndSound"));
    this->CarInvisibleTimeRatio = 0.90f;
    this->WarpEndSound->SetupAttachment(RingRoot);
    this->WarpStartSound->SetupAttachment(RingRoot);
}


