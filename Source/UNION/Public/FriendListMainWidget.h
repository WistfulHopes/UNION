#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Common_UserSearchData.h"
#include "EBlockPlayerErrorCode.h"
#include "ECrossplayPlatform.h"
#include "EResponseCodeAbstract.h"
#include "ESaveDataStatus.h"
#include "FriendGetFriendListResponse.h"
#include "LobbyId.h"
#include "LobbyOperationResult.h"
#include "UnionUIInputWidget.h"
#include "EFriendListCategory.h"
#include "EFriendListCommandType.h"
#include "EFriendListErrorType.h"
#include "EFriendListOnlineSettingType.h"
#include "EFriendListType.h"
#include "ELobbyType.h"
#include "EPFProfileShowResult.h"
#include "FriendListConfirmWidgetData.h"
#include "FriendListContentsWidgetData.h"
#include "FriendListOnlineSettingData.h"
#include "FriendListPlayerInfo.h"
#include "FriendListResultWidgetData.h"
#include "FriendListSubMenuWidgetData.h"
#include "Templates/SubclassOf.h"
#include "FriendListMainWidget.generated.h"

class APlayerController;
class AUnionCrossPlayResolveWindowManager;
class UDataTable;
class UFriendListWidgetDataAsset;
class ULobbyJoinInfo;
class UOptionConfigSaveGame;
class UTexture2D;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UFriendListMainWidget : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRacerInfoDisplayStartDelegate, const FFriendListPlayerInfo&, InListPlayerInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerIconSelectStartDelegate, int32, InIconId, int32, InBgColorId, bool, bInIconSelect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyInvitationDecideDelegate, const FString&, TargetUserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyInvitationAcceptDelegate, ULobbyJoinInfo*, TargetLobbyJoinInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyIdSearchDecideDelegate, const FString&, TargetShortLobbyId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLobbyIdGetDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinLobbyByLobbyIdSearchDelegate, const FLobbyId&, TargetLobbyId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFairPlayPointDisplayStartDelegate, int32, InFairPlayPoint, bool, bInBan, const FString&, InPenaltyEndTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisplayEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayEndDelegate DisplayEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyIdGetDelegate LobbyIdGetDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinLobbyByLobbyIdSearchDelegate JoinLobbyByLobbyIdSearchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyIdSearchDecideDelegate LobbyIdSearchDecideDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyInvitationDecideDelegate LobbyInvitaionDecideDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyInvitationAcceptDelegate LobbyInvitationAcceptDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerIconSelectStartDelegate PlayerIconSelectStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFairPlayPointDisplayStartDelegate FairPlayPointDisplayStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRacerInfoDisplayStartDelegate RacerInfoDisplayStartDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommonPlayerIconId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommonPlayerIconBgColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultPlayerIconBgColorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFriendListWidgetDataAsset> DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PlayerIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PlayerIconBgColorDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugListDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListJumpCnt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUnionCrossPlayResolveWindowManager> CrossPlayResolveUIManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUnionCrossPlayResolveWindowManager* m_CrossPlayResolveUIManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFriendListWidgetDataAsset* LoadDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadPlayerIconDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LoadPlayerIconBgColorDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* WaitWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* InvitationWarningWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* ErrorPopupWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* OfflineAnnounceWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* CheckGotoOnlineSequenceWindow;
    
