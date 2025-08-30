#include "UnionPlatformUtils.h"

UUnionPlatformUtils::UUnionPlatformUtils() {
}

void UUnionPlatformUtils::WriteAchievement(const FString& AchievementName, const float& NowValue, const float& MaxValue) {
}

void UUnionPlatformUtils::StopRemotePlayExclusionZone() {
}

void UUnionPlatformUtils::StartRemotePlayExclusionZone() {
}

void UUnionPlatformUtils::StartPresence(const EUnionPresenceType& PresenceType) {
}

void UUnionPlatformUtils::SetShareAllOn() {
}

void UUnionPlatformUtils::SetShareAllOff() {
}

void UUnionPlatformUtils::SetNXOnlinePrivilege(ENXPrivilegeType NXPrivilegeType) {
}

void UUnionPlatformUtils::RequestSoftwareKeyboard(const FSoftwareKeyBoardBootParam& PootParam) {
}

bool UUnionPlatformUtils::IsUserHasPrivilege(EUnionPlatformPrivilegeType UnionPlatformPrivilegeType) {
    return false;
}

bool UUnionPlatformUtils::IsUserHasNetworkRankingPrivilege() {
    return false;
}

bool UUnionPlatformUtils::IsStartedStreamingInstall() {
    return false;
}

bool UUnionPlatformUtils::IsProhibitedOnlinPlayByParentalControls() {
    return false;
}

bool UUnionPlatformUtils::IsPremiumResolveUiCanceledByUser() {
    return false;
}

bool UUnionPlatformUtils::IsOnlinePrivilegeOn() {
    return false;
}

bool UUnionPlatformUtils::IsNXOnlinePrivilege() {
    return false;
}

bool UUnionPlatformUtils::IsInvertGamepadAcceptAndBackKey() {
    return false;
}

bool UUnionPlatformUtils::IsHighEndPlatform() {
    return false;
}

bool UUnionPlatformUtils::GetPresenceTexts(EUnionPresenceType PresenceType, TArray<FString>& OutList) {
    return false;
}

FText UUnionPlatformUtils::GetPresenceText(EUnionPresenceType PresenceType) {
    return FText::GetEmpty();
}

FString UUnionPlatformUtils::GetPresenceId(EUnionPresenceType PresenceType) {
    return TEXT("");
}

EUnionPlatformOnlineRestrictionType UUnionPlatformUtils::GetOnlinePlayRestrictionType() {
    return EUnionPlatformOnlineRestrictionType::NoRestriction;
}

ENXPrivilegeType UUnionPlatformUtils::GetNXOnlinePrivilege() {
    return ENXPrivilegeType::Unavailable;
}

FString UUnionPlatformUtils::GetGamerTag() {
    return TEXT("");
}

FKey UUnionPlatformUtils::GetGamepadBackKey() {
    return FKey{};
}

FKey UUnionPlatformUtils::GetGamepadAcceptKey() {
    return FKey{};
}


