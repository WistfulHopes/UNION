#include "MenuPlayerController.h"

AMenuPlayerController::AMenuPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void AMenuPlayerController::SetMenuDirectionKeyEnable(bool bEnableDirection) {
}

bool AMenuPlayerController::GetMenuDirectionKeyEnable() const {
    return false;
}


