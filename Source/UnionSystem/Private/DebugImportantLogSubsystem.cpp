#include "DebugImportantLogSubsystem.h"

UDebugImportantLogSubsystem::UDebugImportantLogSubsystem() {
    this->ImportantLogPanel = NULL;
    this->bPanelVisibility = true;
}

void UDebugImportantLogSubsystem::SetImportantLogPanelVisible(bool bNewVisible) {
}

void UDebugImportantLogSubsystem::SetImportantLogCount(int32 NewCount) {
}

UDebugImportantLogPanel* UDebugImportantLogSubsystem::GetImportantLogPanel() {
    return NULL;
}

void UDebugImportantLogSubsystem::AddImportantLog(const FString& LogLocation, const FString& LogString) {
}


