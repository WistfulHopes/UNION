#include "CharaSelectUtilityLibrary.h"

UCharaSelectUtilityLibrary::UCharaSelectUtilityLibrary() {
}

void UCharaSelectUtilityLibrary::UpdateCharaModel(UObject* WorldContextObject, int32 InPlayerIndex, int32 InCharaSelectIndex) {
}

void UCharaSelectUtilityLibrary::SetVisibleCaptureMachine(UObject* WorldContextObject, int32 InPlayerIndex, bool IsHidden) {
}

void UCharaSelectUtilityLibrary::SetArrayFlag(int32 InPlayerIndex, bool InFlag, TArray<bool>& InFlagArray) {
}

bool UCharaSelectUtilityLibrary::IsDriverSuper(EDriverId InDriverId) {
    return false;
}

bool UCharaSelectUtilityLibrary::IsDriverSelectable(UObject* WorldContextObject, EDriverId InDriverId) {
    return false;
}

EGameModeId UCharaSelectUtilityLibrary::GetLobbySelectedGameModeId(UObject* WorldContextObject) {
    return EGameModeId::None;
}

AActor* UCharaSelectUtilityLibrary::GetCaptureMachine(UObject* WorldContextObject, int32 InPlayerIndex) {
    return NULL;
}

bool UCharaSelectUtilityLibrary::GetArrayFlag(int32 InPlayerIndex, const TArray<bool>& InFlagArray) {
    return false;
}

void UCharaSelectUtilityLibrary::DisableMenuInputDirection(UObject* WorldContextObject, const ECharaSelectControlState CharaState, const EMachineSelectControlState MachineState, int32 InPlayerIndex) {
}


