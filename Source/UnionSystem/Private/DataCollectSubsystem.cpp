#include "DataCollectSubsystem.h"

UDataCollectSubsystem::UDataCollectSubsystem() {
}

FString UDataCollectSubsystem::CollectStringData(const FString& Name, const FString& Suffix, const FString& Data) {
    return TEXT("");
}

FString UDataCollectSubsystem::CollectScreenShot(const FString& Name) {
    return TEXT("");
}

FString UDataCollectSubsystem::CollectLevelName() {
    return TEXT("");
}

bool UDataCollectSubsystem::CollectCheckEnabled() {
    return false;
}

FString UDataCollectSubsystem::CollectChangeList() const {
    return TEXT("");
}

FString UDataCollectSubsystem::CollectCacheDirectory() {
    return TEXT("");
}

FString UDataCollectSubsystem::CollectBytesData(const FString& Name, const FString& Suffix, const TArray<uint8>& Data) {
    return TEXT("");
}


