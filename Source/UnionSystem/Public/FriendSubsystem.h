#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Common_UserSearchData.h"
#include "EAppSupportedPlatform.h"
#include "EBlockPlayerErrorCode.h"
#include "EBlockPlayerFilter.h"
#include "EBlockPlayerState.h"
#include "ECrossplayPlatform.h"
#include "EFriendsListUserSearchCacheType.h"
#include "EGetUserProfileError.h"
#include "EResponseCodeAbstract.h"
#include "FriendCommonPart_FriendData.h"
#include "FriendGetFriendListResponse.h"
#include "UserGetUserSearchRequest.h"
#include "UserGetUserSearchResponse.h"
#include "FriendSubsystem.generated.h"

UCLASS(Blueprintable)
class UNIONSYSTEM_API UFriendSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTerraFriendUnfriendComplete, bool, bWasSuccessful, int32, ErrorCode);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTerraFriendRequestComplete, bool, bWasSuccessful, int32, ErrorCode);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTerraFriendRequestCancelComplete, bool, bWasSuccessful, int32, ErrorCode);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTerraFriendRejectComplete, bool, bWasSuccessful, int32, ErrorCode);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTerraFriendAcceptComplete, bool, bWasSuccessful, int32, ErrorCode);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnReadFriendsComplete, bool, bWasSuccessful);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnReadBlockPlayersComplete, bool, bWasSuccessful);
    DECLARE_DYNAMIC_DELEGATE_FourParams(FOnLobbyInvitationAfterUserSearchDelegate, const FString&, ApiName, const FString&, RequestData, const FString&, ResponseData, bool, SearchError);
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnGetUserProfileComplete, bool, bWasSuccessful, EGetUserProfileError, Error, const TArray<FString>&, GamerTags);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetTerraFriendListComplete, bool, bWasSuccessful, const FFriendGetFriendListResponse&, list);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetRecentPlayerStatsComplete, const FUserGetUserSearchResponse&, Response, EResponseCodeAbstract, ResCodeAbstract);
    DECLARE_DYNAMIC_DELEGATE_FourParams(FOnGetFriendComplete, bool, PlatformFriend, bool, TerraFriend, const FString&, userName, const FFriendCommonPart_FriendData&, FriendData);
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnExternalIdMappingsComplete, bool, bWasSuccessful, const TArray<FString>&, ExternalIds, const TArray<FString>&, ConvertedIds);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAddBlockPlayerComplete, EBlockPlayerErrorCode, ErrorCode, const FString&, ProductUserId);
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAfterUserSearchDelegate, bool, bWasSuccessful, const TArray<FCommon_UserSearchData>&, SearchDatas, EResponseCodeAbstract, ResCodeAbstract);
    
    UFriendSubsystem();

    UFUNCTION(BlueprintCallable)
    bool TerraGetUserSearchRequest(const TArray<FString>& TargetUserIds, int32 selectFlg, UFriendSubsystem::FAfterUserSearchDelegate Delegate, EFriendsListUserSearchCacheType CacheType);
    
    UFUNCTION(BlueprintCallable)
    bool TerraFriendUnfriend(const FString& TargetID, UFriendSubsystem::FOnTerraFriendUnfriendComplete OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool TerraFriendsRequest(const TArray<FString>& targetIds, UFriendSubsystem::FOnTerraFriendRequestComplete OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool TerraFriendRequestCancel(const FString& TargetID, UFriendSubsystem::FOnTerraFriendRequestCancelComplete OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool TerraFriendRequestByUserSearchData(const TArray<FCommon_UserSearchData>& UserSearchData, UFriendSubsystem::FOnTerraFriendRequestComplete OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool TerraFriendRequest(const FString& TargetID, UFriendSubsystem::FOnTerraFriendRequestComplete OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool TerraFriendReject(const FString& TargetID, UFriendSubsystem::FOnTerraFriendRejectComplete OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool TerraFriendAccept(const FString& TargetID, UFriendSubsystem::FOnTerraFriendAcceptComplete OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetReceivedLobbyInvitationCount(int32 LobbyInvitationCount);
    
    UFUNCTION(BlueprintCallable)
    void SetCacheExpiration(int32 Minutes);
    
    UFUNCTION(BlueprintCallable)
    void ResetReceivedLobbyInvitationCount();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllRequestDelegate();
    
    UFUNCTION(BlueprintCallable)
    void RequestCheckFairPoint();
    
    UFUNCTION(BlueprintCallable)
    void RefreshBlockPlayers(UFriendSubsystem::FOnReadBlockPlayersComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void QueryReadPlatformFriends(int32 LocalUserNum, UFriendSubsystem::FOnReadFriendsComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void QueryReadPlatformBlockPlayers(UFriendSubsystem::FOnReadBlockPlayersComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void OnUnfriendByPFBlockingCompleted(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnUnfriendByBlockingCompleted(bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnTerraGetUserSearchCompleteSearchPlayerID(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnTerraGetUserSearchCompleteSearchLobbyID(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnTerraGetUserSearchCompleteRecentPlayer(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnTerraGetUserSearchCompletePFFriend(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnTerraGetUserSearchCompleteLobbyInvitation(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnTerraGetUserSearchCompleteBlockPlayer(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnTerraGetUserSearchCheckPlayerNameComplete(bool bCheckPlayerNameSuccess, const TArray<FString>& PlayerNameList, EFriendsListUserSearchCacheType CacheType, EResponseCodeAbstract ResponseCodeAbstract, bool bSearchPlayerDataSuccess);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTerraFriendRequestComplete(bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnTerraFriendListCheckPlayerNameComplete(bool bSuccess, const TArray<FString>& PlayerNameList, bool bGetTerraFriendListError);
    
    UFUNCTION(BlueprintCallable)
    void OnTerraFriendCommonComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRequestCancelByBlockingCompleted(bool bWasSuccessful, int32 ErrorCode);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnProductUserIdFriendRequestConvertComplete(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds);
    
    UFUNCTION(BlueprintCallable)
    void OnPlatformFriendIdMappingsComplete(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLobbyInvitationGetUserSearchComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGetTerraFriendListComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnGetTerraFriendListCheckPlayerNameComplete(bool bGetTerraFriendListError);
    
    UFUNCTION(BlueprintCallable)
    void OnGetTerraFriendLastDateComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnConvertPuidToTerraIdComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnConvertBlockPlayerPuidToTerraIdComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteRequestCheckFairPoint(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockPlayerIdMappingsComplete(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds);
    
public:
    UFUNCTION(BlueprintCallable)
    void MinusReceivedLobbyInvitationCount();
    
    UFUNCTION(BlueprintCallable)
    void LobbyInvitationGetUserSearchData(FUserGetUserSearchRequest SearchRequest, UFriendSubsystem::FOnLobbyInvitationAfterUserSearchDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidLobbyInvitation();
    
    UFUNCTION(BlueprintCallable)
    bool IsTerraFriend(const FString& ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    bool IsSetPlatformBlockPlayers();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlatformFriend(const FString& ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    bool IsFriendRequestBlocked(int32 InFriendRequestErrorCode);
    
    UFUNCTION(BlueprintCallable)
    bool IsFriend(const FString& ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    bool IsFinishedForceUpdateFriendList();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableGetUserProfileGDK();
    
    UFUNCTION(BlueprintCallable)
    bool IsBlocked(const FString& ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    bool IsAcceptWaitPlayerExist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetUserSearchDataByProductUserId(const FString& ProductUserId, FCommon_UserSearchData& OutUserSearchData) const;
    
    UFUNCTION(BlueprintCallable)
    void GetUserProfileGDK(int32 LocalUserNum, UPARAM(Ref) TArray<FString>& XuidStrings, UFriendSubsystem::FOnGetUserProfileComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTerraFriendNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetTerraFriendList(UFriendSubsystem::FOnGetTerraFriendListComplete OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    void GetTerraFriendCallback(bool bWasSuccessful, const FFriendGetFriendListResponse& list);
    
    UFUNCTION(BlueprintCallable)
    void GetRecentPlayerStatsSimple(UFriendSubsystem::FAfterUserSearchDelegate OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool GetRecentPlayerList(TMap<FString, FString>& OutRecentPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReceivedLobbyInvitationCount() const;
    
private:
    UFUNCTION(BlueprintCallable)
    ECrossplayPlatform GetPlatformTypeByStringData(const FString& InPlatformStr);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlatformFriendList(TArray<FUniqueNetIdRepl>& OutPlatformFriendList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlatformFriendDisplayName(const FUniqueNetIdRepl& UserId, FString& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNotifyFriendInvite() const;
    
    UFUNCTION(BlueprintCallable)
    void GetFriendInfo(const FString& ProductUserId, UFriendSubsystem::FOnGetFriendComplete OnCompleted);
    
    UFUNCTION(BlueprintCallable)
    EBlockPlayerState GetBlockPlayerState(const FString& ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    void GetBlockPlayerList(TArray<FString>& OutBlockPlayers, EBlockPlayerFilter Filter);
    
private:
    UFUNCTION(BlueprintCallable)
    EAppSupportedPlatform GetAppSupportedPlatformByStringData(const FString& InPlatformStr);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ForceUpdateFriendList();
    
    UFUNCTION(BlueprintCallable)
    void DeleteRecentPlayer(const FString& ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    void DeleteBlockPlayer(const FString& ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    void DebugToggleBlockPlayerState(const FString& ProductUserId);
    
    UFUNCTION(BlueprintCallable)
    bool ConvertPlatformIdToUserIdRequest(UPARAM(Ref) TArray<FUniqueNetIdRepl>& IdList, UFriendSubsystem::FOnExternalIdMappingsComplete OnComplete, bool ForceConvert);
    
    UFUNCTION(BlueprintCallable)
    bool ContainsBlockPlayer(const TArray<FString>& ProductUserIds, TArray<FString>& OutBlockPlayerIds);
    
    UFUNCTION(BlueprintCallable)
    void ClearRecentPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ClearFinishedForceUpdateFriendListFlag();
    
    UFUNCTION(BlueprintCallable)
    void CallOnGetFriendInfoComplete(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds);
    
    UFUNCTION(BlueprintCallable)
    void AddRecentPlayers(int32 LocalUserNum, UPARAM(Ref) TArray<FUniqueNetIdRepl>& IdList, const FString& Date);
    
    UFUNCTION(BlueprintCallable)
    void AddReceivedLobbyInvitationCount();
    
    UFUNCTION(BlueprintCallable)
    void AddBlockPlayer(const FString& ProductUserId, UFriendSubsystem::FOnAddBlockPlayerComplete OnComplete);
    
};

