#pragma once
#include "CoreMinimal.h"
#include "LobbyId.h"
#include "LobbyOperationResult.h"
#include "UnionUIInputWidget.h"
#include "EFriendListCategory.h"
#include "ELobbyType.h"
#include "FriendListWidget.generated.h"

class UFriendListMainWidget;
class ULobbyJoinInfo;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UFriendListWidget : public UUnionUIInputWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyInvitationDecideDelegate, const FString&, TargetUserId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyInvitationAcceptDelegate, ULobbyJoinInfo*, TargetLobbyJoinInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyIdSearchDecideDelegate, const FString&, TargetShortLobbyId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLobbyIdGetDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinLobbyByLobbyIdSearchDelegate, const FLobbyId&, TargetLobbyId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisplayEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayEndDelegate DisplayEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyIdGetDelegate LobbyIdGetDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyIdSearchDecideDelegate LobbyIdSearchDecideDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinLobbyByLobbyIdSearchDelegate JoinLobbyByLobbyIdSearchDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyInvitationDecideDelegate LobbyInvitaionDecideDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyInvitationAcceptDelegate LobbyInvitationAcceptDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendListMainWidget* MainWidget;
    
    UFriendListWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLobbyIdDisplay(const FString& InShortLobbyId, bool bInSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(int32 InLocalUserNumber, EFriendListCategory InInitialCategory, int32 InZOrder, bool bInLobbySequence, bool bInLobbyInvitationSendEnable, bool bInLobbyInvitationAcceptEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRacerInfoWidgetVisible(bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerIconListVisible(bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFairPlayPointWidgetVisible(bool bInVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugListDisplay(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCloseByNotLoginEOS(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyInvitationComplete(bool bSuccess, const FLobbyOperationResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyIdSearchComplete(bool bInSuccessful, const TArray<FLobbyId>& InLobbyId, const FString& InOwnerUserId, ELobbyType InLobbyType);
    
    UFUNCTION(BlueprintCallable)
    bool GetCloseByNotLoginEOS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndDisplay();
    
    UFUNCTION(BlueprintCallable)
    void ConsumeNotifyFriendInviteFlag();
    
};

