#include "HttpHelper.h"

UHttpHelper::UHttpHelper() {
}

bool UHttpHelper::ValidateResCode(bool OutError, int32 ResCode, EResponseCodeAbstract& ResCodeAbstract) {
    return false;
}

bool UHttpHelper::TransferSaveBytesToFile(const TArray<uint8>& Bytes, const FString& Path) {
    return false;
}

int32 UHttpHelper::TransferReplayDataForUploadDetail(const FString& Uri, const TArray<uint8>& Bytes, FTransferCompleteDetailDelegate OnComplete, FTransferProgressDelegate OnProgress, const FString& Name) {
    return 0;
}

int32 UHttpHelper::TransferReplayDataForUpload(const FString& Uri, const TArray<uint8>& Bytes, FTransferCompleteDelegate OnComplete, FTransferProgressDelegate OnProgress, const FString& Name) {
    return 0;
}

TArray<uint8> UHttpHelper::TransferMakeRandomBytes(int32 Size) {
    return TArray<uint8>();
}

FString UHttpHelper::TransferGhostDataGetUriForUpload() {
    return TEXT("");
}

int32 UHttpHelper::TransferGhostDataForUploadDetail(const FString& Uri, const TArray<uint8>& Bytes, FTransferCompleteDetailDelegate OnComplete, FTransferProgressDelegate OnProgress, int32 courseId, int32 speedType, const FString& Date) {
    return 0;
}

int32 UHttpHelper::TransferGhostDataForUpload(const FString& Uri, const TArray<uint8>& Bytes, FTransferCompleteDelegate OnComplete, FTransferProgressDelegate OnProgress, int32 courseId, int32 speedType, const FString& Date) {
    return 0;
}

void UHttpHelper::TransferDataTryCancel(int32 Handle) {
}

int32 UHttpHelper::TransferDataGetInvalidHandle() {
    return 0;
}

int32 UHttpHelper::TransferDataForDownloadDetail(const FString& Uri, TArray<uint8>& Bytes, FTransferCompleteDetailDelegate OnComplete, FTransferProgressDelegate OnProgress) {
    return 0;
}

int32 UHttpHelper::TransferDataForDownload(const FString& Uri, TArray<uint8>& Bytes, FTransferCompleteDelegate OnComplete, FTransferProgressDelegate OnProgress) {
    return 0;
}

int32 UHttpHelper::Send_UserSaveUserNetworkSettings_NoResend(const FUserSaveUserNetworkSettingsRequest& Request) {
    return 0;
}

