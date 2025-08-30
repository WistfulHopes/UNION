#include "CommonLobbyMemberContext.h"

UCommonLobbyMemberContext::UCommonLobbyMemberContext() {
}

void UCommonLobbyMemberContext::SetUsageCountByMachineType(TArray<int32> UsageCountArray) {
}

void UCommonLobbyMemberContext::SetUsageCountByChara(TArray<FUsageCountChara> UsageCountArray) {
}

void UCommonLobbyMemberContext::SetRateRank(int32 Rank) {
}

void UCommonLobbyMemberContext::SetRacerName(const FString& RacerName) {
}

void UCommonLobbyMemberContext::SetRacerGadgetData(const FGadgetPlateUIData& GadgetPlateData) {
}

void UCommonLobbyMemberContext::SetRacerGadget(const TArray<EGadgetId>& Gadgets) {
}

void UCommonLobbyMemberContext::SetRacerDriverAndMachineDataEx(EDriverId DriverId, int32 MachineId, const FUserMachineCustomizeData& CustomizeData) {
}

void UCommonLobbyMemberContext::SetRacerDriverAndMachineData(EDriverId DriverId, int32 MachineId, EMachineId FrontPartsId, EMachineId RearPartsId, EMachineId TirePartsId) {
}

void UCommonLobbyMemberContext::SetPlatformUserId(const FString& PlatformUserId) {
}

void UCommonLobbyMemberContext::SetPlatformType(EAppSupportedPlatform Platform) {
}

void UCommonLobbyMemberContext::SetPlatform(const FString& Platform) {
}

void UCommonLobbyMemberContext::SetLikeCount(int32 Count) {
}

void UCommonLobbyMemberContext::SetFirstRankFlag(bool bValue) {
}

void UCommonLobbyMemberContext::SetDegreeId(int32 degreeId) {
}

void UCommonLobbyMemberContext::SetCommonMemberState(ECommonLobbyMemberState NewState) {
}

void UCommonLobbyMemberContext::SendStamp(int32 StampId) {
}

void UCommonLobbyMemberContext::SendSelectedCourseId_Callback(int32 courseId, FLobbySubsystemOnLobbyOperationComplete OnComplete) {
}

void UCommonLobbyMemberContext::SendSelectedCourseId(int32 courseId) {
}

void UCommonLobbyMemberContext::SendResultSaveDone() {
}

void UCommonLobbyMemberContext::SendLikeTo(ULobbyMemberContextBase* Member) {
}

void UCommonLobbyMemberContext::SendHorn() {
}

void UCommonLobbyMemberContext::SendEntryRaceId(const FString& InEntryRaceId) {
}

void UCommonLobbyMemberContext::ResetLocalData() {
}

void UCommonLobbyMemberContext::OnLobbyOperationCompleteWithError(bool bSuccessful, const FLobbyOperationResult& Result) {
}

bool UCommonLobbyMemberContext::IsWaitingMembersTimeout() const {
    return false;
}

bool UCommonLobbyMemberContext::IsRaceHost() const {
    return false;
}

bool UCommonLobbyMemberContext::IsInLobby() const {
    return false;
}

void UCommonLobbyMemberContext::GetUsageCountByMachineType(TArray<int32>& OutDataArray) {
}

void UCommonLobbyMemberContext::GetUsageCountByChara(TArray<FUsageCountChara>& OutDataArray) {
}

void UCommonLobbyMemberContext::GetStickerCustomizeData(const int32 Key, TArray<FUserStickerData>& OutStickerData) const {
}

void UCommonLobbyMemberContext::GetSelectedCourseId(int32& OutResult) const {
}

bool UCommonLobbyMemberContext::GetRateRank(int32& OutResult) const {
    return false;
}

void UCommonLobbyMemberContext::GetRacerName(FText& OutResult) const {
}

void UCommonLobbyMemberContext::GetRacerMachineData(int32& OutMachineId, FUserMachineCustomizeData& OutCustomizeData) const {
}

void UCommonLobbyMemberContext::GetRacerGadgetData(FGadgetPlateUIData& OutGadgetPlateData) const {
}

void UCommonLobbyMemberContext::GetRacerGadget(TArray<EGadgetId>& OutGadgets) const {
}

void UCommonLobbyMemberContext::GetRacerDriverId(EDriverId& OutResult) const {
}

void UCommonLobbyMemberContext::GetPlatformUserId(FString& OutResult) const {
}

void UCommonLobbyMemberContext::GetPlatformType(EAppSupportedPlatform& OutResult) const {
}

void UCommonLobbyMemberContext::GetPlatform(FText& OutResult) const {
}

ELobbyInviteType UCommonLobbyMemberContext::GetLobbyInviteType() const {
    return ELobbyInviteType::None;
}

void UCommonLobbyMemberContext::GetLikeCount(int32& OutResult) const {
}

void UCommonLobbyMemberContext::GetFirstRankFlag(bool& bOutValue) const {
}

void UCommonLobbyMemberContext::GetDegreeId(int32& OutResult) const {
}

ECommonLobbyMemberState UCommonLobbyMemberContext::GetCommonMemberState() {
    return ECommonLobbyMemberState::InLobby;
}

ECommonLobbyMemberState UCommonLobbyMemberContext::GetCachedCommonMemberState() const {
    return ECommonLobbyMemberState::InLobby;
}


