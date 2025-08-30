#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CntReplayGetSignedUrlRequest.h"
#include "CntReplayGetSignedUrlResponse.h"
#include "CompensationGetCompensationsRequest.h"
#include "CompensationGetCompensationsResponse.h"
#include "DebugChangeFairPlayPointRequest.h"
#include "DebugChangeFairPlayPointResponse.h"
#include "DebugChangeRankMatchRateRequest.h"
#include "DebugChangeRankMatchRateResponse.h"
#include "DebugConnectTestRequest.h"
#include "DebugConnectTestResponse.h"
#include "DebugMatchmakingSubscribeFestaRequest.h"
#include "DebugMatchmakingSubscribeFestaResponse.h"
#include "DebugMatchmakingSubscribeLegendCompeRequest.h"
#include "DebugMatchmakingSubscribeLegendCompeResponse.h"
#include "DebugMatchmakingSubscribeRankMatchRequest.h"
#include "DebugMatchmakingSubscribeRankMatchResponse.h"
#include "EResponseCodeAbstract.h"
#include "FairPointAddFairPointRequest.h"
#include "FairPointAddFairPointResponse.h"
#include "FairPointCheckFairPointRequest.h"
#include "FairPointCheckFairPointResponse.h"
#include "FairPointSubFairPointRequest.h"
#include "FairPointSubFairPointResponse.h"
#include "FestaCheckFestaRewardRequest.h"
#include "FestaCheckFestaRewardResponse.h"
#include "FestaFestaTopRequest.h"
#include "FestaFestaTopResponse.h"
#include "FriendAcceptFriendRequest.h"
#include "FriendAcceptFriendResponse.h"
#include "FriendApplyFriendRequest.h"
#include "FriendApplyFriendResponse.h"
#include "FriendCancelFriendRequest.h"
#include "FriendCancelFriendResponse.h"
#include "FriendGetFriendLastDateRequest.h"
#include "FriendGetFriendLastDateResponse.h"
#include "FriendGetFriendListRequest.h"
#include "FriendGetFriendListResponse.h"
#include "FriendNotifyFriendRequest.h"
#include "FriendNotifyFriendResponse.h"
#include "FriendRejectFriendRequest.h"
#include "FriendRejectFriendResponse.h"
#include "FriendRequestFriendRequest.h"
#include "FriendRequestFriendResponse.h"
#include "FriendUnfriendRequest.h"
#include "FriendUnfriendResponse.h"
#include "GhostGetFriendGhostDataRequest.h"
#include "GhostGetFriendGhostDataResponse.h"
#include "GhostGetRankingGhostDataRequest.h"
#include "GhostGetRankingGhostDataResponse.h"
#include "HealthCheckRequest.h"
#include "HealthCheckResponse.h"
#include "HttpReceivedDelegateDelegate.h"
#include "LegendCompeCheckLegendCompeRewardRequest.h"
#include "LegendCompeCheckLegendCompeRewardResponse.h"
#include "LobbyGenerateLobbyRequest.h"
#include "LobbyGenerateLobbyResponse.h"
#include "LobbyGetEosLobbyIdRequest.h"
#include "LobbyGetEosLobbyIdResponse.h"
#include "LobbyKeepAliveRequest.h"
#include "LobbyKeepAliveResponse.h"
#include "LobbyRemoveLobbyRequest.h"
#include "LobbyRemoveLobbyResponse.h"
#include "LoginCheckRequest.h"
#include "LoginCheckResponse.h"
#include "MasterDataGetMaintenanceScheduleRequest.h"
#include "MasterDataGetMaintenanceScheduleResponse.h"
#include "MasterDataGetMasterDataRequest.h"
#include "MasterDataGetMasterDataResponse.h"
#include "MasterDataGetVersionRequest.h"
#include "MasterDataGetVersionResponse.h"
#include "MatchmakingDescribeRequest.h"
#include "MatchmakingDescribeResponse.h"
#include "MatchmakingStopRequest.h"
#include "MatchmakingStopResponse.h"
#include "MatchmakingSubscribeFestaRequest.h"
#include "MatchmakingSubscribeFestaResponse.h"
#include "MatchmakingSubscribeLegendCompeRequest.h"
#include "MatchmakingSubscribeLegendCompeResponse.h"
#include "MatchmakingSubscribeRankMatchRequest.h"
#include "MatchmakingSubscribeRankMatchResponse.h"
#include "MatchmakingUnsubscribeRequest.h"
#include "MatchmakingUnsubscribeResponse.h"
#include "OntSaveOntParticipantUserRequest.h"
#include "OntSaveOntParticipantUserResponse.h"
#include "OperationSaveAutoReportRequest.h"
#include "OperationSaveAutoReportResponse.h"
#include "OperationSaveOperatorReportRequest.h"
#include "OperationSaveOperatorReportResponse.h"
#include "QueryTimestampCompleteDelegateDelegate.h"
#include "RankingGetFriendRankingFestaPointRequest.h"
#include "RankingGetFriendRankingFestaPointResponse.h"
#include "RankingGetFriendRankingLegendCompeRequest.h"
#include "RankingGetFriendRankingLegendCompeResponse.h"
#include "RankingGetFriendRankingRankMatchRequest.h"
#include "RankingGetFriendRankingRankMatchResponse.h"
#include "RankingGetMyRankingFestaPointRequest.h"
#include "RankingGetMyRankingFestaPointResponse.h"
#include "RankingGetMyRankingLegendCompeRequest.h"
#include "RankingGetMyRankingLegendCompeResponse.h"
#include "RankingGetMyRankingRankMatchRequest.h"
#include "RankingGetMyRankingRankMatchResponse.h"
#include "RankingGetMyRankingTimeTrialRequest.h"
#include "RankingGetMyRankingTimeTrialResponse.h"
#include "RankingGetRankingFestaPointRequest.h"
#include "RankingGetRankingFestaPointResponse.h"
#include "RankingGetRankingLegendCompeRequest.h"
#include "RankingGetRankingLegendCompeResponse.h"
#include "RankingGetRankingRankMatchRequest.h"
#include "RankingGetRankingRankMatchResponse.h"
#include "RankingGetRankingTimeTrialRequest.h"
#include "RankingGetRankingTimeTrialResponse.h"
#include "ResultSaveFestaResultRequest.h"
#include "ResultSaveFestaResultResponse.h"
#include "ResultSaveLegendCompeResultRequest.h"
#include "ResultSaveLegendCompeResultResponse.h"
#include "ResultSaveRankMatchResultRequest.h"
#include "ResultSaveRankMatchResultResponse.h"
#include "ResultSaveTimeTrialResultRequest.h"
#include "ResultSaveTimeTrialResultResponse.h"
#include "RomCheckRomVersionRequest.h"
#include "RomCheckRomVersionResponse.h"
#include "SamplePart1Request.h"
#include "SamplePart1Response.h"
#include "SessionKeepaliveRequest.h"
#include "SessionKeepaliveResponse.h"
#include "StartSaveFestaStartRequest.h"
#include "StartSaveFestaStartResponse.h"
#include "StartSaveLegendCompeStartRequest.h"
#include "StartSaveLegendCompeStartResponse.h"
#include "StartSaveRankMatchStartRequest.h"
#include "StartSaveRankMatchStartResponse.h"
#include "TransferCompleteDelegateDelegate.h"
#include "TransferCompleteDetailDelegateDelegate.h"
#include "TransferProgressDelegateDelegate.h"
#include "UserGetDataRequest.h"
#include "UserGetDataResponse.h"
#include "UserGetPartsDataRequest.h"
#include "UserGetPartsDataResponse.h"
#include "UserGetUserIdsByPuidRequest.h"
#include "UserGetUserIdsByPuidResponse.h"
#include "UserGetUserIdsByUidRequest.h"
#include "UserGetUserIdsByUidResponse.h"
#include "UserGetUserNetworkSettingsRequest.h"
#include "UserGetUserNetworkSettingsResponse.h"
#include "UserGetUserSearchRequest.h"
#include "UserGetUserSearchResponse.h"
#include "UserNintendoSwitchOnlineCheckRequest.h"
#include "UserNintendoSwitchOnlineCheckResponse.h"
#include "UserSavePaidDlcOwnershipsRequest.h"
#include "UserSavePaidDlcOwnershipsResponse.h"
#include "UserSaveUserNetworkSettingsRequest.h"
#include "UserSaveUserNetworkSettingsResponse.h"
#include "HttpHelper.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UHttpHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHttpHelper();

    UFUNCTION(BlueprintCallable)
    static bool ValidateResCode(bool OutError, int32 ResCode, EResponseCodeAbstract& ResCodeAbstract);
    
    UFUNCTION(BlueprintCallable)
    static bool TransferSaveBytesToFile(const TArray<uint8>& Bytes, const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static int32 TransferReplayDataForUploadDetail(const FString& Uri, const TArray<uint8>& Bytes, FTransferCompleteDetailDelegate OnComplete, FTransferProgressDelegate OnProgress, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static int32 TransferReplayDataForUpload(const FString& Uri, const TArray<uint8>& Bytes, FTransferCompleteDelegate OnComplete, FTransferProgressDelegate OnProgress, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> TransferMakeRandomBytes(int32 Size);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString TransferGhostDataGetUriForUpload();
    
    UFUNCTION(BlueprintCallable)
    static int32 TransferGhostDataForUploadDetail(const FString& Uri, const TArray<uint8>& Bytes, FTransferCompleteDetailDelegate OnComplete, FTransferProgressDelegate OnProgress, int32 courseId, int32 speedType, const FString& Date);
    
    UFUNCTION(BlueprintCallable)
    static int32 TransferGhostDataForUpload(const FString& Uri, const TArray<uint8>& Bytes, FTransferCompleteDelegate OnComplete, FTransferProgressDelegate OnProgress, int32 courseId, int32 speedType, const FString& Date);
    
    UFUNCTION(BlueprintCallable)
    static void TransferDataTryCancel(int32 Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 TransferDataGetInvalidHandle();
    
    UFUNCTION(BlueprintCallable)
    static int32 TransferDataForDownloadDetail(const FString& Uri, TArray<uint8>& Bytes, FTransferCompleteDetailDelegate OnComplete, FTransferProgressDelegate OnProgress);
    
    UFUNCTION(BlueprintCallable)
    static int32 TransferDataForDownload(const FString& Uri, TArray<uint8>& Bytes, FTransferCompleteDelegate OnComplete, FTransferProgressDelegate OnProgress);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserSaveUserNetworkSettings_NoResend(const FUserSaveUserNetworkSettingsRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserSaveUserNetworkSettings_Callbacked_NoResend(const FUserSaveUserNetworkSettingsRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserSaveUserNetworkSettings_Callbacked(const FUserSaveUserNetworkSettingsRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserSaveUserNetworkSettings(const FUserSaveUserNetworkSettingsRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserSavePaidDlcOwnerships_NoResend(const FUserSavePaidDlcOwnershipsRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserSavePaidDlcOwnerships_Callbacked_NoResend(const FUserSavePaidDlcOwnershipsRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserSavePaidDlcOwnerships_Callbacked(const FUserSavePaidDlcOwnershipsRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserSavePaidDlcOwnerships(const FUserSavePaidDlcOwnershipsRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserNintendoSwitchOnlineCheck_NoResend(const FUserNintendoSwitchOnlineCheckRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserNintendoSwitchOnlineCheck_Callbacked_NoResend(const FUserNintendoSwitchOnlineCheckRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserNintendoSwitchOnlineCheck_Callbacked(const FUserNintendoSwitchOnlineCheckRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserNintendoSwitchOnlineCheck(const FUserNintendoSwitchOnlineCheckRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetUserSearch_NoResend(const FUserGetUserSearchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetUserSearch_Callbacked_NoResend(const FUserGetUserSearchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetUserSearch_Callbacked(const FUserGetUserSearchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetUserSearch(const FUserGetUserSearchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetUserNetworkSettings_NoResend(const FUserGetUserNetworkSettingsRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetUserNetworkSettings_Callbacked_NoResend(const FUserGetUserNetworkSettingsRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetUserNetworkSettings_Callbacked(const FUserGetUserNetworkSettingsRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetUserNetworkSettings(const FUserGetUserNetworkSettingsRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetUserIdsByUid_NoResend(const FUserGetUserIdsByUidRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetUserIdsByUid_Callbacked_NoResend(const FUserGetUserIdsByUidRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetUserIdsByUid_Callbacked(const FUserGetUserIdsByUidRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetUserIdsByUid(const FUserGetUserIdsByUidRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetUserIdsByPuid_NoResend(const FUserGetUserIdsByPuidRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetUserIdsByPuid_Callbacked_NoResend(const FUserGetUserIdsByPuidRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetUserIdsByPuid_Callbacked(const FUserGetUserIdsByPuidRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetUserIdsByPuid(const FUserGetUserIdsByPuidRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetPartsData_NoResend(const FUserGetPartsDataRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetPartsData_Callbacked_NoResend(const FUserGetPartsDataRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetPartsData_Callbacked(const FUserGetPartsDataRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetPartsData(const FUserGetPartsDataRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetData_NoResend(const FUserGetDataRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetData_Callbacked_NoResend(const FUserGetDataRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_UserGetData_Callbacked(const FUserGetDataRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_UserGetData(const FUserGetDataRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_StartSaveRankMatchStart_NoResend(const FStartSaveRankMatchStartRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_StartSaveRankMatchStart_Callbacked_NoResend(const FStartSaveRankMatchStartRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_StartSaveRankMatchStart_Callbacked(const FStartSaveRankMatchStartRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_StartSaveRankMatchStart(const FStartSaveRankMatchStartRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_StartSaveLegendCompeStart_NoResend(const FStartSaveLegendCompeStartRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_StartSaveLegendCompeStart_Callbacked_NoResend(const FStartSaveLegendCompeStartRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_StartSaveLegendCompeStart_Callbacked(const FStartSaveLegendCompeStartRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_StartSaveLegendCompeStart(const FStartSaveLegendCompeStartRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_StartSaveFestaStart_NoResend(const FStartSaveFestaStartRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_StartSaveFestaStart_Callbacked_NoResend(const FStartSaveFestaStartRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_StartSaveFestaStart_Callbacked(const FStartSaveFestaStartRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_StartSaveFestaStart(const FStartSaveFestaStartRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_SessionKeepalive_NoResend(const FSessionKeepaliveRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_SessionKeepalive_Callbacked_NoResend(const FSessionKeepaliveRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_SessionKeepalive_Callbacked(const FSessionKeepaliveRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_SessionKeepalive(const FSessionKeepaliveRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_SamplePart1_NoResend(const FSamplePart1Request& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_SamplePart1_Callbacked_NoResend(const FSamplePart1Request& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_SamplePart1_Callbacked(const FSamplePart1Request& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_SamplePart1(const FSamplePart1Request& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RomCheckRomVersion_NoResend(const FRomCheckRomVersionRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RomCheckRomVersion_Callbacked_NoResend(const FRomCheckRomVersionRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RomCheckRomVersion_Callbacked(const FRomCheckRomVersionRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RomCheckRomVersion(const FRomCheckRomVersionRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_ResultSaveTimeTrialResult_NoResend(const FResultSaveTimeTrialResultRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_ResultSaveTimeTrialResult_Callbacked_NoResend(const FResultSaveTimeTrialResultRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_ResultSaveTimeTrialResult_Callbacked(const FResultSaveTimeTrialResultRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_ResultSaveTimeTrialResult(const FResultSaveTimeTrialResultRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_ResultSaveRankMatchResult_NoResend(const FResultSaveRankMatchResultRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_ResultSaveRankMatchResult_Callbacked_NoResend(const FResultSaveRankMatchResultRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_ResultSaveRankMatchResult_Callbacked(const FResultSaveRankMatchResultRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_ResultSaveRankMatchResult(const FResultSaveRankMatchResultRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_ResultSaveLegendCompeResult_NoResend(const FResultSaveLegendCompeResultRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_ResultSaveLegendCompeResult_Callbacked_NoResend(const FResultSaveLegendCompeResultRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_ResultSaveLegendCompeResult_Callbacked(const FResultSaveLegendCompeResultRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_ResultSaveLegendCompeResult(const FResultSaveLegendCompeResultRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_ResultSaveFestaResult_NoResend(const FResultSaveFestaResultRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_ResultSaveFestaResult_Callbacked_NoResend(const FResultSaveFestaResultRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_ResultSaveFestaResult_Callbacked(const FResultSaveFestaResultRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_ResultSaveFestaResult(const FResultSaveFestaResultRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetRankingTimeTrial_NoResend(const FRankingGetRankingTimeTrialRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetRankingTimeTrial_Callbacked_NoResend(const FRankingGetRankingTimeTrialRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetRankingTimeTrial_Callbacked(const FRankingGetRankingTimeTrialRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetRankingTimeTrial(const FRankingGetRankingTimeTrialRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetRankingRankMatch_NoResend(const FRankingGetRankingRankMatchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetRankingRankMatch_Callbacked_NoResend(const FRankingGetRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetRankingRankMatch_Callbacked(const FRankingGetRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetRankingRankMatch(const FRankingGetRankingRankMatchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetRankingLegendCompe_NoResend(const FRankingGetRankingLegendCompeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetRankingLegendCompe_Callbacked_NoResend(const FRankingGetRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetRankingLegendCompe_Callbacked(const FRankingGetRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetRankingLegendCompe(const FRankingGetRankingLegendCompeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetRankingFestaPoint_NoResend(const FRankingGetRankingFestaPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetRankingFestaPoint_Callbacked_NoResend(const FRankingGetRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetRankingFestaPoint_Callbacked(const FRankingGetRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetRankingFestaPoint(const FRankingGetRankingFestaPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetMyRankingTimeTrial_NoResend(const FRankingGetMyRankingTimeTrialRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetMyRankingTimeTrial_Callbacked_NoResend(const FRankingGetMyRankingTimeTrialRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetMyRankingTimeTrial_Callbacked(const FRankingGetMyRankingTimeTrialRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetMyRankingTimeTrial(const FRankingGetMyRankingTimeTrialRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetMyRankingRankMatch_NoResend(const FRankingGetMyRankingRankMatchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetMyRankingRankMatch_Callbacked_NoResend(const FRankingGetMyRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetMyRankingRankMatch_Callbacked(const FRankingGetMyRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetMyRankingRankMatch(const FRankingGetMyRankingRankMatchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetMyRankingLegendCompe_NoResend(const FRankingGetMyRankingLegendCompeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetMyRankingLegendCompe_Callbacked_NoResend(const FRankingGetMyRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetMyRankingLegendCompe_Callbacked(const FRankingGetMyRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetMyRankingLegendCompe(const FRankingGetMyRankingLegendCompeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetMyRankingFestaPoint_NoResend(const FRankingGetMyRankingFestaPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetMyRankingFestaPoint_Callbacked_NoResend(const FRankingGetMyRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetMyRankingFestaPoint_Callbacked(const FRankingGetMyRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetMyRankingFestaPoint(const FRankingGetMyRankingFestaPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetFriendRankingRankMatch_NoResend(const FRankingGetFriendRankingRankMatchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetFriendRankingRankMatch_Callbacked_NoResend(const FRankingGetFriendRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetFriendRankingRankMatch_Callbacked(const FRankingGetFriendRankingRankMatchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetFriendRankingRankMatch(const FRankingGetFriendRankingRankMatchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetFriendRankingLegendCompe_NoResend(const FRankingGetFriendRankingLegendCompeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetFriendRankingLegendCompe_Callbacked_NoResend(const FRankingGetFriendRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetFriendRankingLegendCompe_Callbacked(const FRankingGetFriendRankingLegendCompeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetFriendRankingLegendCompe(const FRankingGetFriendRankingLegendCompeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetFriendRankingFestaPoint_NoResend(const FRankingGetFriendRankingFestaPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetFriendRankingFestaPoint_Callbacked_NoResend(const FRankingGetFriendRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_RankingGetFriendRankingFestaPoint_Callbacked(const FRankingGetFriendRankingFestaPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_RankingGetFriendRankingFestaPoint(const FRankingGetFriendRankingFestaPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_OperationSaveOperatorReport_NoResend(const FOperationSaveOperatorReportRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_OperationSaveOperatorReport_Callbacked_NoResend(const FOperationSaveOperatorReportRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_OperationSaveOperatorReport_Callbacked(const FOperationSaveOperatorReportRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_OperationSaveOperatorReport(const FOperationSaveOperatorReportRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_OperationSaveAutoReport_NoResend(const FOperationSaveAutoReportRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_OperationSaveAutoReport_Callbacked_NoResend(const FOperationSaveAutoReportRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_OperationSaveAutoReport_Callbacked(const FOperationSaveAutoReportRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_OperationSaveAutoReport(const FOperationSaveAutoReportRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_OntSaveOntParticipantUser_NoResend(const FOntSaveOntParticipantUserRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_OntSaveOntParticipantUser_Callbacked_NoResend(const FOntSaveOntParticipantUserRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_OntSaveOntParticipantUser_Callbacked(const FOntSaveOntParticipantUserRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_OntSaveOntParticipantUser(const FOntSaveOntParticipantUserRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingUnsubscribe_NoResend(const FMatchmakingUnsubscribeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingUnsubscribe_Callbacked_NoResend(const FMatchmakingUnsubscribeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingUnsubscribe_Callbacked(const FMatchmakingUnsubscribeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingUnsubscribe(const FMatchmakingUnsubscribeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingSubscribeRankMatch_NoResend(const FMatchmakingSubscribeRankMatchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingSubscribeRankMatch_Callbacked_NoResend(const FMatchmakingSubscribeRankMatchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingSubscribeRankMatch_Callbacked(const FMatchmakingSubscribeRankMatchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingSubscribeRankMatch(const FMatchmakingSubscribeRankMatchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingSubscribeLegendCompe_NoResend(const FMatchmakingSubscribeLegendCompeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingSubscribeLegendCompe_Callbacked_NoResend(const FMatchmakingSubscribeLegendCompeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingSubscribeLegendCompe_Callbacked(const FMatchmakingSubscribeLegendCompeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingSubscribeLegendCompe(const FMatchmakingSubscribeLegendCompeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingSubscribeFesta_NoResend(const FMatchmakingSubscribeFestaRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingSubscribeFesta_Callbacked_NoResend(const FMatchmakingSubscribeFestaRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingSubscribeFesta_Callbacked(const FMatchmakingSubscribeFestaRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingSubscribeFesta(const FMatchmakingSubscribeFestaRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingStop_NoResend(const FMatchmakingStopRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingStop_Callbacked_NoResend(const FMatchmakingStopRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingStop_Callbacked(const FMatchmakingStopRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingStop(const FMatchmakingStopRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingDescribe_NoResend(const FMatchmakingDescribeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingDescribe_Callbacked_NoResend(const FMatchmakingDescribeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MatchmakingDescribe_Callbacked(const FMatchmakingDescribeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MatchmakingDescribe(const FMatchmakingDescribeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MasterDataGetVersion_NoResend(const FMasterDataGetVersionRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MasterDataGetVersion_Callbacked_NoResend(const FMasterDataGetVersionRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MasterDataGetVersion_Callbacked(const FMasterDataGetVersionRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MasterDataGetVersion(const FMasterDataGetVersionRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MasterDataGetMasterData_NoResend(const FMasterDataGetMasterDataRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MasterDataGetMasterData_Callbacked_NoResend(const FMasterDataGetMasterDataRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MasterDataGetMasterData_Callbacked(const FMasterDataGetMasterDataRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MasterDataGetMasterData(const FMasterDataGetMasterDataRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MasterDataGetMaintenanceSchedule_NoResend(const FMasterDataGetMaintenanceScheduleRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MasterDataGetMaintenanceSchedule_Callbacked_NoResend(const FMasterDataGetMaintenanceScheduleRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_MasterDataGetMaintenanceSchedule_Callbacked(const FMasterDataGetMaintenanceScheduleRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_MasterDataGetMaintenanceSchedule(const FMasterDataGetMaintenanceScheduleRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LoginCheck_NoResend(const FLoginCheckRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LoginCheck_Callbacked_NoResend(const FLoginCheckRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LoginCheck_Callbacked(const FLoginCheckRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LoginCheck(const FLoginCheckRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LobbyRemoveLobby_NoResend(const FLobbyRemoveLobbyRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LobbyRemoveLobby_Callbacked_NoResend(const FLobbyRemoveLobbyRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LobbyRemoveLobby_Callbacked(const FLobbyRemoveLobbyRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LobbyRemoveLobby(const FLobbyRemoveLobbyRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LobbyKeepAlive_NoResend(const FLobbyKeepAliveRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LobbyKeepAlive_Callbacked_NoResend(const FLobbyKeepAliveRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LobbyKeepAlive_Callbacked(const FLobbyKeepAliveRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LobbyKeepAlive(const FLobbyKeepAliveRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LobbyGetEosLobbyId_NoResend(const FLobbyGetEosLobbyIdRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LobbyGetEosLobbyId_Callbacked_NoResend(const FLobbyGetEosLobbyIdRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LobbyGetEosLobbyId_Callbacked(const FLobbyGetEosLobbyIdRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LobbyGetEosLobbyId(const FLobbyGetEosLobbyIdRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LobbyGenerateLobby_NoResend(const FLobbyGenerateLobbyRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LobbyGenerateLobby_Callbacked_NoResend(const FLobbyGenerateLobbyRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LobbyGenerateLobby_Callbacked(const FLobbyGenerateLobbyRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LobbyGenerateLobby(const FLobbyGenerateLobbyRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LegendCompeCheckLegendCompeReward_NoResend(const FLegendCompeCheckLegendCompeRewardRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LegendCompeCheckLegendCompeReward_Callbacked_NoResend(const FLegendCompeCheckLegendCompeRewardRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_LegendCompeCheckLegendCompeReward_Callbacked(const FLegendCompeCheckLegendCompeRewardRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_LegendCompeCheckLegendCompeReward(const FLegendCompeCheckLegendCompeRewardRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_HealthCheck_NoResend(const FHealthCheckRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_HealthCheck_Callbacked_NoResend(const FHealthCheckRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_HealthCheck_Callbacked(const FHealthCheckRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_HealthCheck(const FHealthCheckRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_GhostGetRankingGhostData_NoResend(const FGhostGetRankingGhostDataRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_GhostGetRankingGhostData_Callbacked_NoResend(const FGhostGetRankingGhostDataRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_GhostGetRankingGhostData_Callbacked(const FGhostGetRankingGhostDataRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_GhostGetRankingGhostData(const FGhostGetRankingGhostDataRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_GhostGetFriendGhostData_NoResend(const FGhostGetFriendGhostDataRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_GhostGetFriendGhostData_Callbacked_NoResend(const FGhostGetFriendGhostDataRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_GhostGetFriendGhostData_Callbacked(const FGhostGetFriendGhostDataRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_GhostGetFriendGhostData(const FGhostGetFriendGhostDataRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendUnfriend_NoResend(const FFriendUnfriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendUnfriend_Callbacked_NoResend(const FFriendUnfriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendUnfriend_Callbacked(const FFriendUnfriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendUnfriend(const FFriendUnfriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendRequestFriend_NoResend(const FFriendRequestFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendRequestFriend_Callbacked_NoResend(const FFriendRequestFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendRequestFriend_Callbacked(const FFriendRequestFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendRequestFriend(const FFriendRequestFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendRejectFriend_NoResend(const FFriendRejectFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendRejectFriend_Callbacked_NoResend(const FFriendRejectFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendRejectFriend_Callbacked(const FFriendRejectFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendRejectFriend(const FFriendRejectFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendNotifyFriend_NoResend(const FFriendNotifyFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendNotifyFriend_Callbacked_NoResend(const FFriendNotifyFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendNotifyFriend_Callbacked(const FFriendNotifyFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendNotifyFriend(const FFriendNotifyFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendGetFriendList_NoResend(const FFriendGetFriendListRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendGetFriendList_Callbacked_NoResend(const FFriendGetFriendListRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendGetFriendList_Callbacked(const FFriendGetFriendListRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendGetFriendList(const FFriendGetFriendListRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendGetFriendLastDate_NoResend(const FFriendGetFriendLastDateRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendGetFriendLastDate_Callbacked_NoResend(const FFriendGetFriendLastDateRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendGetFriendLastDate_Callbacked(const FFriendGetFriendLastDateRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendGetFriendLastDate(const FFriendGetFriendLastDateRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendCancelFriend_NoResend(const FFriendCancelFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendCancelFriend_Callbacked_NoResend(const FFriendCancelFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendCancelFriend_Callbacked(const FFriendCancelFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendCancelFriend(const FFriendCancelFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendApplyFriend_NoResend(const FFriendApplyFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendApplyFriend_Callbacked_NoResend(const FFriendApplyFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendApplyFriend_Callbacked(const FFriendApplyFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendApplyFriend(const FFriendApplyFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendAcceptFriend_NoResend(const FFriendAcceptFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendAcceptFriend_Callbacked_NoResend(const FFriendAcceptFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FriendAcceptFriend_Callbacked(const FFriendAcceptFriendRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FriendAcceptFriend(const FFriendAcceptFriendRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FestaFestaTop_NoResend(const FFestaFestaTopRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FestaFestaTop_Callbacked_NoResend(const FFestaFestaTopRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FestaFestaTop_Callbacked(const FFestaFestaTopRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FestaFestaTop(const FFestaFestaTopRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FestaCheckFestaReward_NoResend(const FFestaCheckFestaRewardRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FestaCheckFestaReward_Callbacked_NoResend(const FFestaCheckFestaRewardRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FestaCheckFestaReward_Callbacked(const FFestaCheckFestaRewardRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FestaCheckFestaReward(const FFestaCheckFestaRewardRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FairPointSubFairPoint_NoResend(const FFairPointSubFairPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FairPointSubFairPoint_Callbacked_NoResend(const FFairPointSubFairPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FairPointSubFairPoint_Callbacked(const FFairPointSubFairPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FairPointSubFairPoint(const FFairPointSubFairPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FairPointCheckFairPoint_NoResend(const FFairPointCheckFairPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FairPointCheckFairPoint_Callbacked_NoResend(const FFairPointCheckFairPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FairPointCheckFairPoint_Callbacked(const FFairPointCheckFairPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FairPointCheckFairPoint(const FFairPointCheckFairPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FairPointAddFairPoint_NoResend(const FFairPointAddFairPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FairPointAddFairPoint_Callbacked_NoResend(const FFairPointAddFairPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_FairPointAddFairPoint_Callbacked(const FFairPointAddFairPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_FairPointAddFairPoint(const FFairPointAddFairPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugMatchmakingSubscribeRankMatch_NoResend(const FDebugMatchmakingSubscribeRankMatchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugMatchmakingSubscribeRankMatch_Callbacked_NoResend(const FDebugMatchmakingSubscribeRankMatchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugMatchmakingSubscribeRankMatch_Callbacked(const FDebugMatchmakingSubscribeRankMatchRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugMatchmakingSubscribeRankMatch(const FDebugMatchmakingSubscribeRankMatchRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugMatchmakingSubscribeLegendCompe_NoResend(const FDebugMatchmakingSubscribeLegendCompeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugMatchmakingSubscribeLegendCompe_Callbacked_NoResend(const FDebugMatchmakingSubscribeLegendCompeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugMatchmakingSubscribeLegendCompe_Callbacked(const FDebugMatchmakingSubscribeLegendCompeRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugMatchmakingSubscribeLegendCompe(const FDebugMatchmakingSubscribeLegendCompeRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugMatchmakingSubscribeFesta_NoResend(const FDebugMatchmakingSubscribeFestaRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugMatchmakingSubscribeFesta_Callbacked_NoResend(const FDebugMatchmakingSubscribeFestaRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugMatchmakingSubscribeFesta_Callbacked(const FDebugMatchmakingSubscribeFestaRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugMatchmakingSubscribeFesta(const FDebugMatchmakingSubscribeFestaRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugConnectTest_NoResend(const FDebugConnectTestRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugConnectTest_Callbacked_NoResend(const FDebugConnectTestRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugConnectTest_Callbacked(const FDebugConnectTestRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugConnectTest(const FDebugConnectTestRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugChangeRankMatchRate_NoResend(const FDebugChangeRankMatchRateRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugChangeRankMatchRate_Callbacked_NoResend(const FDebugChangeRankMatchRateRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugChangeRankMatchRate_Callbacked(const FDebugChangeRankMatchRateRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugChangeRankMatchRate(const FDebugChangeRankMatchRateRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugChangeFairPlayPoint_NoResend(const FDebugChangeFairPlayPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugChangeFairPlayPoint_Callbacked_NoResend(const FDebugChangeFairPlayPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_DebugChangeFairPlayPoint_Callbacked(const FDebugChangeFairPlayPointRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_DebugChangeFairPlayPoint(const FDebugChangeFairPlayPointRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_CompensationGetCompensations_NoResend(const FCompensationGetCompensationsRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_CompensationGetCompensations_Callbacked_NoResend(const FCompensationGetCompensationsRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_CompensationGetCompensations_Callbacked(const FCompensationGetCompensationsRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_CompensationGetCompensations(const FCompensationGetCompensationsRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_CntReplayGetSignedUrl_NoResend(const FCntReplayGetSignedUrlRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static void Send_CntReplayGetSignedUrl_Callbacked_NoResend(const FCntReplayGetSignedUrlRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static void Send_CntReplayGetSignedUrl_Callbacked(const FCntReplayGetSignedUrlRequest& Request, FHttpReceivedDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 Send_CntReplayGetSignedUrl(const FCntReplayGetSignedUrlRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_UserSaveUserNetworkSettings(int32 Handle, bool& OutError, int32& ResCode, FUserSaveUserNetworkSettingsResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_UserSavePaidDlcOwnerships(int32 Handle, bool& OutError, int32& ResCode, FUserSavePaidDlcOwnershipsResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_UserNintendoSwitchOnlineCheck(int32 Handle, bool& OutError, int32& ResCode, FUserNintendoSwitchOnlineCheckResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_UserGetUserSearch(int32 Handle, bool& OutError, int32& ResCode, FUserGetUserSearchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_UserGetUserNetworkSettings(int32 Handle, bool& OutError, int32& ResCode, FUserGetUserNetworkSettingsResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_UserGetUserIdsByUid(int32 Handle, bool& OutError, int32& ResCode, FUserGetUserIdsByUidResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_UserGetUserIdsByPuid(int32 Handle, bool& OutError, int32& ResCode, FUserGetUserIdsByPuidResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_UserGetPartsData(int32 Handle, bool& OutError, int32& ResCode, FUserGetPartsDataResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_UserGetData(int32 Handle, bool& OutError, int32& ResCode, FUserGetDataResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_StartSaveRankMatchStart(int32 Handle, bool& OutError, int32& ResCode, FStartSaveRankMatchStartResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_StartSaveLegendCompeStart(int32 Handle, bool& OutError, int32& ResCode, FStartSaveLegendCompeStartResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_StartSaveFestaStart(int32 Handle, bool& OutError, int32& ResCode, FStartSaveFestaStartResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_SessionKeepalive(int32 Handle, bool& OutError, int32& ResCode, FSessionKeepaliveResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_SamplePart1(int32 Handle, bool& OutError, int32& ResCode, FSamplePart1Response& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RomCheckRomVersion(int32 Handle, bool& OutError, int32& ResCode, FRomCheckRomVersionResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_ResultSaveTimeTrialResult(int32 Handle, bool& OutError, int32& ResCode, FResultSaveTimeTrialResultResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_ResultSaveRankMatchResult(int32 Handle, bool& OutError, int32& ResCode, FResultSaveRankMatchResultResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_ResultSaveLegendCompeResult(int32 Handle, bool& OutError, int32& ResCode, FResultSaveLegendCompeResultResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_ResultSaveFestaResult(int32 Handle, bool& OutError, int32& ResCode, FResultSaveFestaResultResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RankingGetRankingTimeTrial(int32 Handle, bool& OutError, int32& ResCode, FRankingGetRankingTimeTrialResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RankingGetRankingRankMatch(int32 Handle, bool& OutError, int32& ResCode, FRankingGetRankingRankMatchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RankingGetRankingLegendCompe(int32 Handle, bool& OutError, int32& ResCode, FRankingGetRankingLegendCompeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RankingGetRankingFestaPoint(int32 Handle, bool& OutError, int32& ResCode, FRankingGetRankingFestaPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RankingGetMyRankingTimeTrial(int32 Handle, bool& OutError, int32& ResCode, FRankingGetMyRankingTimeTrialResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RankingGetMyRankingRankMatch(int32 Handle, bool& OutError, int32& ResCode, FRankingGetMyRankingRankMatchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RankingGetMyRankingLegendCompe(int32 Handle, bool& OutError, int32& ResCode, FRankingGetMyRankingLegendCompeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RankingGetMyRankingFestaPoint(int32 Handle, bool& OutError, int32& ResCode, FRankingGetMyRankingFestaPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RankingGetFriendRankingRankMatch(int32 Handle, bool& OutError, int32& ResCode, FRankingGetFriendRankingRankMatchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RankingGetFriendRankingLegendCompe(int32 Handle, bool& OutError, int32& ResCode, FRankingGetFriendRankingLegendCompeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_RankingGetFriendRankingFestaPoint(int32 Handle, bool& OutError, int32& ResCode, FRankingGetFriendRankingFestaPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_OperationSaveOperatorReport(int32 Handle, bool& OutError, int32& ResCode, FOperationSaveOperatorReportResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_OperationSaveAutoReport(int32 Handle, bool& OutError, int32& ResCode, FOperationSaveAutoReportResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_OntSaveOntParticipantUser(int32 Handle, bool& OutError, int32& ResCode, FOntSaveOntParticipantUserResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_MatchmakingUnsubscribe(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingUnsubscribeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_MatchmakingSubscribeRankMatch(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingSubscribeRankMatchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_MatchmakingSubscribeLegendCompe(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingSubscribeLegendCompeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_MatchmakingSubscribeFesta(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingSubscribeFestaResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_MatchmakingStop(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingStopResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_MatchmakingDescribe(int32 Handle, bool& OutError, int32& ResCode, FMatchmakingDescribeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_MasterDataGetVersion(int32 Handle, bool& OutError, int32& ResCode, FMasterDataGetVersionResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_MasterDataGetMasterData(int32 Handle, bool& OutError, int32& ResCode, FMasterDataGetMasterDataResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_MasterDataGetMaintenanceSchedule(int32 Handle, bool& OutError, int32& ResCode, FMasterDataGetMaintenanceScheduleResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_LoginCheck(int32 Handle, bool& OutError, int32& ResCode, FLoginCheckResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_LobbyRemoveLobby(int32 Handle, bool& OutError, int32& ResCode, FLobbyRemoveLobbyResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_LobbyKeepAlive(int32 Handle, bool& OutError, int32& ResCode, FLobbyKeepAliveResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_LobbyGetEosLobbyId(int32 Handle, bool& OutError, int32& ResCode, FLobbyGetEosLobbyIdResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_LobbyGenerateLobby(int32 Handle, bool& OutError, int32& ResCode, FLobbyGenerateLobbyResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_LegendCompeCheckLegendCompeReward(int32 Handle, bool& OutError, int32& ResCode, FLegendCompeCheckLegendCompeRewardResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_HealthCheck(int32 Handle, bool& OutError, int32& ResCode, FHealthCheckResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_GhostGetRankingGhostData(int32 Handle, bool& OutError, int32& ResCode, FGhostGetRankingGhostDataResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_GhostGetFriendGhostData(int32 Handle, bool& OutError, int32& ResCode, FGhostGetFriendGhostDataResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FriendUnfriend(int32 Handle, bool& OutError, int32& ResCode, FFriendUnfriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FriendRequestFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendRequestFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FriendRejectFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendRejectFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FriendNotifyFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendNotifyFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FriendGetFriendList(int32 Handle, bool& OutError, int32& ResCode, FFriendGetFriendListResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FriendGetFriendLastDate(int32 Handle, bool& OutError, int32& ResCode, FFriendGetFriendLastDateResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FriendCancelFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendCancelFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FriendApplyFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendApplyFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FriendAcceptFriend(int32 Handle, bool& OutError, int32& ResCode, FFriendAcceptFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FestaFestaTop(int32 Handle, bool& OutError, int32& ResCode, FFestaFestaTopResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FestaCheckFestaReward(int32 Handle, bool& OutError, int32& ResCode, FFestaCheckFestaRewardResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FairPointSubFairPoint(int32 Handle, bool& OutError, int32& ResCode, FFairPointSubFairPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FairPointCheckFairPoint(int32 Handle, bool& OutError, int32& ResCode, FFairPointCheckFairPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_FairPointAddFairPoint(int32 Handle, bool& OutError, int32& ResCode, FFairPointAddFairPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_DebugMatchmakingSubscribeRankMatch(int32 Handle, bool& OutError, int32& ResCode, FDebugMatchmakingSubscribeRankMatchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_DebugMatchmakingSubscribeLegendCompe(int32 Handle, bool& OutError, int32& ResCode, FDebugMatchmakingSubscribeLegendCompeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_DebugMatchmakingSubscribeFesta(int32 Handle, bool& OutError, int32& ResCode, FDebugMatchmakingSubscribeFestaResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_DebugConnectTest(int32 Handle, bool& OutError, int32& ResCode, FDebugConnectTestResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_DebugChangeRankMatchRate(int32 Handle, bool& OutError, int32& ResCode, FDebugChangeRankMatchRateResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_DebugChangeFairPlayPoint(int32 Handle, bool& OutError, int32& ResCode, FDebugChangeFairPlayPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_CompensationGetCompensations(int32 Handle, bool& OutError, int32& ResCode, FCompensationGetCompensationsResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static bool Receive_CntReplayGetSignedUrl(int32 Handle, bool& OutError, int32& ResCode, FCntReplayGetSignedUrlResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void QueryServerTime(FQueryTimestampCompleteDelegate OnComplete);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_UserSaveUserNetworkSettings(const FString& OutData, int32& ResCode, FUserSaveUserNetworkSettingsResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_UserSavePaidDlcOwnerships(const FString& OutData, int32& ResCode, FUserSavePaidDlcOwnershipsResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_UserNintendoSwitchOnlineCheck(const FString& OutData, int32& ResCode, FUserNintendoSwitchOnlineCheckResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_UserGetUserSearch(const FString& OutData, int32& ResCode, FUserGetUserSearchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_UserGetUserNetworkSettings(const FString& OutData, int32& ResCode, FUserGetUserNetworkSettingsResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_UserGetUserIdsByUid(const FString& OutData, int32& ResCode, FUserGetUserIdsByUidResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_UserGetUserIdsByPuid(const FString& OutData, int32& ResCode, FUserGetUserIdsByPuidResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_UserGetPartsData(const FString& OutData, int32& ResCode, FUserGetPartsDataResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_UserGetData(const FString& OutData, int32& ResCode, FUserGetDataResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_StartSaveRankMatchStart(const FString& OutData, int32& ResCode, FStartSaveRankMatchStartResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_StartSaveLegendCompeStart(const FString& OutData, int32& ResCode, FStartSaveLegendCompeStartResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_StartSaveFestaStart(const FString& OutData, int32& ResCode, FStartSaveFestaStartResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_SessionKeepalive(const FString& OutData, int32& ResCode, FSessionKeepaliveResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_SamplePart1(const FString& OutData, int32& ResCode, FSamplePart1Response& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RomCheckRomVersion(const FString& OutData, int32& ResCode, FRomCheckRomVersionResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_ResultSaveTimeTrialResult(const FString& OutData, int32& ResCode, FResultSaveTimeTrialResultResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_ResultSaveRankMatchResult(const FString& OutData, int32& ResCode, FResultSaveRankMatchResultResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_ResultSaveLegendCompeResult(const FString& OutData, int32& ResCode, FResultSaveLegendCompeResultResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_ResultSaveFestaResult(const FString& OutData, int32& ResCode, FResultSaveFestaResultResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RankingGetRankingTimeTrial(const FString& OutData, int32& ResCode, FRankingGetRankingTimeTrialResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RankingGetRankingRankMatch(const FString& OutData, int32& ResCode, FRankingGetRankingRankMatchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RankingGetRankingLegendCompe(const FString& OutData, int32& ResCode, FRankingGetRankingLegendCompeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RankingGetRankingFestaPoint(const FString& OutData, int32& ResCode, FRankingGetRankingFestaPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RankingGetMyRankingTimeTrial(const FString& OutData, int32& ResCode, FRankingGetMyRankingTimeTrialResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RankingGetMyRankingRankMatch(const FString& OutData, int32& ResCode, FRankingGetMyRankingRankMatchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RankingGetMyRankingLegendCompe(const FString& OutData, int32& ResCode, FRankingGetMyRankingLegendCompeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RankingGetMyRankingFestaPoint(const FString& OutData, int32& ResCode, FRankingGetMyRankingFestaPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RankingGetFriendRankingRankMatch(const FString& OutData, int32& ResCode, FRankingGetFriendRankingRankMatchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RankingGetFriendRankingLegendCompe(const FString& OutData, int32& ResCode, FRankingGetFriendRankingLegendCompeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_RankingGetFriendRankingFestaPoint(const FString& OutData, int32& ResCode, FRankingGetFriendRankingFestaPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_OperationSaveOperatorReport(const FString& OutData, int32& ResCode, FOperationSaveOperatorReportResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_OperationSaveAutoReport(const FString& OutData, int32& ResCode, FOperationSaveAutoReportResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_OntSaveOntParticipantUser(const FString& OutData, int32& ResCode, FOntSaveOntParticipantUserResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_MatchmakingUnsubscribe(const FString& OutData, int32& ResCode, FMatchmakingUnsubscribeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_MatchmakingSubscribeRankMatch(const FString& OutData, int32& ResCode, FMatchmakingSubscribeRankMatchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_MatchmakingSubscribeLegendCompe(const FString& OutData, int32& ResCode, FMatchmakingSubscribeLegendCompeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_MatchmakingSubscribeFesta(const FString& OutData, int32& ResCode, FMatchmakingSubscribeFestaResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_MatchmakingStop(const FString& OutData, int32& ResCode, FMatchmakingStopResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_MatchmakingDescribe(const FString& OutData, int32& ResCode, FMatchmakingDescribeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_MasterDataGetVersion(const FString& OutData, int32& ResCode, FMasterDataGetVersionResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_MasterDataGetMasterData(const FString& OutData, int32& ResCode, FMasterDataGetMasterDataResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_MasterDataGetMaintenanceSchedule(const FString& OutData, int32& ResCode, FMasterDataGetMaintenanceScheduleResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_LoginCheck(const FString& OutData, int32& ResCode, FLoginCheckResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_LobbyRemoveLobby(const FString& OutData, int32& ResCode, FLobbyRemoveLobbyResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_LobbyKeepAlive(const FString& OutData, int32& ResCode, FLobbyKeepAliveResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_LobbyGetEosLobbyId(const FString& OutData, int32& ResCode, FLobbyGetEosLobbyIdResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_LobbyGenerateLobby(const FString& OutData, int32& ResCode, FLobbyGenerateLobbyResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_LegendCompeCheckLegendCompeReward(const FString& OutData, int32& ResCode, FLegendCompeCheckLegendCompeRewardResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_HealthCheck(const FString& OutData, int32& ResCode, FHealthCheckResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_GhostGetRankingGhostData(const FString& OutData, int32& ResCode, FGhostGetRankingGhostDataResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_GhostGetFriendGhostData(const FString& OutData, int32& ResCode, FGhostGetFriendGhostDataResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FriendUnfriend(const FString& OutData, int32& ResCode, FFriendUnfriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FriendRequestFriend(const FString& OutData, int32& ResCode, FFriendRequestFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FriendRejectFriend(const FString& OutData, int32& ResCode, FFriendRejectFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FriendNotifyFriend(const FString& OutData, int32& ResCode, FFriendNotifyFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FriendGetFriendList(const FString& OutData, int32& ResCode, FFriendGetFriendListResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FriendGetFriendLastDate(const FString& OutData, int32& ResCode, FFriendGetFriendLastDateResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FriendCancelFriend(const FString& OutData, int32& ResCode, FFriendCancelFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FriendApplyFriend(const FString& OutData, int32& ResCode, FFriendApplyFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FriendAcceptFriend(const FString& OutData, int32& ResCode, FFriendAcceptFriendResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FestaFestaTop(const FString& OutData, int32& ResCode, FFestaFestaTopResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FestaCheckFestaReward(const FString& OutData, int32& ResCode, FFestaCheckFestaRewardResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FairPointSubFairPoint(const FString& OutData, int32& ResCode, FFairPointSubFairPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FairPointCheckFairPoint(const FString& OutData, int32& ResCode, FFairPointCheckFairPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_FairPointAddFairPoint(const FString& OutData, int32& ResCode, FFairPointAddFairPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_DebugMatchmakingSubscribeRankMatch(const FString& OutData, int32& ResCode, FDebugMatchmakingSubscribeRankMatchResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_DebugMatchmakingSubscribeLegendCompe(const FString& OutData, int32& ResCode, FDebugMatchmakingSubscribeLegendCompeResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_DebugMatchmakingSubscribeFesta(const FString& OutData, int32& ResCode, FDebugMatchmakingSubscribeFestaResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_DebugConnectTest(const FString& OutData, int32& ResCode, FDebugConnectTestResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_DebugChangeRankMatchRate(const FString& OutData, int32& ResCode, FDebugChangeRankMatchRateResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_DebugChangeFairPlayPoint(const FString& OutData, int32& ResCode, FDebugChangeFairPlayPointResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_CompensationGetCompensations(const FString& OutData, int32& ResCode, FCompensationGetCompensationsResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void Parse_CntReplayGetSignedUrl(const FString& OutData, int32& ResCode, FCntReplayGetSignedUrlResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void LoginContextUpdate(const FLoginCheckResponse& Response);
    
    UFUNCTION(BlueprintCallable)
    static void LoginContextInitializeForMaintenance(const FString& ProviderId);
    
    UFUNCTION(BlueprintCallable)
    static void LoginContextInitialize(const FString& ProductUserId, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLastServerTime(FString& ServerTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLastMaintenanceData(FString& StartTime, FString& endTime, int32& noticeId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIntplServerDateTime(FDateTime& OutDateTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCurrentUserId(FString& UserId);
    
};

