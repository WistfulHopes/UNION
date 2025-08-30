#include "NetMasterDataManageSubsystem.h"

UNetMasterDataManageSubsystem::UNetMasterDataManageSubsystem() {
}

void UNetMasterDataManageSubsystem::UpdateMasterDataRequest(UNetMasterDataManageSubsystem::FOnUpdateMasterDataComplete OnCompleteDelegate) {
}

void UNetMasterDataManageSubsystem::SetupLocalMasterData() {
}

void UNetMasterDataManageSubsystem::SaveLocalMasterData() {
}

void UNetMasterDataManageSubsystem::OnGetHttpCommandComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error) {
}

bool UNetMasterDataManageSubsystem::IsBusy() {
    return false;
}

bool UNetMasterDataManageSubsystem::HasDifferentialData() {
    return false;
}

FMasterDataGetMasterDataResponse UNetMasterDataManageSubsystem::GetMasterData() {
    return FMasterDataGetMasterDataResponse{};
}

bool UNetMasterDataManageSubsystem::GetGeneralizedParamData(const FString& KeyName, FMasterDataGetMasterDataResponse_MstGeneralizedParameterData& Out) {
    return false;
}

bool UNetMasterDataManageSubsystem::GetCurrentFestaRuleData(FDateTime& FestaStartUTCTime, FDateTime& FestaEndUTCTime, int32& raceRuleId, int32& LoopCount, TArray<FMasterDataGetMasterDataResponse_MstFestaTimeSceduleData>& TimeScheduleDataArray) {
    return false;
}

FMasterDataGetMasterDataResponse_MstFestaData UNetMasterDataManageSubsystem::GetCurrentFestaData(bool& bResult) {
    return FMasterDataGetMasterDataResponse_MstFestaData{};
}


