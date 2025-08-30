#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "LobbyId.h"
#include "LobbySubsystemOnCreateOrConnectLobbyCompleteDelegate.h"
#include "LobbySubsystemOnLobbyOperationCompleteDelegate.h"
#include "LobbySubsystemOnSearchLobbyCompleteDelegate.h"
#include "LobbySubsystem.generated.h"

class ULobbyJoinInfo;
class ULobbyTransactionParam;

UCLASS(Blueprintable)
class UNIONSYSTEM_API ULobbySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlatformInViteReceivedMulticast);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMemberUpdateMulticast, const FUniqueNetIdRepl&, UserId, const FLobbyId&, LobbyId, const FUniqueNetIdRepl&, MemberId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMemberDisconnectMulticast, const FUniqueNetIdRepl&, UserId, const FLobbyId&, LobbyId, const FUniqueNetIdRepl&, MemberId, bool, bWasKicked);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMemberConnectMulticast, const FUniqueNetIdRepl&, UserId, const FLobbyId&, LobbyId, const FUniqueNetIdRepl&, MemberId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyUpdateMulticast, const FUniqueNetIdRepl&, UserId, const FLobbyId&, LobbyId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyDeleteMulticast, const FUniqueNetIdRepl&, UserId, const FLobbyId&, LobbyId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInvitationReceivedMulticast, const FUniqueNetIdRepl&, UserId, ULobbyJoinInfo*, Invite);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyUpdateMulticast LobbyUpdateMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyDeleteMulticast LobbyDeleteMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMemberConnectMulticast MemberConnectMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMemberUpdateMulticast MemberUpdateMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMemberDisconnectMulticast MemberDisconnectMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMemberUpdateMulticast MemberPromotedMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInvitationReceivedMulticast InvitationReceivedMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlatformInViteReceivedMulticast PlatformInviteReceivedMulticastDelegate;
    
public:
    ULobbySubsystem();

    UFUNCTION(BlueprintCallable)
    bool SetupConnectP2PLobbyUsers(int32 LocalUserNum, const FLobbyId& LobbyId, bool IsHost);
    
    UFUNCTION(BlueprintCallable)
    void SetPFBusyFlag(bool BusyFlag);
    
    UFUNCTION(BlueprintCallable)
    void SearchLobby(int32 LocalUserNum, int64 LobbyType, FLobbySubsystemOnSearchLobbyComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void RejectInvitation(int32 LocalUserNum, const ULobbyJoinInfo* InviteInfo, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void PromoteMember(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void KickMember(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    bool IsRequiredPassword(int32 LocalUserNum, const FLobbyId& LobbyId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsLockedLobby(int32 LocalUserNum, const FLobbyId& LobbyId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSessionInvite() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSessionInviteInfo(int32 LocalUserNum, TArray<ULobbyJoinInfo*>& OutPendingInvites);
    
    UFUNCTION(BlueprintCallable)
    bool GetPendingInviteInfo(int32 LocalUserNum, TArray<ULobbyJoinInfo*>& OutPendingInvites);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOnlineIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUniqueNetIdRepl> GetMemberUserIds(int32 LocalUserNum, const FLobbyId& LobbyId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetMemberUserId(int32 LocalUserNum, const FLobbyId& LobbyId, int32 MemberIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemberCount(int32 LocalUserNum, const FLobbyId& LobbyId) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetMemberAttributeValueString(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, const FString& AttrKey, FString& OutAttrValue, bool bUseLobbyAttribute);
    
    UFUNCTION(BlueprintCallable)
    bool GetMemberAttributeValueInt64(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, const FString& AttrKey, int64& OutAttrValue, bool bUseLobbyAttribute);
    
    UFUNCTION(BlueprintCallable)
    bool GetMemberAttributeValueFloat(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, const FString& AttrKey, float& OutAttrValue, bool bUseLobbyAttribute);
    
    UFUNCTION(BlueprintCallable)
    bool GetMemberAttributeValueBool(int32 LocalUserNum, const FLobbyId& LobbyId, const FUniqueNetIdRepl& MemberId, const FString& AttrKey, bool& OutAttrValue, bool bUseLobbyAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxMemberCount() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyAttributeValueString(int32 LocalUserNum, const FLobbyId& LobbyId, const FString& AttrKey, FString& OutAttrValue, bool bUseLobbyAttribute);
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyAttributeValueInt64(int32 LocalUserNum, const FLobbyId& LobbyId, const FString& AttrKey, int64& OutAttrValue, bool bUseLobbyAttribute);
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyAttributeValueFloat(int32 LocalUserNum, const FLobbyId& LobbyId, const FString& AttrKey, float& OutAttrValue, bool bUseLobbyAttribute);
    
    UFUNCTION(BlueprintCallable)
    bool GetLobbyAttributeValueBool(int32 LocalUserNum, const FLobbyId& LobbyId, const FString& AttrKey, bool& OutAttrValue, bool bUseLobbyAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetJoinedLobbies(int32 LocalUserNum, TArray<FLobbyId>& OutLobbyIds) const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteLobby(int32 LocalUserNum, const FLobbyId& LobbyId, FLobbySubsystemOnLobbyOperationComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void CreateLobby(int32 LocalUserNum, const ULobbyTransactionParam* TransactionParam, FLobbySubsystemOnCreateOrConnectLobbyComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    int32 ConnectP2PLobbyUsers(int32 LocalUserNum, const FLobbyId& LobbyId, bool IsHost, bool EnableAllClientConnect);
    
    UFUNCTION(BlueprintCallable)
    void ConnectP2PAsync(int32 LocalUserNum, const FLobbyId& LobbyId);
    
    UFUNCTION(BlueprintCallable)
    void ConnectLobby(int32 LocalUserNum, const FLobbyId& LobbyId, const FString& Password, FLobbySubsystemOnCreateOrConnectLobbyComplete OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmMatchingUsers(int32 LocalUserNum, const FLobbyId& LobbyId);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllDelegates();
    
    UFUNCTION(BlueprintCallable)
    void CallInvitationReceivedDelegates(int32 LocalUserNum, const FLobbyId& LobbyId);
    
};

