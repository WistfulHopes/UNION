#include "AppPlayerControllerSubsystem.h"

UAppPlayerControllerSubsystem::UAppPlayerControllerSubsystem() {
    this->CurrentButtonTexture = NULL;
    this->FKeyToControllerTextureIndex = NULL;
    this->CurrentDisplayKeyboardLayout = 0;
    this->CurrentDisplayKeytopPattern = 0;
    this->AppPlayerControllers.AddDefaulted(1);
}

void UAppPlayerControllerSubsystem::UpdateButtonMaterialByDeviceType(uint8 DeviceType) {
}

void UAppPlayerControllerSubsystem::SetTextureForButtonMaterials(UObject* InTextureObj) {
}

AAppPlayerController* UAppPlayerControllerSubsystem::SetPlayer(int32 ControllerId, APlayerController* PlayerController) {
    return NULL;
}

void UAppPlayerControllerSubsystem::SetButtonTextureType(EControllerButtonTextureType InTextureType) {
}

void UAppPlayerControllerSubsystem::RemovePlayer(int32 ControllerId, bool bDestroyPawn) {
}

void UAppPlayerControllerSubsystem::RemoveDeviceChangeInterface(int32 InPlayerControllerIndex, UObject* InIFObject) {
}

UTexture2D* UAppPlayerControllerSubsystem::GetMenuMouseButtonTexture() {
    return NULL;
}

UTexture2D* UAppPlayerControllerSubsystem::GetMenuKeyboardButtonTexture() {
    return NULL;
}

uint8 UAppPlayerControllerSubsystem::GetCurrentDisplayKeytopPattern(int32 InPlayerIndex) const {
    return 0;
}

UTexture2D* UAppPlayerControllerSubsystem::GetCurrentDeviceTexture() {
    return NULL;
}

int32 UAppPlayerControllerSubsystem::GetControllerTextureIndexFromFKey(const FKey& InKey) {
    return 0;
}

AAppPlayerController* UAppPlayerControllerSubsystem::GetAppPlayerController(int32 ControllerId) {
    return NULL;
}

AAppPlayerController* UAppPlayerControllerSubsystem::CreatePlayer(int32 ControllerId, bool bSpawnPlayerController) {
    return NULL;
}

void UAppPlayerControllerSubsystem::CallChangeControllerInputType(int32 InPlayerControllerIndex, EAppControllerInputType InControllerInputType) {
}

EAppControllerInputType UAppPlayerControllerSubsystem::CalcCurrentDeviceButtonTexture(int32 PlayerControllerIndex, UTexture2D*& OutTexure) {
    return EAppControllerInputType::Mouse;
}

void UAppPlayerControllerSubsystem::AddDeviceChangeInterface(int32 InPlayerControllerIndex, UObject* InIFObject) {
}


