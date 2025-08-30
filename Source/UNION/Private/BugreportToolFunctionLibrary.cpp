#include "BugreportToolFunctionLibrary.h"

UBugreportToolFunctionLibrary::UBugreportToolFunctionLibrary() {
}

void UBugreportToolFunctionLibrary::BT_SetTicketInfo(int32 Revision, const FString& BuildData, const FString& AncillaryInfo, const FString& userName) {
}

void UBugreportToolFunctionLibrary::BT_SetExtensionParamPosition(FVector Position) {
}

void UBugreportToolFunctionLibrary::BT_SetCustomField(const FString& FieldName, const FString& Value) {
}

void UBugreportToolFunctionLibrary::BT_SetAdditionalDescription(const FString& Description) {
}

FString UBugreportToolFunctionLibrary::BT_PrintMemoryString(const FString& BT_InString, bool BT_bMemoryToLog, EBugreportToolLogType BT_memoryLogType) {
    return TEXT("");
}

void UBugreportToolFunctionLibrary::BT_LaunchBugReport() {
}

bool UBugreportToolFunctionLibrary::BT_IsLibraryInitialized() {
    return false;
}

bool UBugreportToolFunctionLibrary::BT_IsErrorHandling() {
    return false;
}

void UBugreportToolFunctionLibrary::BT_AddAttachedFile(const FString& Path) {
}


