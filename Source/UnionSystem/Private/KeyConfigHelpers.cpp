#include "KeyConfigHelpers.h"

UKeyConfigHelpers::UKeyConfigHelpers() {
}

void UKeyConfigHelpers::SetCustomKeyConfigs(int32 InPlayerControllerIndex, const TMap<FName, FKey>& InCustomKeyConfigs) {
}

void UKeyConfigHelpers::SetAssignedKey(int32 InPlayerControllerIndex, const FName& MappingName, const FKey& NewKey) {
}

void UKeyConfigHelpers::GetKeyConfigItems(int32 InPlayerControllerIndex, const FInputConfig& InputConfig, EKeyConfigDeviceType Type, TMap<FName, UKeyConfigItem*>& OutKeyConfigItems) {
}

FName UKeyConfigHelpers::GetInputConfigNameFromOperationType(EKeyConfigOperationType OperationType) {
    return NAME_None;
}

bool UKeyConfigHelpers::GetCustomKeyConfigs(int32 InPlayerControllerIndex, TMap<FName, FKey>& OutCustomKeyConfigs) {
    return false;
}

FKey UKeyConfigHelpers::GetAssignedKey(int32 InPlayerControllerIndex, const FName& MappingName) {
    return FKey{};
}

bool UKeyConfigHelpers::FindInputConfig(UInputDataAsset* InputDataAsset, EKeyConfigOperationType OperationType, FInputConfig& OutInputConfig) {
    return false;
}

bool UKeyConfigHelpers::CompareCustomKeyConfigs(const TMap<FName, FKey>& CustomKeyConfigs1, const TMap<FName, FKey>& CustomKeyConfigs2) {
    return false;
}

void UKeyConfigHelpers::ClearCustomKeyConfigs(int32 InPlayerControllerIndex) {
}

void UKeyConfigHelpers::ClearAssignedKey(int32 InPlayerControllerIndex, const FName& MappingName) {
}

EControllerButtonType UKeyConfigHelpers::CalcButtonViewTypeByKey(const FKey& InKey) {
    return EControllerButtonType::GamePadFaceButton;
}


