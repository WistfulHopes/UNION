#include "HoldItemPoolLibrary.h"

UHoldItemPoolLibrary::UHoldItemPoolLibrary() {
}

void UHoldItemPoolLibrary::ResetHoldItem(AHoldItem* Item) {
}

void UHoldItemPoolLibrary::PopulatePool(const EHoldItemPoolQuality Quality) {
}

bool UHoldItemPoolLibrary::IsCompleted() {
    return false;
}

EHoldItemMeshType UHoldItemPoolLibrary::GetHoldItemMeshType(const int32 RacerIndex, const EItemId ItemId) {
    return EHoldItemMeshType::StaticMesh;
}

AHoldItem* UHoldItemPoolLibrary::GetHoldItem(const int32 RacerIndex, const EItemId ItemId) {
    return NULL;
}


