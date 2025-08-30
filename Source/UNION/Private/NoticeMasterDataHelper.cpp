#include "NoticeMasterDataHelper.h"

UNoticeMasterDataHelper::UNoticeMasterDataHelper() {
}

void UNoticeMasterDataHelper::GetFreeContentsReward(UNetMasterDataManageSubsystem* Subsystem, TArray<FRewardGetWindowParam>& RewardArray) {
}

bool UNoticeMasterDataHelper::GetActiveFreeContentNoticeInfo(UNetMasterDataManageSubsystem* Subsystem, FString& noticeId, FDateTime& releaseTime) {
    return false;
}

bool UNoticeMasterDataHelper::GetActiveDLCNoticeInfo(UNetMasterDataManageSubsystem* Subsystem, FString& noticeId, FDateTime& DLCReleaseTime) {
    return false;
}

bool UNoticeMasterDataHelper::CheckFreeContentNotice(UNetMasterDataManageSubsystem* Subsystem) {
    return false;
}

bool UNoticeMasterDataHelper::CheckFestaNotice(UNetMasterDataManageSubsystem* Subsystem) {
    return false;
}

bool UNoticeMasterDataHelper::CheckDLCNotice(UNetMasterDataManageSubsystem* Subsystem) {
    return false;
}


