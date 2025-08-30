#include "LocalStorageSubsystem.h"

ULocalStorageSubsystem::ULocalStorageSubsystem() {
}

void ULocalStorageSubsystem::SaveAsync(const FString& Filename, TArray<uint8>& InBuffer) {
}

void ULocalStorageSubsystem::LoadAsync(const FString& Filename, TArray<uint8>& OutBuffer) {
}

bool ULocalStorageSubsystem::IsBusy() {
    return false;
}

bool ULocalStorageSubsystem::Exists(const FString& Filename, ELocalStorageStatus& OutStatus) {
    return false;
}

void ULocalStorageSubsystem::Delete(const FString& Filename, ELocalStorageStatus& OutStatus) {
}


