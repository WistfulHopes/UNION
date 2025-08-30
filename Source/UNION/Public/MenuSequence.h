#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "HierarchicalStateMachine.h"
#include "EGameModeId.h"
#include "EUnionUIFadeDirection.h"
#include "EMenuSequenceMainState.h"
#include "MenuSequenceUIInterface.h"
#include "Templates/SubclassOf.h"
#include "MenuSequence.generated.h"

class UChildActorComponent;
class ULobbyJoinInfo;
class UOnlinePlayerNameButton;

UCLASS(Blueprintable)
class UNION_API AMenuSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyInviteConfirmWindowOutEvent, bool, bIsYes);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLobbyInviteConfirmWindowInEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyInviteConfirmWindowInEvent OnInviteConfirmWindowIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyInviteConfirmWindowOutEvent OnInviteConfirmWindowOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOnlinePlayerNameButton> PlayerNameButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseWirelessDebugSequence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* CharaSelectPreloaderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* SpeedMachineSelectPreloaderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AcceleMachineSelectPreloaderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* HandleMachineSelectPreloaderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PowerMachineSelectPreloaderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* DashMachineSelectPreloaderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* FrontPartsSelectPreloaderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* RearPartsSelectPreloaderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* TirePartsSelectPreloaderComponent;
    
public:
    AMenuSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveInviteCallback(const FUniqueNetIdRepl& UserId, ULobbyJoinInfo* Invite);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeToTitleSequence(EUnionUIFadeDirection FadeDirection);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChangeToOnlineSequence(EUnionUIFadeDirection FadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptedInvite();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeMenuSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMenuSequenceMainState GetMainStateID(EGameModeId GameModeID, bool IsCameBackFromRace, bool IsBackToTopMenu, bool IsBackToTitle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindOnReceiveInvite();
    

    // Fix for true pure virtual functions not being implemented
};

