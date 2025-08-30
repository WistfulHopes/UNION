#include "UISubsystem.h"

UUISubsystem::UUISubsystem() {
    this->PopupWindow = NULL;
    this->RewardDisplayWidget = NULL;
    this->FriendListWidget = NULL;
    this->AdvertiseWidget = NULL;
    this->AutoSaveInfoWidget = NULL;
    this->ProfileErrorWidget = NULL;
}

UUserWidget* UUISubsystem::GetRewardDisplayWidget() {
    return NULL;
}

EPopupWindowType UUISubsystem::GetPopupWindowType() {
    return EPopupWindowType::Basic;
}

UUserWidget* UUISubsystem::GetFriendListWidget() {
    return NULL;
}

UUserWidget* UUISubsystem::GetAutoSaveInfoWidget() {
    return NULL;
}

UUserWidget* UUISubsystem::GetAdvertiseWidget() {
    return NULL;
}

void UUISubsystem::DestroyRewardDisplayWidget() {
}

void UUISubsystem::DestroyProfileErrorPopupWindow() {
}

void UUISubsystem::DestroyFriendListWidget() {
}

void UUISubsystem::DestroyAutoSaveInfoWidget() {
}

void UUISubsystem::DestroyAdvertiseWidget() {
}

UUserWidget* UUISubsystem::CreateRewardDisplayWidget() {
    return NULL;
}

UUserWidget* UUISubsystem::CreateProfileErrorPopupWindow() {
    return NULL;
}

UUserWidget* UUISubsystem::CreateFriendListWidget() {
    return NULL;
}

UUserWidget* UUISubsystem::CreateAutoSaveInfoWidget() {
    return NULL;
}

UUserWidget* UUISubsystem::CreateAdvertiseWidget() {
    return NULL;
}


