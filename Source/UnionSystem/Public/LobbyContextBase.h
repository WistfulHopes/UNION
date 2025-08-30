#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Common_UserSearchData.h"
#include "EResponseCodeAbstract.h"
#include "LobbyContextOnAddMemberInitCompleteDelegate.h"
#include "LobbyContextOnCreateShortLobbyIdCompleteDelegate.h"
#include "LobbyContextOnLobbyDeleteDelegate.h"
#include "LobbyContextOnLobbyUpdateDelegate.h"
#include "LobbyContextOnMemberConnectDelegate.h"
#include "LobbyContextOnMemberDisconnectDelegate.h"
#include "LobbyContextOnMemberPromoteDelegate.h"
#include "LobbyContextOnMemberUpdateDelegate.h"
#include "LobbyId.h"
#include "LobbyOperationResult.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "OnlineErrorBP.h"
#include "PlatformLobbySessionOperationCompleteDelegate.h"
#include "SearchLobbyResult.h"
#include "Templates/SubclassOf.h"
#include "UnionPlatformEventInfo.h"
#include "LobbyContextBase.generated.h"

class ULobbyContextBase;
class ULobbyMemberContextBase;
class ULobbyTransactionParam;

UCLASS(Abstract, Blueprintable)
class UNIONSYSTEM_API ULobbyContextBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLobbyMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnLobbyUpdate LobbyContextOnLobbyUpdateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnLobbyDelete LobbyContextOnLobbyDeleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnMemberConnect LobbyContextOnMemberConnectDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnMemberUpdate LobbyContextOnMemberUpdateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnMemberDisconnect LobbyContextOnMemberDisconnectDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyContextOnMemberPromote LobbyContextOnMemberPromoteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULobbyMemberContextBase> LobbyMemberContextClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULobbyTransactionParam* TransactionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, ULobbyMemberContextBase*> Members;
    
public:
    ULobbyContextBase();

    UFUNCTION(BlueprintCallable)
    void WaitAddMemberInitComplete(FLobbyContextOnAddMemberInitComplete OnComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToString() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPublic(bool bInPublic);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool bInLock);
    
    UFUNCTION(BlueprintCallable)
    bool SendSessionInvite(const FUniqueNetIdRepl& FriendId);
    
    UFUNCTION(BlueprintCallable)
    void SearchByShortLobbyIdNoLobbyType(const FString& ShortLobbyId);
    
    UFUNCTION(BlueprintCallable)
    void SearchByShortLobbyId(const FString& ShortLobbyId);
    
    UFUNCTION(BlueprintCallable)
    void ResetShortLobbyId();
    
    UFUNCTION(BlueprintCallable)
    void RemoveShortLobbyId();
    
    UFUNCTION(BlueprintCallable)
    void RemoveComMemberContext();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateLobbyComplete(bool bSuccessful, const FLobbyOperationResult& Result, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSearchLobbyCompletedInternal(bool bSuccessful, const FSearchLobbyResult& Result);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlatformEvent(const FUnionPlatformEventInfo& EventInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberUpdateInternal(ULobbyMemberContextBase* MemberContext);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberUpdate(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberPromoteInternal(ULobbyMemberContextBase* MemberContext);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberPromote(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId, const FUniqueNetIdRepl& NewLeaderId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberDisconnectInternal(ULobbyMemberContextBase* MemberContext, bool bWasKicked);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberDisconnect(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, bool bWasKicked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberConnectInternal(ULobbyMemberContextBase* MemberContext);
    
    UFUNCTION(BlueprintCallable)
    void OnMemberConnect(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLobbyUpdateInternal();
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyUpdate(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLobbyDeleteInternal();
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyDelete(const FUniqueNetIdRepl& UserId, const FLobbyId& LobbyId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnKickMemberComplete(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnKeepAliveShortLobbyIdComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGetLobbyHostCallbackInternal(bool bWasSuccessful, const TArray<FCommon_UserSearchData>& SearchDatas, EResponseCodeAbstract ResCodeAbstract);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDisconnectLobbyCompletedInternal(bool bSuccessful, const FOnlineErrorBP& Error);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDestroiedSession(bool bSuccessful);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeleteLobbyCompletedInternal(bool bSuccessful, const FOnlineErrorBP& Error);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeleteLobbyComplete(bool bSuccessful, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateShortLobbyIdComplete(const FString& ApiName, const FString& RequestData, const FString& ResponseData, bool Error);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreateLobbyCompletedInternal(bool bSuccessful, const FOnlineErrorBP& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConnectLobbyCompletedInternal(bool bSuccessful, const FOnlineErrorBP& Error);
    
public:
    UFUNCTION(BlueprintCallable)
    void KickMember(ULobbyMemberContextBase* MemberContext, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void KeepAliveShortLobbyId();
    
    UFUNCTION(BlueprintCallable)
    void Join(const FLobbyId& LobbyId, const FString& Password);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameLobby(const ULobbyContextBase* OtherContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyHostLocalMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoining() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeNoLobbyInfo(int32 LocalUserNum);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(int32 LocalUserNum, const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& OwnerUserId, const FLobbyId& LobbyId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSortedAllMembersByLobbyMemberIndex(TArray<ULobbyMemberContextBase*>& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShortLobbyIdExpirationTimeSec() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetShortLobbyId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOwnerUserId(FUniqueNetIdRepl& OutUserId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyMemberContextBase* GetMemberFromLobbyMemberIndex(int32 LobbyMemberIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemberCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyMemberContextBase* GetMember(const FUniqueNetIdRepl& MemberId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLobbyMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocalUserId(FUniqueNetIdRepl& OutUserId) const;
    
    UFUNCTION(BlueprintCallable)
    ULobbyMemberContextBase* GetLocalMemberDefaultDummy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyMemberContextBase* GetLocalMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetLobbyTypeByLobbyId(int32 InLocalUserNum, const FLobbyId& InLobbyId, int64& OutLobbyType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLobbyId GetLobbyId() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHostUserIdStringByLobbyId(int32 InLocalUserNum, const FLobbyId& InLobbyId, FString& OutHostUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobbyMemberContextBase* GetHostMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHasValidInitDataMemerContextCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAllMemberUserIds(TArray<FString>& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllMembers(TArray<ULobbyMemberContextBase*>& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAllMemberInternalUserIds(TArray<FString>& OutResult) const;
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    void Exit();
    
    UFUNCTION(BlueprintCallable)
    bool EndTransaction_NoCallback();
    
    UFUNCTION(BlueprintCallable)
    bool EndTransaction(FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    bool DestroySession(const FPlatformLobbySessionOperationComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
    UFUNCTION(BlueprintCallable)
    void CreateSimple(bool bLocked, bool bPublic, bool bHostMigration, const FString& Password);
    
    UFUNCTION(BlueprintCallable)
    void CreateShortLobbyId(FLobbyContextOnCreateShortLobbyIdComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSession(const FPlatformLobbySessionOperationComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void Create(ULobbyTransactionParam* Param);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearAllLobbyContextDelegates();
    
public:
    UFUNCTION(BlueprintCallable)
    bool BeginTransaction();
    
};

