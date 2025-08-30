#include "MariaUpload.h"

UMariaUpload::UMariaUpload() {
}

void UMariaUpload::UseSegaAccountOnWindows(bool Enable) {
}

void UMariaUpload::UseEnsureNSAAvailable(bool Enable) {
}

void UMariaUpload::UseAccountAuthInteraction_Switch(bool Enable) {
}

void UMariaUpload::TerminateUltThread() {
}

void UMariaUpload::TerminateNNLibraries() {
}

bool UMariaUpload::StartLogging() {
    return false;
}

void UMariaUpload::ShutdownLogging() {
}

void UMariaUpload::SetUserPickMode_GDK(EMariaXboxUserPickMode PickMode) {
}

void UMariaUpload::SetUserID(const FString& UserId) {
}

void UMariaUpload::SetUserAllowGuests_GDK(bool Allow) {
}

void UMariaUpload::SetupSteamEncryptedAppTicketAsync(UObject* WorldContextObject, FMariaAsyncCompletedDelegate Completed) {
}

void UMariaUpload::SetSuspended(bool Suspended) {
}

void UMariaUpload::SetSteamEncryptedAppTicket(const TArray<uint8>& Ticket) {
}

void UMariaUpload::SetSendQueueDelay(int32 Milliseconds) {
}

void UMariaUpload::SetSegaAccountDevMode(EMariaDevMode DevMode) {
}

void UMariaUpload::SetSaveSlot(int32 Slot) {
}

void UMariaUpload::SetPendingUntilNetworkAvailable_Switch(bool Enable) {
}

bool UMariaUpload::SetNetworkAccountFromUniqueNetID_Epic(const FUniqueNetIdRepl& UniqueNetId) {
    return false;
}

bool UMariaUpload::SetNetworkAccountFromPlayerController_Epic(APlayerController* PlayerController) {
    return false;
}

void UMariaUpload::SetNetworkAccount_Epic(const FString& EpicAccountID) {
}

void UMariaUpload::SetManualHeartbeatMode() {
}

void UMariaUpload::SetLogCategoryThreshold(EMariaDevelopLogCategory LogCategory) {
}

void UMariaUpload::SetLogCallback(const FMariaDevelopLogCallback& LogCallback) {
}

void UMariaUpload::SetInitializeParamUserHandle(bool& Success, bool& Cancelled, bool ShowUserSelector) {
}

void UMariaUpload::SetInitializeParamApplicationId_Switch(const FString& ApplicationID) {
}

void UMariaUpload::SetInitializeParamApplicationId_GDK(const FString& MSAAppID) {
}

void UMariaUpload::SetInFocus(bool InFocus) {
}

void UMariaUpload::SetHeartbeatDelay(int32 Seconds) {
}

void UMariaUpload::SetHaltSending(bool Halt) {
}

void UMariaUpload::SetDevMode(EMariaDevMode LogAuthDevMode, EMariaDevMode SegaAccountDevMode) {
}

void UMariaUpload::SetAuthenticateDevMode_Switch(EMariaDevMode DevMode) {
}

void UMariaUpload::SetAuthenticateDevMode_Steam(EMariaDevMode DevMode) {
}

void UMariaUpload::SetAuthenticateDevMode_GDK(EMariaDevMode DevMode) {
}

void UMariaUpload::SetAppInformations(const FString& AppID, const FString& PlatformId, const FString& Language, const FString& Region) {
}

void UMariaUpload::SetActive(bool Active) {
}

void UMariaUpload::SetAccessEndpointDevMode(EMariaDevMode DevMode) {
}

bool UMariaUpload::ResetSegaAccountID() {
    return false;
}

void UMariaUpload::RegenerateSessionID() {
}

void UMariaUpload::PushMessage(const FString& EventName) {
}

void UMariaUpload::PushHeartbeatManually() {
}

bool UMariaUpload::PreInitializeAuthSeq(int32 Phase) {
    return false;
}

void UMariaUpload::PostInitializeAuthSeq() {
}

void UMariaUpload::OpenConsole(const UObject* WorldContextObject) {
}

void UMariaUpload::nn_nifm_SubmitNetworkRequest() {
}

bool UMariaUpload::nn_nifm_IsNetworkRequestOnHold() {
    return false;
}

bool UMariaUpload::nn_nifm_IsNetworkAvailable() {
    return false;
}

void UMariaUpload::nn_nifm_CancelNetworkRequest() {
}

FString UMariaUpload::MakeQRCodeSvgString(const FMariaQRCode& QRCode, int32 Border) {
    return TEXT("");
}

FMariaQRCode UMariaUpload::MakeQRCode(const FString& Text, int32 ErrorCorrectionLevel) {
    return FMariaQRCode{};
}

EMariaInitializeAuthResult UMariaUpload::LoopInitializeAuthSeq(const FMariaInitializeAuthSeqUrlCallback& UrlCallback, const FMariaInitializeAuthSeqIdCallback& IdCallback) {
    return EMariaInitializeAuthResult::Pending;
}

void UMariaUpload::LogoutEOSAsync_Epic(UObject* WorldContextObject, APlayerController* PlayerController, FMariaAsyncCompletedDelegate Completed) {
}

void UMariaUpload::LoginEOSAsync_Epic(UObject* WorldContextObject, APlayerController* PlayerController, EMariaEpicLoginType LoginType, const FString& ID, const FString& Token, FMariaAsyncCompletedDelegate Completed) {
}

