#include "AppSequenceLogManagerSubsystem.h"

UAppSequenceLogManagerSubsystem::UAppSequenceLogManagerSubsystem() {
}

void UAppSequenceLogManagerSubsystem::SetSequenceType(ESequenceMainType MainType, ESequenceSubType SubType) {
}

void UAppSequenceLogManagerSubsystem::SetSequenceSubType(ESequenceSubType SubType) {
}

int32 UAppSequenceLogManagerSubsystem::GetSequenceTypeNum() const {
    return 0;
}

ESequenceSubType UAppSequenceLogManagerSubsystem::GetSequenceSubType() {
    return ESequenceSubType::None;
}

ESequenceMainType UAppSequenceLogManagerSubsystem::GetSequenceMainType() {
    return ESequenceMainType::None;
}

ESequenceSubType UAppSequenceLogManagerSubsystem::GetBackupSequenceSubType() {
    return ESequenceSubType::None;
}

ESequenceMainType UAppSequenceLogManagerSubsystem::GetBackupSequenceMainType() {
    return ESequenceMainType::None;
}

void UAppSequenceLogManagerSubsystem::BackupSequenceType() {
}


