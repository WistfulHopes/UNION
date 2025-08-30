#include "NotificationWindowState.h"
#include "EMenuSequenceSubState.h"

UNotificationWindowState::UNotificationWindowState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultStateName = TEXT("NotificationWindow");
    this->DefaultMenuState = EMenuSequenceSubState::NotificationWindow;
}


