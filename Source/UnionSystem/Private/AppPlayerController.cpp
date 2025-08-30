#include "AppPlayerController.h"

AAppPlayerController::AAppPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->InputDataAsset = NULL;
    this->LastHoveredObject = NULL;
}

void AAppPlayerController::UnregisterSubMenu() {
}

bool AAppPlayerController::UnregisterSingleSubMenu(const UObject* InMenuObject) {
    return false;
}

bool AAppPlayerController::UnregisterSingleMenu(const UObject* InMenuObject) {
    return false;
}

void AAppPlayerController::UnregisterMenu() {
}

void AAppPlayerController::UnregisterMainMenuAll() {
}

bool AAppPlayerController::UnregisterMainMenu(const UObject* InObject) {
    return false;
}

void AAppPlayerController::SetLastHoveredObject(UObject* HoveredObject) {
}

void AAppPlayerController::SetInputBlocked(bool InBlocked) {
}

void AAppPlayerController::SetForceNonConsumeMouseEvent(bool bEnable) {
}

void AAppPlayerController::SetEnableSubMenuUpperPriority(bool IsEnable, int32 InPrioirty) {
}

void AAppPlayerController::SetEnableSubMenuLowerPriority(bool IsEnable, int32 InPrioirty) {
}

void AAppPlayerController::SetEnableSubMenuAll(bool IsEnable) {
}

void AAppPlayerController::SetEnableSubMenu(const UObject* InObject, bool IsEnable) {
}

void AAppPlayerController::SetEnableMainMenuUpperPriority(bool IsEnable, int32 InPrioirty) {
}

void AAppPlayerController::SetEnableMainMenuLowerPriority(bool IsEnable, int32 InPrioirty) {
}

void AAppPlayerController::SetEnableMainMenuAll(bool IsEnable) {
}

void AAppPlayerController::SetEnableMainMenu(const UObject* InObject, bool IsEnable) {
}

void AAppPlayerController::SetCurrentInputConfig(const FName InputConfigName) {
}

void AAppPlayerController::RegisterMenu(UObject* InMenuObject, int32 InPriority) {
}

void AAppPlayerController::RegisterMainMenu(UObject* InObject, EMainMenuRegistPriority InPriority) {
}

void AAppPlayerController::OnMousePointerUp(FPointerEvent InPointerEvent) {
}


void AAppPlayerController::OnMousePointer(FPointerEvent InPointerEvent) {
}

void AAppPlayerController::OnLeftStickVectorAxisEvent(FVector InStickVector) {
}




FName AAppPlayerController::GetSystemFocusedWidgetName() const {
    return NAME_None;
}

TArray<UObject*> AAppPlayerController::GetRegisteredSubMenu() const {
    return TArray<UObject*>();
}

UObject* AAppPlayerController::GetRegisteredMenu() const {
    return NULL;
}

FKey AAppPlayerController::GetRaceConfigKey(const FName& InActionName, bool IsPrimary, bool IsGamepad) {
    return FKey{};
}

FKey AAppPlayerController::GetMenuConfigKey(const FName& InActionName, bool IsGamepad, bool IsAnalog) {
    return FKey{};
}

FKey AAppPlayerController::GetMappableKeyByMappingName(const FName& MappingName) {
    return FKey{};
}

FVector2D AAppPlayerController::GetLeftStickAxisValue() const {
    return FVector2D{};
}

UObject* AAppPlayerController::GetLastHoveredObject() {
    return NULL;
}

EAppControllerInputType AAppPlayerController::GetCurrentInputType() {
    return EAppControllerInputType::Mouse;
}

void AAppPlayerController::DoInputMenu(EMenuInputKey InKey) {
}

void AAppPlayerController::ClearUserFocus() {
}

void AAppPlayerController::CalcTutorialControllerType(uint8& Type, uint8& Platform) {
}

bool AAppPlayerController::CalcIsMousePositionInViewport() {
    return false;
}

void AAppPlayerController::ApplyOptionControllerSettings() {
}

void AAppPlayerController::AddRegisterSubMenu(UObject* InMenuObject, int32 InPriority) {
}


