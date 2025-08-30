#include "GameHttpSubsystem.h"

UGameHttpSubsystem::UGameHttpSubsystem() {
}

void UGameHttpSubsystem::SendToServerRawCallbacked(const FGameHttpRequestOption& Option, const FString& ApiName, const FString& Data, FHttpReceivedDelegate Callback) {
}

int32 UGameHttpSubsystem::SendToServerRaw(const FGameHttpRequestOption& Option, const FString& ApiName, const FString& Data) {
    return 0;
}

bool UGameHttpSubsystem::ReceiveFromServerRaw(int32 Handle, FString& OutData, bool& OutError) {
    return false;
}


