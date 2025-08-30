#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ECrossplayPlatform.h"
#include "LobbyId.h"
#include "LobbyOperationResult.h"
#include "ELobbyNoticeErrorType.h"
#include "InviteConfirmWindowInDelegateDelegate.h"
#include "InviteConfirmWindowOutDelegateDelegate.h"
#include "InviteWindowResultDelegateDelegate.h"
#include "LobbyInvitationNoticeInfo.h"
#include "AppNetComponent.generated.h"

class AProcessLobbyInvitationObject;
class UCommonLobbyContext;
class ULobbyContextBase;
class ULobbyInvitationNoticeWidget;
class ULobbyJoinInfo;
class UObject;
class USquadContext;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UAppNetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInviteWindowResultDelegate OnInviteWindowResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInviteConfirmWindowInDelegate OnInviteConfirmWindowIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInviteConfirmWindowOutDelegate OnInviteConfirmWindowOut;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AProcessLobbyInvitationObject* LobbyProcessObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULobbyInvitationNoticeWidget* LobbyInvitationNoticeWidgetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyInvitationNoticeInfo LobbyInvitationNoticeInfoStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobbyJoinInfo* InvitationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyId SearchLobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyId PlatformInviteReceivedLobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* ErrorPopupWindowPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* ReturnToTitleErrorPopupWindowPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlatformDecide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELobbyNoticeErrorType, FText> ErrorTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELobbyNoticeErrorType, FText> ErrorMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WaitCheckTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WaitCheckMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PrevRegisteredMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* WaitCheckPopup;
    
public:
    UAppNetComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ShouldSendSessionInvitePlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ShouldCreateSquad() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsInRace(bool InRace);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SendSessionInvite(UCommonLobbyContext* LobbyContext, const FString& PlatformUserId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SendInvite();
    
    UFUNCTION(BlueprintCallable)
    void PFInviteCallback();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnbindInvitationNoticeWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnSetupLobbyInvitationNoticeWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnReturnToTitleErrorPopupClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveInviteWindowCallback(bool ResultIsYes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveInviteCallback(const FUniqueNetIdRepl& UserId, ULobbyJoinInfo* Invite);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnQuitCurrentLobby();
    
    UFUNCTION(BlueprintCallable)
    void OnPlatformAcceptLobbyInvitation();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLobbyOperationCompleteSimple(bool bSuccessful, const FLobbyOperationResult& Result);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnJoinLobbyByIdSearch(FLobbyId LobbyId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGenerateLobbyInviteNoticeWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnErrorNoticePopupWindowClose(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDebugSendInvitation(int32 RequestIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteQuitLobbyEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBindInvitationNoticeWidgetWhenNotAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBindInvitationNoticeWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptLobbyInvitation(ULobbyJoinInfo* InJoinLobbyInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void KickToAllClientMember(ULobbyContextBase* InContext);
    
    UFUNCTION(BlueprintCallable)
    USquadContext* GetSquadContext();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UCommonLobbyContext* GetCurrentInviteLobbyContext() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyErrorNoticePopupWindow();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeleteWaitSearchWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateWaitSearchWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateReturnToTitleErrorPopup();
    
    UFUNCTION(BlueprintCallable)
    void CreateErrorNoticePopupWindow(ELobbyNoticeErrorType ErrorType);
    
    UFUNCTION(BlueprintCallable)
    void CheckInvitationAvailable(ULobbyJoinInfo* InJoinLobbyInfo, bool& IsAvailable);
    
    UFUNCTION(BlueprintCallable)
    bool CheckCrossPlay(ECrossplayPlatform InLobbyPlatform, bool InAllowCrossPlay);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindOnReceiveInvite();
    
};