bool UMariaUpload::IsSegaAccountLinkStatusChecking() {
    return false;
}

bool UMariaUpload::IsSegaAccountLinkPending() {
    return false;
}

bool UMariaUpload::IsRunningUploading() {
    return false;
}

bool UMariaUpload::IsOnXbox() {
    return false;
}

bool UMariaUpload::IsOnMSPC() {
    return false;
}

bool UMariaUpload::IsLoggingAvailable() {
    return false;
}

bool UMariaUpload::IsInRecoveryWaitMode() {
    return false;
}

bool UMariaUpload::IsInitializeAuthSeqNeeded() {
    return false;
}

bool UMariaUpload::InitializeUltThread() {
    return false;
}

bool UMariaUpload::InitializeNNLibraries() {
    return false;
}

bool UMariaUpload::Initialize() {
    return false;
}

FString UMariaUpload::GetUserID() {
    return TEXT("");
}

FString UMariaUpload::GetSegaAccountID() {
    return TEXT("");
}

int32 UMariaUpload::GetRecoveryWaitModeCount() {
    return 0;
}

int32 UMariaUpload::GetPostNgCount() {
    return 0;
}

int32 UMariaUpload::GetPostErrorCount() {
    return 0;
}

FString UMariaUpload::GetPlatformString() {
    return TEXT("");
}

FString UMariaUpload::GetNetworkAccountString_Switch() {
    return TEXT("");
}

FString UMariaUpload::GetNetworkAccountString_Steam() {
    return TEXT("");
}

FString UMariaUpload::GetNetworkAccountString_PS() {
    return TEXT("");
}

FString UMariaUpload::GetNetworkAccountString_GDK() {
    return TEXT("");
}

FString UMariaUpload::GetNetworkAccount_Epic() {
    return TEXT("");
}

int32 UMariaUpload::GetMessagesNumInQueue() {
    return 0;
}

EMariaDevelopLogCategory UMariaUpload::GetLogCategoryThreshold() {
    return EMariaDevelopLogCategory::Verbose;
}

int32 UMariaUpload::GetAccessTokenNgCount() {
    return 0;
}

int32 UMariaUpload::GetAccessTokenErrorCount() {
    return 0;
}

int32 UMariaUpload::GetAccessTokenElapsedSeconds() {
    return 0;
}

FString UMariaUpload::GenerateTemporaryAccount() {
    return TEXT("");
}

UTexture2DDynamic* UMariaUpload::CreateQRCodeTextureDynamic(const FMariaQRCode& QRCode, int32 Border) {
    return NULL;
}

bool UMariaUpload::CheckSegaAccountLinkStatus() {
    return false;
}

void UMariaUpload::ChangeInitializeAuthSeqPhaseTo0() {
}

bool UMariaUpload::CanStartLogging() {
    return false;
}

void UMariaUpload::AddUserParameterTable(const FString& Key, const TArray<FMariaTableRow>& Value) {
}

void UMariaUpload::AddUserParameterStrings(const FString& Key, const FString& Value) {
}

void UMariaUpload::AddUserParameterMapStrings(const FString& Key, const TMap<FString, FString>& Value) {
}

void UMariaUpload::AddUserParameterMapString(const FString& Key, const TMap<FString, FString>& Value) {
}

void UMariaUpload::AddUserParameterMapInteger(const FString& Key, const TMap<FString, int32>& Value) {
}

void UMariaUpload::AddUserParameterMapFloat(const FString& Key, const TMap<FString, float>& Value) {
}

void UMariaUpload::AddUserParameterInteger(const FString& Key, int32 Value) {
}

void UMariaUpload::AddUserParameterFloat(const FString& Key, float Value) {
}

void UMariaUpload::AddUserParameterArrayStrings(const FString& Key, const TArray<FString>& Value) {
}

void UMariaUpload::AddUserParameterArrayInteger(const FString& Key, const TArray<int32>& Value) {
}

void UMariaUpload::AddUserParameterArrayFloat(const FString& Key, const TArray<float>& Value) {
}

void UMariaUpload::AddEventParameterTable(const FString& Key, const TArray<FMariaTableRow>& Value) {
}

void UMariaUpload::AddEventParameterStrings(const FString& Key, const FString& Value) {
}

void UMariaUpload::AddEventParameterMapStrings(const FString& Key, const TMap<FString, FString>& Value) {
}

void UMariaUpload::AddEventParameterMapString(const FString& Key, const TMap<FString, FString>& Value) {
}

void UMariaUpload::AddEventParameterMapInteger(const FString& Key, const TMap<FString, int32>& Value) {
}

void UMariaUpload::AddEventParameterMapFloat(const FString& Key, const TMap<FString, float>& Value) {
}

void UMariaUpload::AddEventParameterInteger(const FString& Key, int32 Value) {
}

void UMariaUpload::AddEventParameterFloat(const FString& Key, float Value) {
}

void UMariaUpload::AddEventParameterArrayStrings(const FString& Key, const TArray<FString>& Value) {
}

void UMariaUpload::AddEventParameterArrayInteger(const FString& Key, const TArray<int32>& Value) {
}

void UMariaUpload::AddEventParameterArrayFloat(const FString& Key, const TArray<float>& Value) {
}


