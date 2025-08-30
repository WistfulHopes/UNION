#include "ItemPackageRingObject.h"

AItemPackageRingObject::AItemPackageRingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SoundPlayCount = 10;
    this->WaitStartSound = 0.50f;
    this->SoundInterval = 0.20f;
}


