#include "FestaSignage.h"

AFestaSignage::AFestaSignage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsTopSignage = false;
    this->TopMenuNotFestaEmissiveStrength = 2.00f;
    this->TopMenuStartingEmissiveStrength = 0.60f;
    this->FestaLobbyEmissiveStrength = 3.50f;
}

void AFestaSignage::Setup(bool bInIsTop) {
}