public:
    UFriendListMainWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRecentPlayerList(const TArray<FFriendListPlayerInfo>& ListPlayerInfo, bool InDataError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePFFriendList(const TArray<FString>& DisplayNameArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOnlineSettingList(const TArray<FFriendListOnlineSettingData>& InOnlineSettingData, bool InDataError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLobbyIdDisplay(const FString& InShortLobbyId, bool bInSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFriendList(const TArray<FFriendListPlayerInfo>& ListPlayerInfo, bool InDataError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCategoryNewIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnregisterMenuInputReceiveObject();
    
    UFUNCTION(BlueprintCallable)
    void StartRacerInfoDisplay(const FFriendListPlayerInfo& InListPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void StartPlayerIconListSelect();
    
    UFUNCTION(BlueprintCallable)
    void StartFairPlayPointDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetFocus(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void Setup(int32 InLocalUserNumber, EFriendListCategory InInitialCategory, int32 InZOrder, bool bInLobbySequence, bool bInLobbyInvitationSendEnable, bool bInLobbyInvitationAcceptEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineSettingByType(EFriendListOnlineSettingType InOnlineSettingType, bool bInValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNextCategory(EFriendListCategory InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMyPlayerIcon(const TSoftObjectPtr<UTexture2D>& InIconTexture, const FLinearColor& InBgColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMyPlayerEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMyListPlayerInfo(const FFriendListPlayerInfo& InListPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetInputEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayEnd(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCategory(EFriendListCategory InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCategoryNewIconVisible(EFriendListCategory InCategory, bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonControlEnableCurrentWidget(bool bInEnanle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetPopupWindowCloseEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestUserSearch(const FString& TargetDisplayCode);
    
    UFUNCTION(BlueprintCallable)
    void RequestRecentPlayerList();
    
    UFUNCTION(BlueprintCallable)
    EPFProfileShowResult RequestPFProfileDisplay(const FString& InPlatformUserId);
    
    UFUNCTION(BlueprintCallable)
    bool RequestOnlineSettingSave(EFriendListCategory InNextCategory);
    
    UFUNCTION(BlueprintCallable)
    void RequestLobbyInvitationReject(const FLobbyId& InTargetLobbyId);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLobbyInvitationByPlatform(const FUniqueNetIdRepl TargetUserPlatformId);
    
    UFUNCTION(BlueprintCallable)
    void RequestLobbyInvitationAccept(const FLobbyId& InTargetLobbyId);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLobbyInvitation(const FString& InTargetUserId, const FString& InTargetProductUserId, const FString& InTargetPlatformUserId, ECrossplayPlatform InTargetCrossplayPlatform);
    
    UFUNCTION(BlueprintCallable)
    void RequestLobbyIdSearch(const FString& InTargetShortLobbyId);
    
    UFUNCTION(BlueprintCallable)
    void RequestLobbyIdGet();
    
    UFUNCTION(BlueprintCallable)
    void RequestJoinLobbyByLobbyIdSearch(const FLobbyId& InTargetLobbyId);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendReject(const FString& InTargetId);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendCancel(const FString& InTargetId);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendApplyCancel(const FString& InTargetId);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendApplyBySearchData(const TArray<FCommon_UserSearchData>& InUserSearchData);
    
    UFUNCTION(BlueprintCallable)
    bool RequestFriendApply(const FString& InTargetUserId, const FString& InTargetProductUserId, const bool bInTargetAcceptApply);
    
    UFUNCTION(BlueprintCallable)
    void RequestFriendAccept(const FString& InTargetId);
    
    UFUNCTION(BlueprintCallable)
    void RequestBlockPlayerRemove(const FString& InTargetProductUserId);
    
    UFUNCTION(BlueprintCallable)
    void RequestBlockPlayerList();
    
    UFUNCTION(BlueprintCallable)
    void RequestBlockPlayerAdd(const FString& InTargetProductUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterMenuInputReceiveObject();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReflectOnlineSettingData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitWindowEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserSearchSuccess(const TArray<FCommon_UserSearchData>& InUserSearchData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUserSearchComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubWidgetDisplayEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowPfProfileErrorWindowEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRequestOnlineSettingComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRequestLobbyIdGetEnd(bool bInSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRecentPlayerStatsComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract);
    
    UFUNCTION(BlueprintCallable)
    void OnPFFriendSearchComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract);
    
    UFUNCTION(BlueprintCallable)
    void OnPFFriendReadComplete(bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOpenInOfflineSequence();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLobbyInvitationRejectComplete(bool bWasSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyInvitationPlayerInfoComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyInvitationPlayerCheckPFFriendComplete(bool InShowPlayerInfo, bool bSuccessGetUserSearch);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyInvitationPlayerCheckPFFriend(bool bSuccessGetUserSearch);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyInvitationInfoComplete(bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyInvitationComplete(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyInvitationByPlatformComplete(bool bSuccessful, int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyIdUserSearchComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyIdSearchSuccess(const TArray<FCommon_UserSearchData>& InUserSearchData, const TArray<FLobbyId>& InLobbyIdData, ELobbyType InLobbyType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLobbyIdSearchComplete(bool bInSuccessful, const TArray<FLobbyId>& InLobbyId, const FString& InOwnerUserId, ELobbyType InLobbyType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInvitationWarningWindowEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGetFriendListComplete(bool bWasSuccessful, const FFriendGetFriendListResponse& list);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendRejectComplete(bool bWasSuccessful, int32 ErrorCode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFriendListCommandSuccess(EFriendListCommandType InCommandType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFriendListCommandComplete(EFriendListCommandType InCommandType, bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendCancelComplete(bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendApplyFromSearchComplete(bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendApplyComplete(bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendApplyCancelComplete(bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendAcceptComplete(bool bWasSuccessful, int32 ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void OnExternalIdMappingsComplete(bool bWasSuccessful, const TArray<FString>& ExternalIds, const TArray<FString>& ConvertedIds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnErrorPopupWindowEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnErrorPopupWindowClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDestroyOfflineAnnounceWindow(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyInvitationWarningWindow(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyCheckGotoOnlineSequenceWindow(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBlockPlayerSearchComplete(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockPlayerRemoveDataSaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockPlayerAddDataSaveComplete(ESaveDataStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockPlayerAddComplete(EBlockPlayerErrorCode ErrorCode, const FString& ProductUserId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetZOrder();
    
    UFUNCTION(BlueprintCallable)
    bool GetSubMenuWidgetData(EFriendListType InListType, FFriendListSubMenuWidgetData& OutSubMenuWidgetData, TArray<FText>& OutSubMenuText);
    
    UFUNCTION(BlueprintCallable)
    bool GetSubMenuText(EFriendListCommandType InCommandType, FText& OutSubMenuText);
    
    UFUNCTION(BlueprintCallable)
    bool GetShowErrorWindow();
    
    UFUNCTION(BlueprintCallable)
    bool GetResultWidgetData(EFriendListCommandType InCommandType, FFriendListResultWidgetData& OutResultWidgetData);
    
    UFUNCTION(BlueprintCallable)
    EFriendListCategory GetParentCategory(EFriendListCategory InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOptionConfigSaveGame* GetOptionConfigData() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetOnlineSettingData(EFriendListType InFriendListType, TArray<FFriendListOnlineSettingData>& OutOnlineSettingData);
    
    UFUNCTION(BlueprintCallable)
    bool GetOnlineSettingByType(EFriendListOnlineSettingType InOnlineSettingType);
    
    UFUNCTION(BlueprintCallable)
    EFriendListCategory GetNextMoveCategory(bool bInPlus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFriendListCategory GetNextCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLobbyInvitationSendEnable();
    
    UFUNCTION(BlueprintCallable)
    ULobbyJoinInfo* GetLobbyInvitationInfoByLobbyId(const FLobbyId& InTargetLobbyId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLobbyInvitationAcceptEnable();
    
    UFUNCTION(BlueprintCallable)
    void GetListPlayerInfoBySearchData(const FCommon_UserSearchData& InSearchData, const EFriendListType InListType, FFriendListPlayerInfo& OutListPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void GetListPlayerInfoByLobyInvitationInfo(const ULobbyJoinInfo* InLobbyInfo, FFriendListPlayerInfo& OutListPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    bool GetJoinedLobbyId(TArray<FLobbyId>& OutLobbyId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInLobbySequence();
    
    UFUNCTION(BlueprintCallable)
    bool GetExecutionRequest();
    
    UFUNCTION(BlueprintCallable)
    bool GetErrorMessageDataByCommandResult(EFriendListCommandType InCommandType, int32 InResCode, FText& OutErrorMessageData);
    
    UFUNCTION(BlueprintCallable)
    bool GetErrorMessageData(EFriendListErrorType InErrorMessageType, FText& OutErrorMessageData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFriendListCategory GetCurrentCategory();
    
    UFUNCTION(BlueprintCallable)
    bool GetContentsWidgetData(EFriendListCategory InCategory, FFriendListContentsWidgetData& OutContentsWidgetData);
    
    UFUNCTION(BlueprintCallable)
    bool GetConfirmWidgetData(EFriendListCommandType InCommandType, FFriendListConfirmWidgetData& OutConfirmWidgetData);
    
    UFUNCTION(BlueprintCallable)
    bool EndPlayerIconListSelect(int32 InSelectId, bool bInCancel);
    
    UFUNCTION(BlueprintCallable)
    void DestroyWaitWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyConfirmAnimationWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateWaitWindow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateStartDisplayErrorPopupWindow();
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateOfflineAnnounceWindow();
    
    UFUNCTION(BlueprintCallable)
    void CreateInvitationWarningWindow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateErrorPopupWindow(const FText& InErrorTitle, const FText& InErrorMessage, bool bInDisplayEnd);
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateCheckGotoOnlineSequenceWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearContentsWidgetListPlayerInfo(EFriendListCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool CheckValidLobbyInvitationExist();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSubCommandSelect(EFriendListCommandType InCommandType, const FFriendListPlayerInfo& InListPlayerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckRequestLobbyId();
    
    UFUNCTION(BlueprintCallable)
    bool CheckPlayerListDisplay(const FFriendListPlayerInfo& InTargetPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPFProfileEnable(ECrossplayPlatform InTargetPlatform);
    
    UFUNCTION(BlueprintCallable)
    bool CheckLoginComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLobbyJoinAttention();
    
    UFUNCTION(BlueprintCallable)
    bool CheckLobbyInvitation(const FString& InTargetProductUserId, EFriendListErrorType& OutErrorType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGetCurrentLobbyId();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeCategoryDisplay(EFriendListCategory InCategory, bool bInDataCommunicationDisplay);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCategory(EFriendListCategory InCategory, bool bInUpdateCheckData);
    
};