void UHttpHelper::Send_UserSaveUserNetworkSettings_Callbacked_NoResend(const FUserSaveUserNetworkSettingsRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_UserSaveUserNetworkSettings_Callbacked(const FUserSaveUserNetworkSettingsRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_UserSaveUserNetworkSettings(const FUserSaveUserNetworkSettingsRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_UserSavePaidDlcOwnerships_NoResend(const FUserSavePaidDlcOwnershipsRequest& Request) {
    return 0;
}

void UHttpHelper::Send_UserSavePaidDlcOwnerships_Callbacked_NoResend(const FUserSavePaidDlcOwnershipsRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_UserSavePaidDlcOwnerships_Callbacked(const FUserSavePaidDlcOwnershipsRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_UserSavePaidDlcOwnerships(const FUserSavePaidDlcOwnershipsRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_UserNintendoSwitchOnlineCheck_NoResend(const FUserNintendoSwitchOnlineCheckRequest& Request) {
    return 0;
}

void UHttpHelper::Send_UserNintendoSwitchOnlineCheck_Callbacked_NoResend(const FUserNintendoSwitchOnlineCheckRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_UserNintendoSwitchOnlineCheck_Callbacked(const FUserNintendoSwitchOnlineCheckRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_UserNintendoSwitchOnlineCheck(const FUserNintendoSwitchOnlineCheckRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_UserGetUserSearch_NoResend(const FUserGetUserSearchRequest& Request) {
    return 0;
}

void UHttpHelper::Send_UserGetUserSearch_Callbacked_NoResend(const FUserGetUserSearchRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_UserGetUserSearch_Callbacked(const FUserGetUserSearchRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_UserGetUserSearch(const FUserGetUserSearchRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_UserGetUserNetworkSettings_NoResend(const FUserGetUserNetworkSettingsRequest& Request) {
    return 0;
}

void UHttpHelper::Send_UserGetUserNetworkSettings_Callbacked_NoResend(const FUserGetUserNetworkSettingsRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_UserGetUserNetworkSettings_Callbacked(const FUserGetUserNetworkSettingsRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_UserGetUserNetworkSettings(const FUserGetUserNetworkSettingsRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_UserGetUserIdsByUid_NoResend(const FUserGetUserIdsByUidRequest& Request) {
    return 0;
}

void UHttpHelper::Send_UserGetUserIdsByUid_Callbacked_NoResend(const FUserGetUserIdsByUidRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_UserGetUserIdsByUid_Callbacked(const FUserGetUserIdsByUidRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_UserGetUserIdsByUid(const FUserGetUserIdsByUidRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_UserGetUserIdsByPuid_NoResend(const FUserGetUserIdsByPuidRequest& Request) {
    return 0;
}

void UHttpHelper::Send_UserGetUserIdsByPuid_Callbacked_NoResend(const FUserGetUserIdsByPuidRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_UserGetUserIdsByPuid_Callbacked(const FUserGetUserIdsByPuidRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_UserGetUserIdsByPuid(const FUserGetUserIdsByPuidRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_UserGetPartsData_NoResend(const FUserGetPartsDataRequest& Request) {
    return 0;
}

void UHttpHelper::Send_UserGetPartsData_Callbacked_NoResend(const FUserGetPartsDataRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_UserGetPartsData_Callbacked(const FUserGetPartsDataRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_UserGetPartsData(const FUserGetPartsDataRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_UserGetData_NoResend(const FUserGetDataRequest& Request) {
    return 0;
}

void UHttpHelper::Send_UserGetData_Callbacked_NoResend(const FUserGetDataRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_UserGetData_Callbacked(const FUserGetDataRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_UserGetData(const FUserGetDataRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_StartSaveRankMatchStart_NoResend(const FStartSaveRankMatchStartRequest& Request) {
    return 0;
}

void UHttpHelper::Send_StartSaveRankMatchStart_Callbacked_NoResend(const FStartSaveRankMatchStartRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_StartSaveRankMatchStart_Callbacked(const FStartSaveRankMatchStartRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_StartSaveRankMatchStart(const FStartSaveRankMatchStartRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_StartSaveLegendCompeStart_NoResend(const FStartSaveLegendCompeStartRequest& Request) {
    return 0;
}

void UHttpHelper::Send_StartSaveLegendCompeStart_Callbacked_NoResend(const FStartSaveLegendCompeStartRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_StartSaveLegendCompeStart_Callbacked(const FStartSaveLegendCompeStartRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_StartSaveLegendCompeStart(const FStartSaveLegendCompeStartRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_StartSaveFestaStart_NoResend(const FStartSaveFestaStartRequest& Request) {
    return 0;
}

void UHttpHelper::Send_StartSaveFestaStart_Callbacked_NoResend(const FStartSaveFestaStartRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_StartSaveFestaStart_Callbacked(const FStartSaveFestaStartRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_StartSaveFestaStart(const FStartSaveFestaStartRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_SessionKeepalive_NoResend(const FSessionKeepaliveRequest& Request) {
    return 0;
}

void UHttpHelper::Send_SessionKeepalive_Callbacked_NoResend(const FSessionKeepaliveRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_SessionKeepalive_Callbacked(const FSessionKeepaliveRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_SessionKeepalive(const FSessionKeepaliveRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_SamplePart1_NoResend(const FSamplePart1Request& Request) {
    return 0;
}

void UHttpHelper::Send_SamplePart1_Callbacked_NoResend(const FSamplePart1Request& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_SamplePart1_Callbacked(const FSamplePart1Request& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_SamplePart1(const FSamplePart1Request& Request) {
    return 0;
}

int32 UHttpHelper::Send_RomCheckRomVersion_NoResend(const FRomCheckRomVersionRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RomCheckRomVersion_Callbacked_NoResend(const FRomCheckRomVersionRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RomCheckRomVersion_Callbacked(const FRomCheckRomVersionRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RomCheckRomVersion(const FRomCheckRomVersionRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_ResultSaveTimeTrialResult_NoResend(const FResultSaveTimeTrialResultRequest& Request) {
    return 0;
}

void UHttpHelper::Send_ResultSaveTimeTrialResult_Callbacked_NoResend(const FResultSaveTimeTrialResultRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_ResultSaveTimeTrialResult_Callbacked(const FResultSaveTimeTrialResultRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_ResultSaveTimeTrialResult(const FResultSaveTimeTrialResultRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_ResultSaveRankMatchResult_NoResend(const FResultSaveRankMatchResultRequest& Request) {
    return 0;
}

void UHttpHelper::Send_ResultSaveRankMatchResult_Callbacked_NoResend(const FResultSaveRankMatchResultRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_ResultSaveRankMatchResult_Callbacked(const FResultSaveRankMatchResultRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_ResultSaveRankMatchResult(const FResultSaveRankMatchResultRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_ResultSaveLegendCompeResult_NoResend(const FResultSaveLegendCompeResultRequest& Request) {
    return 0;
}

void UHttpHelper::Send_ResultSaveLegendCompeResult_Callbacked_NoResend(const FResultSaveLegendCompeResultRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_ResultSaveLegendCompeResult_Callbacked(const FResultSaveLegendCompeResultRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_ResultSaveLegendCompeResult(const FResultSaveLegendCompeResultRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_ResultSaveFestaResult_NoResend(const FResultSaveFestaResultRequest& Request) {
    return 0;
}

void UHttpHelper::Send_ResultSaveFestaResult_Callbacked_NoResend(const FResultSaveFestaResultRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_ResultSaveFestaResult_Callbacked(const FResultSaveFestaResultRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_ResultSaveFestaResult(const FResultSaveFestaResultRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_RankingGetRankingTimeTrial_NoResend(const FRankingGetRankingTimeTrialRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RankingGetRankingTimeTrial_Callbacked_NoResend(const FRankingGetRankingTimeTrialRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RankingGetRankingTimeTrial_Callbacked(const FRankingGetRankingTimeTrialRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RankingGetRankingTimeTrial(const FRankingGetRankingTimeTrialRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_RankingGetRankingRankMatch_NoResend(const FRankingGetRankingRankMatchRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RankingGetRankingRankMatch_Callbacked_NoResend(const FRankingGetRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RankingGetRankingRankMatch_Callbacked(const FRankingGetRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RankingGetRankingRankMatch(const FRankingGetRankingRankMatchRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_RankingGetRankingLegendCompe_NoResend(const FRankingGetRankingLegendCompeRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RankingGetRankingLegendCompe_Callbacked_NoResend(const FRankingGetRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RankingGetRankingLegendCompe_Callbacked(const FRankingGetRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RankingGetRankingLegendCompe(const FRankingGetRankingLegendCompeRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_RankingGetRankingFestaPoint_NoResend(const FRankingGetRankingFestaPointRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RankingGetRankingFestaPoint_Callbacked_NoResend(const FRankingGetRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RankingGetRankingFestaPoint_Callbacked(const FRankingGetRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RankingGetRankingFestaPoint(const FRankingGetRankingFestaPointRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_RankingGetMyRankingTimeTrial_NoResend(const FRankingGetMyRankingTimeTrialRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RankingGetMyRankingTimeTrial_Callbacked_NoResend(const FRankingGetMyRankingTimeTrialRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RankingGetMyRankingTimeTrial_Callbacked(const FRankingGetMyRankingTimeTrialRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RankingGetMyRankingTimeTrial(const FRankingGetMyRankingTimeTrialRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_RankingGetMyRankingRankMatch_NoResend(const FRankingGetMyRankingRankMatchRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RankingGetMyRankingRankMatch_Callbacked_NoResend(const FRankingGetMyRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RankingGetMyRankingRankMatch_Callbacked(const FRankingGetMyRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RankingGetMyRankingRankMatch(const FRankingGetMyRankingRankMatchRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_RankingGetMyRankingLegendCompe_NoResend(const FRankingGetMyRankingLegendCompeRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RankingGetMyRankingLegendCompe_Callbacked_NoResend(const FRankingGetMyRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RankingGetMyRankingLegendCompe_Callbacked(const FRankingGetMyRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RankingGetMyRankingLegendCompe(const FRankingGetMyRankingLegendCompeRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_RankingGetMyRankingFestaPoint_NoResend(const FRankingGetMyRankingFestaPointRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RankingGetMyRankingFestaPoint_Callbacked_NoResend(const FRankingGetMyRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RankingGetMyRankingFestaPoint_Callbacked(const FRankingGetMyRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RankingGetMyRankingFestaPoint(const FRankingGetMyRankingFestaPointRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_RankingGetFriendRankingRankMatch_NoResend(const FRankingGetFriendRankingRankMatchRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RankingGetFriendRankingRankMatch_Callbacked_NoResend(const FRankingGetFriendRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RankingGetFriendRankingRankMatch_Callbacked(const FRankingGetFriendRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RankingGetFriendRankingRankMatch(const FRankingGetFriendRankingRankMatchRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_RankingGetFriendRankingLegendCompe_NoResend(const FRankingGetFriendRankingLegendCompeRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RankingGetFriendRankingLegendCompe_Callbacked_NoResend(const FRankingGetFriendRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RankingGetFriendRankingLegendCompe_Callbacked(const FRankingGetFriendRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RankingGetFriendRankingLegendCompe(const FRankingGetFriendRankingLegendCompeRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_RankingGetFriendRankingFestaPoint_NoResend(const FRankingGetFriendRankingFestaPointRequest& Request) {
    return 0;
}

void UHttpHelper::Send_RankingGetFriendRankingFestaPoint_Callbacked_NoResend(const FRankingGetFriendRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_RankingGetFriendRankingFestaPoint_Callbacked(const FRankingGetFriendRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_RankingGetFriendRankingFestaPoint(const FRankingGetFriendRankingFestaPointRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_OperationSaveOperatorReport_NoResend(const FOperationSaveOperatorReportRequest& Request) {
    return 0;
}

void UHttpHelper::Send_OperationSaveOperatorReport_Callbacked_NoResend(const FOperationSaveOperatorReportRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_OperationSaveOperatorReport_Callbacked(const FOperationSaveOperatorReportRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_OperationSaveOperatorReport(const FOperationSaveOperatorReportRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_OperationSaveAutoReport_NoResend(const FOperationSaveAutoReportRequest& Request) {
    return 0;
}

void UHttpHelper::Send_OperationSaveAutoReport_Callbacked_NoResend(const FOperationSaveAutoReportRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_OperationSaveAutoReport_Callbacked(const FOperationSaveAutoReportRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_OperationSaveAutoReport(const FOperationSaveAutoReportRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_OntSaveOntParticipantUser_NoResend(const FOntSaveOntParticipantUserRequest& Request) {
    return 0;
}

void UHttpHelper::Send_OntSaveOntParticipantUser_Callbacked_NoResend(const FOntSaveOntParticipantUserRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_OntSaveOntParticipantUser_Callbacked(const FOntSaveOntParticipantUserRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_OntSaveOntParticipantUser(const FOntSaveOntParticipantUserRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_MatchmakingUnsubscribe_NoResend(const FMatchmakingUnsubscribeRequest& Request) {
    return 0;
}

void UHttpHelper::Send_MatchmakingUnsubscribe_Callbacked_NoResend(const FMatchmakingUnsubscribeRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_MatchmakingUnsubscribe_Callbacked(const FMatchmakingUnsubscribeRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_MatchmakingUnsubscribe(const FMatchmakingUnsubscribeRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_MatchmakingSubscribeRankMatch_NoResend(const FMatchmakingSubscribeRankMatchRequest& Request) {
    return 0;
}

void UHttpHelper::Send_MatchmakingSubscribeRankMatch_Callbacked_NoResend(const FMatchmakingSubscribeRankMatchRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_MatchmakingSubscribeRankMatch_Callbacked(const FMatchmakingSubscribeRankMatchRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_MatchmakingSubscribeRankMatch(const FMatchmakingSubscribeRankMatchRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_MatchmakingSubscribeLegendCompe_NoResend(const FMatchmakingSubscribeLegendCompeRequest& Request) {
    return 0;
}

void UHttpHelper::Send_MatchmakingSubscribeLegendCompe_Callbacked_NoResend(const FMatchmakingSubscribeLegendCompeRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_MatchmakingSubscribeLegendCompe_Callbacked(const FMatchmakingSubscribeLegendCompeRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_MatchmakingSubscribeLegendCompe(const FMatchmakingSubscribeLegendCompeRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_MatchmakingSubscribeFesta_NoResend(const FMatchmakingSubscribeFestaRequest& Request) {
    return 0;
}

void UHttpHelper::Send_MatchmakingSubscribeFesta_Callbacked_NoResend(const FMatchmakingSubscribeFestaRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_MatchmakingSubscribeFesta_Callbacked(const FMatchmakingSubscribeFestaRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_MatchmakingSubscribeFesta(const FMatchmakingSubscribeFestaRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_MatchmakingStop_NoResend(const FMatchmakingStopRequest& Request) {
    return 0;
}

void UHttpHelper::Send_MatchmakingStop_Callbacked_NoResend(const FMatchmakingStopRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_MatchmakingStop_Callbacked(const FMatchmakingStopRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_MatchmakingStop(const FMatchmakingStopRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_MatchmakingDescribe_NoResend(const FMatchmakingDescribeRequest& Request) {
    return 0;
}

void UHttpHelper::Send_MatchmakingDescribe_Callbacked_NoResend(const FMatchmakingDescribeRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_MatchmakingDescribe_Callbacked(const FMatchmakingDescribeRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_MatchmakingDescribe(const FMatchmakingDescribeRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_MasterDataGetVersion_NoResend(const FMasterDataGetVersionRequest& Request) {
    return 0;
}

void UHttpHelper::Send_MasterDataGetVersion_Callbacked_NoResend(const FMasterDataGetVersionRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_MasterDataGetVersion_Callbacked(const FMasterDataGetVersionRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_MasterDataGetVersion(const FMasterDataGetVersionRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_MasterDataGetMasterData_NoResend(const FMasterDataGetMasterDataRequest& Request) {
    return 0;
}

void UHttpHelper::Send_MasterDataGetMasterData_Callbacked_NoResend(const FMasterDataGetMasterDataRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_MasterDataGetMasterData_Callbacked(const FMasterDataGetMasterDataRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_MasterDataGetMasterData(const FMasterDataGetMasterDataRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_MasterDataGetMaintenanceSchedule_NoResend(const FMasterDataGetMaintenanceScheduleRequest& Request) {
    return 0;
}

void UHttpHelper::Send_MasterDataGetMaintenanceSchedule_Callbacked_NoResend(const FMasterDataGetMaintenanceScheduleRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_MasterDataGetMaintenanceSchedule_Callbacked(const FMasterDataGetMaintenanceScheduleRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_MasterDataGetMaintenanceSchedule(const FMasterDataGetMaintenanceScheduleRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_LoginCheck_NoResend(const FLoginCheckRequest& Request) {
    return 0;
}

void UHttpHelper::Send_LoginCheck_Callbacked_NoResend(const FLoginCheckRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_LoginCheck_Callbacked(const FLoginCheckRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_LoginCheck(const FLoginCheckRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_LobbyRemoveLobby_NoResend(const FLobbyRemoveLobbyRequest& Request) {
    return 0;
}

void UHttpHelper::Send_LobbyRemoveLobby_Callbacked_NoResend(const FLobbyRemoveLobbyRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_LobbyRemoveLobby_Callbacked(const FLobbyRemoveLobbyRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_LobbyRemoveLobby(const FLobbyRemoveLobbyRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_LobbyKeepAlive_NoResend(const FLobbyKeepAliveRequest& Request) {
    return 0;
}

void UHttpHelper::Send_LobbyKeepAlive_Callbacked_NoResend(const FLobbyKeepAliveRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_LobbyKeepAlive_Callbacked(const FLobbyKeepAliveRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_LobbyKeepAlive(const FLobbyKeepAliveRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_LobbyGetEosLobbyId_NoResend(const FLobbyGetEosLobbyIdRequest& Request) {
    return 0;
}

void UHttpHelper::Send_LobbyGetEosLobbyId_Callbacked_NoResend(const FLobbyGetEosLobbyIdRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_LobbyGetEosLobbyId_Callbacked(const FLobbyGetEosLobbyIdRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_LobbyGetEosLobbyId(const FLobbyGetEosLobbyIdRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_LobbyGenerateLobby_NoResend(const FLobbyGenerateLobbyRequest& Request) {
    return 0;
}

void UHttpHelper::Send_LobbyGenerateLobby_Callbacked_NoResend(const FLobbyGenerateLobbyRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_LobbyGenerateLobby_Callbacked(const FLobbyGenerateLobbyRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_LobbyGenerateLobby(const FLobbyGenerateLobbyRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_LegendCompeCheckLegendCompeReward_NoResend(const FLegendCompeCheckLegendCompeRewardRequest& Request) {
    return 0;
}

void UHttpHelper::Send_LegendCompeCheckLegendCompeReward_Callbacked_NoResend(const FLegendCompeCheckLegendCompeRewardRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_LegendCompeCheckLegendCompeReward_Callbacked(const FLegendCompeCheckLegendCompeRewardRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_LegendCompeCheckLegendCompeReward(const FLegendCompeCheckLegendCompeRewardRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_HealthCheck_NoResend(const FHealthCheckRequest& Request) {
    return 0;
}

void UHttpHelper::Send_HealthCheck_Callbacked_NoResend(const FHealthCheckRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_HealthCheck_Callbacked(const FHealthCheckRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_HealthCheck(const FHealthCheckRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_GhostGetRankingGhostData_NoResend(const FGhostGetRankingGhostDataRequest& Request) {
    return 0;
}

void UHttpHelper::Send_GhostGetRankingGhostData_Callbacked_NoResend(const FGhostGetRankingGhostDataRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_GhostGetRankingGhostData_Callbacked(const FGhostGetRankingGhostDataRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_GhostGetRankingGhostData(const FGhostGetRankingGhostDataRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_GhostGetFriendGhostData_NoResend(const FGhostGetFriendGhostDataRequest& Request) {
    return 0;
}

void UHttpHelper::Send_GhostGetFriendGhostData_Callbacked_NoResend(const FGhostGetFriendGhostDataRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_GhostGetFriendGhostData_Callbacked(const FGhostGetFriendGhostDataRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_GhostGetFriendGhostData(const FGhostGetFriendGhostDataRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FriendUnfriend_NoResend(const FFriendUnfriendRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FriendUnfriend_Callbacked_NoResend(const FFriendUnfriendRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FriendUnfriend_Callbacked(const FFriendUnfriendRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FriendUnfriend(const FFriendUnfriendRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FriendRequestFriend_NoResend(const FFriendRequestFriendRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FriendRequestFriend_Callbacked_NoResend(const FFriendRequestFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FriendRequestFriend_Callbacked(const FFriendRequestFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FriendRequestFriend(const FFriendRequestFriendRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FriendRejectFriend_NoResend(const FFriendRejectFriendRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FriendRejectFriend_Callbacked_NoResend(const FFriendRejectFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FriendRejectFriend_Callbacked(const FFriendRejectFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FriendRejectFriend(const FFriendRejectFriendRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FriendNotifyFriend_NoResend(const FFriendNotifyFriendRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FriendNotifyFriend_Callbacked_NoResend(const FFriendNotifyFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FriendNotifyFriend_Callbacked(const FFriendNotifyFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FriendNotifyFriend(const FFriendNotifyFriendRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FriendGetFriendList_NoResend(const FFriendGetFriendListRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FriendGetFriendList_Callbacked_NoResend(const FFriendGetFriendListRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FriendGetFriendList_Callbacked(const FFriendGetFriendListRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FriendGetFriendList(const FFriendGetFriendListRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FriendGetFriendLastDate_NoResend(const FFriendGetFriendLastDateRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FriendGetFriendLastDate_Callbacked_NoResend(const FFriendGetFriendLastDateRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FriendGetFriendLastDate_Callbacked(const FFriendGetFriendLastDateRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FriendGetFriendLastDate(const FFriendGetFriendLastDateRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FriendCancelFriend_NoResend(const FFriendCancelFriendRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FriendCancelFriend_Callbacked_NoResend(const FFriendCancelFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FriendCancelFriend_Callbacked(const FFriendCancelFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FriendCancelFriend(const FFriendCancelFriendRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FriendApplyFriend_NoResend(const FFriendApplyFriendRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FriendApplyFriend_Callbacked_NoResend(const FFriendApplyFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FriendApplyFriend_Callbacked(const FFriendApplyFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FriendApplyFriend(const FFriendApplyFriendRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FriendAcceptFriend_NoResend(const FFriendAcceptFriendRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FriendAcceptFriend_Callbacked_NoResend(const FFriendAcceptFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FriendAcceptFriend_Callbacked(const FFriendAcceptFriendRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FriendAcceptFriend(const FFriendAcceptFriendRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FestaFestaTop_NoResend(const FFestaFestaTopRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FestaFestaTop_Callbacked_NoResend(const FFestaFestaTopRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FestaFestaTop_Callbacked(const FFestaFestaTopRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FestaFestaTop(const FFestaFestaTopRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FestaCheckFestaReward_NoResend(const FFestaCheckFestaRewardRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FestaCheckFestaReward_Callbacked_NoResend(const FFestaCheckFestaRewardRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FestaCheckFestaReward_Callbacked(const FFestaCheckFestaRewardRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FestaCheckFestaReward(const FFestaCheckFestaRewardRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FairPointSubFairPoint_NoResend(const FFairPointSubFairPointRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FairPointSubFairPoint_Callbacked_NoResend(const FFairPointSubFairPointRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FairPointSubFairPoint_Callbacked(const FFairPointSubFairPointRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FairPointSubFairPoint(const FFairPointSubFairPointRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FairPointCheckFairPoint_NoResend(const FFairPointCheckFairPointRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FairPointCheckFairPoint_Callbacked_NoResend(const FFairPointCheckFairPointRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FairPointCheckFairPoint_Callbacked(const FFairPointCheckFairPointRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FairPointCheckFairPoint(const FFairPointCheckFairPointRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_FairPointAddFairPoint_NoResend(const FFairPointAddFairPointRequest& Request) {
    return 0;
}

void UHttpHelper::Send_FairPointAddFairPoint_Callbacked_NoResend(const FFairPointAddFairPointRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_FairPointAddFairPoint_Callbacked(const FFairPointAddFairPointRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_FairPointAddFairPoint(const FFairPointAddFairPointRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_DebugMatchmakingSubscribeRankMatch_NoResend(const FDebugMatchmakingSubscribeRankMatchRequest& Request) {
    return 0;
}

void UHttpHelper::Send_DebugMatchmakingSubscribeRankMatch_Callbacked_NoResend(const FDebugMatchmakingSubscribeRankMatchRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_DebugMatchmakingSubscribeRankMatch_Callbacked(const FDebugMatchmakingSubscribeRankMatchRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_DebugMatchmakingSubscribeRankMatch(const FDebugMatchmakingSubscribeRankMatchRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_DebugMatchmakingSubscribeLegendCompe_NoResend(const FDebugMatchmakingSubscribeLegendCompeRequest& Request) {
    return 0;
}

void UHttpHelper::Send_DebugMatchmakingSubscribeLegendCompe_Callbacked_NoResend(const FDebugMatchmakingSubscribeLegendCompeRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_DebugMatchmakingSubscribeLegendCompe_Callbacked(const FDebugMatchmakingSubscribeLegendCompeRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_DebugMatchmakingSubscribeLegendCompe(const FDebugMatchmakingSubscribeLegendCompeRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_DebugMatchmakingSubscribeFesta_NoResend(const FDebugMatchmakingSubscribeFestaRequest& Request) {
    return 0;
}

void UHttpHelper::Send_DebugMatchmakingSubscribeFesta_Callbacked_NoResend(const FDebugMatchmakingSubscribeFestaRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_DebugMatchmakingSubscribeFesta_Callbacked(const FDebugMatchmakingSubscribeFestaRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_DebugMatchmakingSubscribeFesta(const FDebugMatchmakingSubscribeFestaRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_DebugConnectTest_NoResend(const FDebugConnectTestRequest& Request) {
    return 0;
}

void UHttpHelper::Send_DebugConnectTest_Callbacked_NoResend(const FDebugConnectTestRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_DebugConnectTest_Callbacked(const FDebugConnectTestRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_DebugConnectTest(const FDebugConnectTestRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_DebugChangeRankMatchRate_NoResend(const FDebugChangeRankMatchRateRequest& Request) {
    return 0;
}

void UHttpHelper::Send_DebugChangeRankMatchRate_Callbacked_NoResend(const FDebugChangeRankMatchRateRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_DebugChangeRankMatchRate_Callbacked(const FDebugChangeRankMatchRateRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_DebugChangeRankMatchRate(const FDebugChangeRankMatchRateRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_DebugChangeFairPlayPoint_NoResend(const FDebugChangeFairPlayPointRequest& Request) {
    return 0;
}

void UHttpHelper::Send_DebugChangeFairPlayPoint_Callbacked_NoResend(const FDebugChangeFairPlayPointRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_DebugChangeFairPlayPoint_Callbacked(const FDebugChangeFairPlayPointRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_DebugChangeFairPlayPoint(const FDebugChangeFairPlayPointRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_CompensationGetCompensations_NoResend(const FCompensationGetCompensationsRequest& Request) {
    return 0;
}

void UHttpHelper::Send_CompensationGetCompensations_Callbacked_NoResend(const FCompensationGetCompensationsRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_CompensationGetCompensations_Callbacked(const FCompensationGetCompensationsRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_CompensationGetCompensations(const FCompensationGetCompensationsRequest& Request) {
    return 0;
}

int32 UHttpHelper::Send_CntReplayGetSignedUrl_NoResend(const FCntReplayGetSignedUrlRequest& Request) {
    return 0;
}

void UHttpHelper::Send_CntReplayGetSignedUrl_Callbacked_NoResend(const FCntReplayGetSignedUrlRequest& Request, FHttpReceivedDelegate Callback) {
}

void UHttpHelper::Send_CntReplayGetSignedUrl_Callbacked(const FCntReplayGetSignedUrlRequest& Request, FHttpReceivedDelegate Callback) {
}

int32 UHttpHelper::Send_CntReplayGetSignedUrl(const FCntReplayGetSignedUrlRequest& Request) {
    return 0;
}

bool UHttpHelper::Receive_UserSaveUserNetworkSettings(int32 Handle, bool& OutError, int32& ResCode, FUserSaveUserNetworkSettingsResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_UserSavePaidDlcOwnerships(int32 Handle, bool& OutError, int32& ResCode, FUserSavePaidDlcOwnershipsResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_UserNintendoSwitchOnlineCheck(int32 Handle, bool& OutError, int32& ResCode, FUserNintendoSwitchOnlineCheckResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_UserGetUserSearch(int32 Handle, bool& OutError, int32& ResCode, FUserGetUserSearchResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_UserGetUserNetworkSettings(int32 Handle, bool& OutError, int32& ResCode, FUserGetUserNetworkSettingsResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_UserGetUserIdsByUid(int32 Handle, bool& OutError, int32& ResCode, FUserGetUserIdsByUidResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_UserGetUserIdsByPuid(int32 Handle, bool& OutError, int32& ResCode, FUserGetUserIdsByPuidResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_UserGetPartsData(int32 Handle, bool& OutError, int32& ResCode, FUserGetPartsDataResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_UserGetData(int32 Handle, bool& OutError, int32& ResCode, FUserGetDataResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_StartSaveRankMatchStart(int32 Handle, bool& OutError, int32& ResCode, FStartSaveRankMatchStartResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_StartSaveLegendCompeStart(int32 Handle, bool& OutError, int32& ResCode, FStartSaveLegendCompeStartResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_StartSaveFestaStart(int32 Handle, bool& OutError, int32& ResCode, FStartSaveFestaStartResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_SessionKeepalive(int32 Handle, bool& OutError, int32& ResCode, FSessionKeepaliveResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_SamplePart1(int32 Handle, bool& OutError, int32& ResCode, FSamplePart1Response& Response) {
    return false;
}

bool UHttpHelper::Receive_RomCheckRomVersion(int32 Handle, bool& OutError, int32& ResCode, FRomCheckRomVersionResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_ResultSaveTimeTrialResult(int32 Handle, bool& OutError, int32& ResCode, FResultSaveTimeTrialResultResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_ResultSaveRankMatchResult(int32 Handle, bool& OutError, int32& ResCode, FResultSaveRankMatchResultResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_ResultSaveLegendCompeResult(int32 Handle, bool& OutError, int32& ResCode, FResultSaveLegendCompeResultResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_ResultSaveFestaResult(int32 Handle, bool& OutError, int32& ResCode, FResultSaveFestaResultResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_RankingGetRankingTimeTrial(int32 Handle, bool& OutError, int32& ResCode, FRankingGetRankingTimeTrialResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_RankingGetRankingRankMatch(int32 Handle, bool& OutError, int32& ResCode, FRankingGetRankingRankMatchResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_RankingGetRankingLegendCompe(int32 Handle, bool& OutError, int32& ResCode, FRankingGetRankingLegendCompeResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_RankingGetRankingFestaPoint(int32 Handle, bool& OutError, int32& ResCode, FRankingGetRankingFestaPointResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_RankingGetMyRankingTimeTrial(int32 Handle, bool& OutError, int32& ResCode, FRankingGetMyRankingTimeTrialResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_RankingGetMyRankingRankMatch(int32 Handle, bool& OutError, int32& ResCode, FRankingGetMyRankingRankMatchResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_RankingGetMyRankingLegendCompe(int32 Handle, bool& OutError, int32& ResCode, FRankingGetMyRankingLegendCompeResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_RankingGetMyRankingFestaPoint(int32 Handle, bool& OutError, int32& ResCode, FRankingGetMyRankingFestaPointResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_RankingGetFriendRankingRankMatch(int32 Handle, bool& OutError, int32& ResCode, FRankingGetFriendRankingRankMatchResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_RankingGetFriendRankingLegendCompe(int32 Handle, bool& OutError, int32& ResCode, FRankingGetFriendRankingLegendCompeResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_RankingGetFriendRankingFestaPoint(int32 Handle, bool& OutError, int32& ResCode, FRankingGetFriendRankingFestaPointResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_OperationSaveOperatorReport(int32 Handle, bool& OutError, int32& ResCode, FOperationSaveOperatorReportResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_OperationSaveAutoReport(int32 Handle, bool& OutError, int32& ResCode, FOperationSaveAutoReportResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_OntSaveOntParticipantUser(int32 Handle, bool& OutError, int32& ResCode, FOntSaveOntParticipantUserResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_MatchmakingUnsubscribe(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingUnsubscribeResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_MatchmakingSubscribeRankMatch(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingSubscribeRankMatchResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_MatchmakingSubscribeLegendCompe(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingSubscribeLegendCompeResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_MatchmakingSubscribeFesta(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingSubscribeFestaResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_MatchmakingStop(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingStopResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_MatchmakingDescribe(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingDescribeResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_MasterDataGetVersion(int32 Handle, bool& OutError, int32& ResCode, FMasterDataGetVersionResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_MasterDataGetMasterData(int32 Handle, bool& OutError, int32& ResCode, FMasterDataGetMasterDataResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_MasterDataGetMaintenanceSchedule(int32 Handle, bool& OutError, int32& ResCode, FMasterDataGetMaintenanceScheduleResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_LoginCheck(int32 Handle, bool& OutError, int32& ResCode, FLoginCheckResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_LobbyRemoveLobby(int32 Handle, bool& OutError, int32& ResCode, FLobbyRemoveLobbyResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_LobbyKeepAlive(int32 Handle, bool& OutError, int32& ResCode, FLobbyKeepAliveResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_LobbyGetEosLobbyId(int32 Handle, bool& OutError, int32& ResCode, FLobbyGetEosLobbyIdResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_LobbyGenerateLobby(int32 Handle, bool& OutError, int32& ResCode, FLobbyGenerateLobbyResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_LegendCompeCheckLegendCompeReward(int32 Handle, bool& OutError, int32& ResCode, FLegendCompeCheckLegendCompeRewardResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_HealthCheck(int32 Handle, bool& OutError, int32& ResCode, FHealthCheckResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_GhostGetRankingGhostData(int32 Handle, bool& OutError, int32& ResCode, FGhostGetRankingGhostDataResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_GhostGetFriendGhostData(int32 Handle, bool& OutError, int32& ResCode, FGhostGetFriendGhostDataResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FriendUnfriend(int32 Handle, bool& OutError, int32& ResCode, FFriendUnfriendResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FriendRequestFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendRequestFriendResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FriendRejectFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendRejectFriendResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FriendNotifyFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendNotifyFriendResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FriendGetFriendList(int32 Handle, bool& OutError, int32& ResCode, FFriendGetFriendListResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FriendGetFriendLastDate(int32 Handle, bool& OutError, int32& ResCode, FFriendGetFriendLastDateResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FriendCancelFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendCancelFriendResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FriendApplyFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendApplyFriendResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FriendAcceptFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendAcceptFriendResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FestaFestaTop(int32 Handle, bool& OutError, int32& ResCode, FFestaFestaTopResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FestaCheckFestaReward(int32 Handle, bool& OutError, int32& ResCode, FFestaCheckFestaRewardResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FairPointSubFairPoint(int32 Handle, bool& OutError, int32& ResCode, FFairPointSubFairPointResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FairPointCheckFairPoint(int32 Handle, bool& OutError, int32& ResCode, FFairPointCheckFairPointResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_FairPointAddFairPoint(int32 Handle, bool& OutError, int32& ResCode, FFairPointAddFairPointResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_DebugMatchmakingSubscribeRankMatch(int32 Handle, bool& OutError, int32& ResCode, FDebugMatchmakingSubscribeRankMatchResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_DebugMatchmakingSubscribeLegendCompe(int32 Handle, bool& OutError, int32& ResCode, FDebugMatchmakingSubscribeLegendCompeResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_DebugMatchmakingSubscribeFesta(int32 Handle, bool& OutError, int32& ResCode, FDebugMatchmakingSubscribeFestaResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_DebugConnectTest(int32 Handle, bool& OutError, int32& ResCode, FDebugConnectTestResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_DebugChangeRankMatchRate(int32 Handle, bool& OutError, int32& ResCode, FDebugChangeRankMatchRateResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_DebugChangeFairPlayPoint(int32 Handle, bool& OutError, int32& ResCode, FDebugChangeFairPlayPointResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_CompensationGetCompensations(int32 Handle, bool& OutError, int32& ResCode, FCompensationGetCompensationsResponse& Response) {
    return false;
}

bool UHttpHelper::Receive_CntReplayGetSignedUrl(int32 Handle, bool& OutError, int32& ResCode, FCntReplayGetSignedUrlResponse& Response) {
    return false;
}

void UHttpHelper::QueryServerTime(FQueryTimestampCompleteDelegate OnComplete) {
}

void UHttpHelper::Parse_UserSaveUserNetworkSettings(const FString& OutData, int32& ResCode, FUserSaveUserNetworkSettingsResponse& Response) {
}

void UHttpHelper::Parse_UserSavePaidDlcOwnerships(const FString& OutData, int32& ResCode, FUserSavePaidDlcOwnershipsResponse& Response) {
}

void UHttpHelper::Parse_UserNintendoSwitchOnlineCheck(const FString& OutData, int32& ResCode, FUserNintendoSwitchOnlineCheckResponse& Response) {
}

void UHttpHelper::Parse_UserGetUserSearch(const FString& OutData, int32& ResCode, FUserGetUserSearchResponse& Response) {
}

void UHttpHelper::Parse_UserGetUserNetworkSettings(const FString& OutData, int32& ResCode, FUserGetUserNetworkSettingsResponse& Response) {
}

void UHttpHelper::Parse_UserGetUserIdsByUid(const FString& OutData, int32& ResCode, FUserGetUserIdsByUidResponse& Response) {
}

void UHttpHelper::Parse_UserGetUserIdsByPuid(const FString& OutData, int32& ResCode, FUserGetUserIdsByPuidResponse& Response) {
}

void UHttpHelper::Parse_UserGetPartsData(const FString& OutData, int32& ResCode, FUserGetPartsDataResponse& Response) {
}

void UHttpHelper::Parse_UserGetData(const FString& OutData, int32& ResCode, FUserGetDataResponse& Response) {
}

void UHttpHelper::Parse_StartSaveRankMatchStart(const FString& OutData, int32& ResCode, FStartSaveRankMatchStartResponse& Response) {
}

void UHttpHelper::Parse_StartSaveLegendCompeStart(const FString& OutData, int32& ResCode, FStartSaveLegendCompeStartResponse& Response) {
}

void UHttpHelper::Parse_StartSaveFestaStart(const FString& OutData, int32& ResCode, FStartSaveFestaStartResponse& Response) {
}

void UHttpHelper::Parse_SessionKeepalive(const FString& OutData, int32& ResCode, FSessionKeepaliveResponse& Response) {
}

void UHttpHelper::Parse_SamplePart1(const FString& OutData, int32& ResCode, FSamplePart1Response& Response) {
}

void UHttpHelper::Parse_RomCheckRomVersion(const FString& OutData, int32& ResCode, FRomCheckRomVersionResponse& Response) {
}

void UHttpHelper::Parse_ResultSaveTimeTrialResult(const FString& OutData, int32& ResCode, FResultSaveTimeTrialResultResponse& Response) {
}

void UHttpHelper::Parse_ResultSaveRankMatchResult(const FString& OutData, int32& ResCode, FResultSaveRankMatchResultResponse& Response) {
}

void UHttpHelper::Parse_ResultSaveLegendCompeResult(const FString& OutData, int32& ResCode, FResultSaveLegendCompeResultResponse& Response) {
}

void UHttpHelper::Parse_ResultSaveFestaResult(const FString& OutData, int32& ResCode, FResultSaveFestaResultResponse& Response) {
}

void UHttpHelper::Parse_RankingGetRankingTimeTrial(const FString& OutData, int32& ResCode, FRankingGetRankingTimeTrialResponse& Response) {
}

void UHttpHelper::Parse_RankingGetRankingRankMatch(const FString& OutData, int32& ResCode, FRankingGetRankingRankMatchResponse& Response) {
}

void UHttpHelper::Parse_RankingGetRankingLegendCompe(const FString& OutData, int32& ResCode, FRankingGetRankingLegendCompeResponse& Response) {
}

void UHttpHelper::Parse_RankingGetRankingFestaPoint(const FString& OutData, int32& ResCode, FRankingGetRankingFestaPointResponse& Response) {
}

void UHttpHelper::Parse_RankingGetMyRankingTimeTrial(const FString& OutData, int32& ResCode, FRankingGetMyRankingTimeTrialResponse& Response) {
}

void UHttpHelper::Parse_RankingGetMyRankingRankMatch(const FString& OutData, int32& ResCode, FRankingGetMyRankingRankMatchResponse& Response) {
}

void UHttpHelper::Parse_RankingGetMyRankingLegendCompe(const FString& OutData, int32& ResCode, FRankingGetMyRankingLegendCompeResponse& Response) {
}

void UHttpHelper::Parse_RankingGetMyRankingFestaPoint(const FString& OutData, int32& ResCode, FRankingGetMyRankingFestaPointResponse& Response) {
}

void UHttpHelper::Parse_RankingGetFriendRankingRankMatch(const FString& OutData, int32& ResCode, FRankingGetFriendRankingRankMatchResponse& Response) {
}

void UHttpHelper::Parse_RankingGetFriendRankingLegendCompe(const FString& OutData, int32& ResCode, FRankingGetFriendRankingLegendCompeResponse& Response) {
}

void UHttpHelper::Parse_RankingGetFriendRankingFestaPoint(const FString& OutData, int32& ResCode, FRankingGetFriendRankingFestaPointResponse& Response) {
}

void UHttpHelper::Parse_OperationSaveOperatorReport(const FString& OutData, int32& ResCode, FOperationSaveOperatorReportResponse& Response) {
}

void UHttpHelper::Parse_OperationSaveAutoReport(const FString& OutData, int32& ResCode, FOperationSaveAutoReportResponse& Response) {
}

void UHttpHelper::Parse_OntSaveOntParticipantUser(const FString& OutData, int32& ResCode, FOntSaveOntParticipantUserResponse& Response) {
}

void UHttpHelper::Parse_MatchmakingUnsubscribe(const FString& OutData, int32& ResCode, FMatchmakingUnsubscribeResponse& Response) {
}

void UHttpHelper::Parse_MatchmakingSubscribeRankMatch(const FString& OutData, int32& ResCode, FMatchmakingSubscribeRankMatchResponse& Response) {
}

void UHttpHelper::Parse_MatchmakingSubscribeLegendCompe(const FString& OutData, int32& ResCode, FMatchmakingSubscribeLegendCompeResponse& Response) {
}

void UHttpHelper::Parse_MatchmakingSubscribeFesta(const FString& OutData, int32& ResCode, FMatchmakingSubscribeFestaResponse& Response) {
}

void UHttpHelper::Parse_MatchmakingStop(const FString& OutData, int32& ResCode, FMatchmakingStopResponse& Response) {
}

void UHttpHelper::Parse_MatchmakingDescribe(const FString& OutData, int32& ResCode, FMatchmakingDescribeResponse& Response) {
}

void UHttpHelper::Parse_MasterDataGetVersion(const FString& OutData, int32& ResCode, FMasterDataGetVersionResponse& Response) {
}

void UHttpHelper::Parse_MasterDataGetMasterData(const FString& OutData, int32& ResCode, FMasterDataGetMasterDataResponse& Response) {
}

void UHttpHelper::Parse_MasterDataGetMaintenanceSchedule(const FString& OutData, int32& ResCode, FMasterDataGetMaintenanceScheduleResponse& Response) {
}

void UHttpHelper::Parse_LoginCheck(const FString& OutData, int32& ResCode, FLoginCheckResponse& Response) {
}

void UHttpHelper::Parse_LobbyRemoveLobby(const FString& OutData, int32& ResCode, FLobbyRemoveLobbyResponse& Response) {
}

void UHttpHelper::Parse_LobbyKeepAlive(const FString& OutData, int32& ResCode, FLobbyKeepAliveResponse& Response) {
}

void UHttpHelper::Parse_LobbyGetEosLobbyId(const FString& OutData, int32& ResCode, FLobbyGetEosLobbyIdResponse& Response) {
}

void UHttpHelper::Parse_LobbyGenerateLobby(const FString& OutData, int32& ResCode, FLobbyGenerateLobbyResponse& Response) {
}

void UHttpHelper::Parse_LegendCompeCheckLegendCompeReward(const FString& OutData, int32& ResCode, FLegendCompeCheckLegendCompeRewardResponse& Response) {
}

void UHttpHelper::Parse_HealthCheck(const FString& OutData, int32& ResCode, FHealthCheckResponse& Response) {
}

void UHttpHelper::Parse_GhostGetRankingGhostData(const FString& OutData, int32& ResCode, FGhostGetRankingGhostDataResponse& Response) {
}

void UHttpHelper::Parse_GhostGetFriendGhostData(const FString& OutData, int32& ResCode, FGhostGetFriendGhostDataResponse& Response) {
}

void UHttpHelper::Parse_FriendUnfriend(const FString& OutData, int32& ResCode, FFriendUnfriendResponse& Response) {
}

void UHttpHelper::Parse_FriendRequestFriend(const FString& OutData, int32& ResCode, FFriendRequestFriendResponse& Response) {
}

void UHttpHelper::Parse_FriendRejectFriend(const FString& OutData, int32& ResCode, FFriendRejectFriendResponse& Response) {
}

void UHttpHelper::Parse_FriendNotifyFriend(const FString& OutData, int32& ResCode, FFriendNotifyFriendResponse& Response) {
}

void UHttpHelper::Parse_FriendGetFriendList(const FString& OutData, int32& ResCode, FFriendGetFriendListResponse& Response) {
}

void UHttpHelper::Parse_FriendGetFriendLastDate(const FString& OutData, int32& ResCode, FFriendGetFriendLastDateResponse& Response) {
}

void UHttpHelper::Parse_FriendCancelFriend(const FString& OutData, int32& ResCode, FFriendCancelFriendResponse& Response) {
}

void UHttpHelper::Parse_FriendApplyFriend(const FString& OutData, int32& ResCode, FFriendApplyFriendResponse& Response) {
}

void UHttpHelper::Parse_FriendAcceptFriend(const FString& OutData, int32& ResCode, FFriendAcceptFriendResponse& Response) {
}

void UHttpHelper::Parse_FestaFestaTop(const FString& OutData, int32& ResCode, FFestaFestaTopResponse& Response) {
}

void UHttpHelper::Parse_FestaCheckFestaReward(const FString& OutData, int32& ResCode, FFestaCheckFestaRewardResponse& Response) {
}

void UHttpHelper::Parse_FairPointSubFairPoint(const FString& OutData, int32& ResCode, FFairPointSubFairPointResponse& Response) {
}

void UHttpHelper::Parse_FairPointCheckFairPoint(const FString& OutData, int32& ResCode, FFairPointCheckFairPointResponse& Response) {
}

void UHttpHelper::Parse_FairPointAddFairPoint(const FString& OutData, int32& ResCode, FFairPointAddFairPointResponse& Response) {
}

void UHttpHelper::Parse_DebugMatchmakingSubscribeRankMatch(const FString& OutData, int32& ResCode, FDebugMatchmakingSubscribeRankMatchResponse& Response) {
}

void UHttpHelper::Parse_DebugMatchmakingSubscribeLegendCompe(const FString& OutData, int32& ResCode, FDebugMatchmakingSubscribeLegendCompeResponse& Response) {
}

void UHttpHelper::Parse_DebugMatchmakingSubscribeFesta(const FString& OutData, int32& ResCode, FDebugMatchmakingSubscribeFestaResponse& Response) {
}

void UHttpHelper::Parse_DebugConnectTest(const FString& OutData, int32& ResCode, FDebugConnectTestResponse& Response) {
}

void UHttpHelper::Parse_DebugChangeRankMatchRate(const FString& OutData, int32& ResCode, FDebugChangeRankMatchRateResponse& Response) {
}

void UHttpHelper::Parse_DebugChangeFairPlayPoint(const FString& OutData, int32& ResCode, FDebugChangeFairPlayPointResponse& Response) {
}

void UHttpHelper::Parse_CompensationGetCompensations(const FString& OutData, int32& ResCode, FCompensationGetCompensationsResponse& Response) {
}

void UHttpHelper::Parse_CntReplayGetSignedUrl(const FString& OutData, int32& ResCode, FCntReplayGetSignedUrlResponse& Response) {
}

void UHttpHelper::LoginContextUpdate(const FLoginCheckResponse& Response) {
}

void UHttpHelper::LoginContextInitializeForMaintenance(const FString& ProviderId) {
}

void UHttpHelper::LoginContextInitialize(const FString& ProductUserId, const FString& UserId) {
}

bool UHttpHelper::GetLastServerTime(FString& ServerTime) {
    return false;
}

bool UHttpHelper::GetLastMaintenanceData(FString& StartTime, FString& endTime, int32& noticeId) {
    return false;
}

bool UHttpHelper::GetIntplServerDateTime(FDateTime& OutDateTime) {
    return false;
}

bool UHttpHelper::GetCurrentUserId(FString& UserId) {
    return false;
}


