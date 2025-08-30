#include "AppFunctionLibrary.h"

UAppFunctionLibrary::UAppFunctionLibrary() {
}

UObject* UAppFunctionLibrary::TryLoadAsset(const FString& AssetPath) {
    return NULL;
}

FText UAppFunctionLibrary::TruncateTextWithEllipsis(FText Text, int32 Length) {
    return FText::GetEmpty();
}

FString UAppFunctionLibrary::TruncateStringWithEllipsis(const FString& str, int32 Length) {
    return TEXT("");
}

void UAppFunctionLibrary::SetMilestoneVersion(EMilestoneVersion NewMilestoneVersion) {
}

void UAppFunctionLibrary::OutputUE_LOG(EAppLogLevel InLevel, const FString& Message) {
}

bool UAppFunctionLibrary::IsXbox() {
    return false;
}

bool UAppFunctionLibrary::IsWindows() {
    return false;
}

bool UAppFunctionLibrary::IsVersionOverThan10100() {
    return false;
}

bool UAppFunctionLibrary::IsTestBuild() {
    return false;
}

bool UAppFunctionLibrary::IsSwitch() {
    return false;
}

bool UAppFunctionLibrary::IsSupportHDVibration() {
    return false;
}

bool UAppFunctionLibrary::IsShippingBuild() {
    return false;
}

bool UAppFunctionLibrary::IsPre2ndRom() {
    return false;
}

bool UAppFunctionLibrary::IsPlayStation() {
    return false;
}

bool UAppFunctionLibrary::IsPlayInEditor() {
    return false;
}

bool UAppFunctionLibrary::IsMasterLaunchOptionEnabled() {
    return false;
}

bool UAppFunctionLibrary::IsDevelopmentBuild() {
    return false;
}

bool UAppFunctionLibrary::Is2ndRomWithWorldContext(const UObject* WorldContextObject) {
    return false;
}

bool UAppFunctionLibrary::Is2ndRom() {
    return false;
}

int32 UAppFunctionLibrary::HexToNumber(const FString& str) {
    return 0;
}

FString UAppFunctionLibrary::GetUtcDateTimeString(int64 UnixTimestampFromServer) {
    return TEXT("");
}

ECrossplayPlatform UAppFunctionLibrary::GetPlatformGroup() {
    return ECrossplayPlatform::Xbox;
}

EAppSupportedPlatform UAppFunctionLibrary::GetPlatform() {
    return EAppSupportedPlatform::PC;
}

EMilestoneVersion UAppFunctionLibrary::GetMileStoneVersionWithWorldContext(const UObject* WorldContextObject) {
    return EMilestoneVersion::None;
}

EMilestoneVersion UAppFunctionLibrary::GetMileStoneVersion() {
    return EMilestoneVersion::None;
}

FString UAppFunctionLibrary::GetLocalDateTimeString(int64 UnixTimestampFromServer) {
    return TEXT("");
}

FDateTime UAppFunctionLibrary::GetLocalDateTime(int64 UnixTimestampFromServer) {
    return FDateTime{};
}

FString UAppFunctionLibrary::GetHexString(int32 Input, int32 Length, bool AddZero) {
    return TEXT("");
}

FString UAppFunctionLibrary::GetDateTimeStringWithoutSecond(const FDateTime& DateTime) {
    return TEXT("");
}

FString UAppFunctionLibrary::GetDateTimeString(const FDateTime& DateTime) {
    return TEXT("");
}

FString UAppFunctionLibrary::GetDateString(const FDateTime& DateTime) {
    return TEXT("");
}

int32 UAppFunctionLibrary::GetClampUserNameLength() {
    return 0;
}


