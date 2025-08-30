#include "KeyConfigItem.h"

UKeyConfigItem::UKeyConfigItem() {
}

void UKeyConfigItem::SetSecondaryKey(const FKey& Key) {
}

void UKeyConfigItem::SetPrimaryKey(const FKey& Key) {
}

void UKeyConfigItem::ResetToDefault() {
}

bool UKeyConfigItem::IsCustomized() const {
    return false;
}

FName UKeyConfigItem::GetSecondaryMappingName() const {
    return NAME_None;
}

FKey UKeyConfigItem::GetSecondaryKey() const {
    return FKey{};
}

FKey UKeyConfigItem::GetSecondaryDefaultKey() const {
    return FKey{};
}

FName UKeyConfigItem::GetPrimaryMappingName() const {
    return NAME_None;
}

FKey UKeyConfigItem::GetPrimaryKey() const {
    return FKey{};
}

FKey UKeyConfigItem::GetPrimaryDefaultKey() const {
    return FKey{};
}

FText UKeyConfigItem::GetDisplayName() const {
    return FText::GetEmpty();
}


