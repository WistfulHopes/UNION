#include "OnlinePlayerNameButton.h"

UOnlinePlayerNameButton::UOnlinePlayerNameButton() {
    this->SkipSelectSEOnlyOnce = false;
}



void UOnlinePlayerNameButton::SetViewportPosition_Implementation(FVector TargetWorldLocation, FVector2D Offset, FVector2D InCanvasSize) {
}

void UOnlinePlayerNameButton::SetSkipSelectSEOnlyOnce(bool Enabled) {
}





void UOnlinePlayerNameButton::SetContext_Implementation(FPlayerNameContext InContext) {
}


bool UOnlinePlayerNameButton::IsOwner() {
    return false;
}



