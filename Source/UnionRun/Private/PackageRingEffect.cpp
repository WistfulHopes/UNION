#include "PackageRingEffect.h"

APackageRingEffect::APackageRingEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RacerIndex = 0;
    this->SoundPan = ESoundPan::Center;
    this->SoundPlayCount = 8;
    this->WaitStartSound = 1.00f;
    this->SoundInterval = 0.04f;
    this->FiveRingSoundPlayCount = 5;
    this->FiveRingWaitStartSound = 1.00f;
    this->FiveRingSoundInterval = 0.08f;
}



