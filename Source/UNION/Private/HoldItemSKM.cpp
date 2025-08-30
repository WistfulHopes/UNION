#include "HoldItemSKM.h"
#include "HoldItemBlackBombComponent.h"

AHoldItemSKM::AHoldItemSKM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HoldItemBlackBombComponent = CreateDefaultSubobject<UHoldItemBlackBombComponent>(TEXT("BlackBombComponent"));
}


