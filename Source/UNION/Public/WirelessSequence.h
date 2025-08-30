#pragma once
#include "CoreMinimal.h"
#include "HierarchicalStateMachine.h"
#include "OnBackEventDelegate.h"
#include "OnlineErrorBP.h"
#include "SoundHandle.h"
#include "EUnionUIFadeDirection.h"
#include "EMatchingLobbyType.h"
#include "EPrivateMatchPlayType.h"
#include "EWirelessSequenceState.h"
#include "MenuSequenceUIInterface.h"
#include "Templates/SubclassOf.h"
#include "WirelessSequence.generated.h"

class AMenuSequence;
class UDummyWidget;
class UFriendMatchMenu;
class ULobbyJoinInfo;
class UMatchingSequenceStateMatching;
class UMenuInputRecieveObject;
class UObject;
class USoundAtomCue;
class UUnionUIButtonBase;
class UUnionUIPopupWindowBase;
class UWirelessLobbyContext;
class UWirelessLobbyControlComponent;
class UWirelessLobbySelectScene;
class UWirelessSequenceStateToOffline;
class UWirelessSequenceStateToOnline;

UCLASS(Blueprintable)
class UNION_API AWirelessSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnBackToTitleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnWirelessLobbyBackedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackEvent OnWirelessLobbyFinishedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMenuInputRecieveObject* MenuInputReceiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryLobbyTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryLobbyMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryLobbyPopupTextNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryLobbyPopupTextYes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWirelessSequenceState PrevSequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLobbyType LobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMatchingSequenceStateMatching* MatchingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWirelessLobbySelectScene> UISceneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWirelessLobbySelectScene* UIScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFriendMatchMenu> FriendMatchMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendMatchMenu* FriendMatchMenuComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FoundLobbies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMenuSequence* MenuSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWirelessSequenceStateToOnline* WirelessSequenceStateToOnlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWirelessSequenceStateToOffline* WirelessSequenceStateToOfflineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWirelessLobbyControlComponent* WirelessLobbyControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWirelessLobbyControlComponent> WirelessLobbyControlComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLobbyType CurrentLobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SearchLobbyLoopCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundHandle SearchLobbyLoopHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULobbyJoinInfo*> FoundLobbySessions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DefaultMatchmakeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionUIPopupWindowBase* PopupWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDummyWidget* DummyWidget;
    
public:
    AWirelessSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLobbyListByLobbySessions(const TArray<ULobbyJoinInfo*>& LobbySessions);
    
    UFUNCTION(BlueprintCallable)
    void UnBindMenuInputReceive();
    
    UFUNCTION(BlueprintCallable)
    void UnBindMenuButtonsPanel();
    
    UFUNCTION(BlueprintCallable)
    void UnBindFoundLobbyButtonsPanel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextWirelessSequenceState(EWirelessSequenceState InState, EWirelessSequenceState PrevState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SearchWirelessLobbyInternal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWirelessLobbyFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWirelessLobbyBackedFadeFinishedEvent(EUnionUIFadeDirection FadeDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWirelessLobbyBacked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateStateErrorWindow(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateSearchLobbyStart(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateSearchLobbyInProgress(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateSearchLobbyComplete(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdatePreSearch(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateEntryLobbyStart(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateEntryLobbySetup(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateEntryLobbyInProgress(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateEntryLobbyComplete(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateCreateLobbyStart(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateCreateLobbySetting(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateCreateLobbyInProgress(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateCreateLobbyComplete(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateBackToPrevSequence(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnSearchWirelessSession(UWirelessLobbyContext* LobbyContext, bool bSuccessful, const TArray<ULobbyJoinInfo*>& LobbySessions);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLobbyBackFadeFinished(EUnionUIFadeDirection FadeDirection);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateWirelessTop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateErrorWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitSearchLobbyStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitSearchLobbyInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitSearchLobbyComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitPreSearch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitEntryLobbyStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitEntryLobbySetup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitEntryLobbyInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitEntryLobbyComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitCreateLobbyStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitCreateLobbySetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitCreateLobbyInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitCreateLobbyComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBackToPrevSequence();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedFade_GotoLobby(EUnionUIFadeDirection FadeDirection);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFaceButtonTopPressed(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitStateErrorWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitSearchLobbyStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitSearchLobbyInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitSearchLobbyComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitPreSearch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitEntryLobbyStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitEntryLobbySetup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitEntryLobbyInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitEntryLobbyComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitCreateLobbyStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitCreateLobbySetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitCreateLobbyInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitCreateLobbyComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitBackToPrevSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnEntryWirelessSession(UWirelessLobbyContext* LobbyContext, const FOnlineErrorBP& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecisionRuleFixedButton(EPrivateMatchPlayType InPlayType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecisionLobbyCreate(UUnionUIButtonBase* Button, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecisionFoundLobby(UUnionUIButtonBase* Button, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDecisionEntryLobbyPopupWindow(UUnionUIButtonBase* InButton, int32 InPanelIndex, int32 InButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteInitializeWirelessMode(UWirelessLobbyContext* WirelessLobbyContext, const FOnlineErrorBP& Error);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelRuleFixedButton();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelMenu(UUnionUIButtonBase* Button, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBackWirelessTopSequenceEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnBackToTitleSequenceEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnBackSequenceEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UWirelessLobbyContext* GetWirelessLobbyContext() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchingLobbyType GetLobbyType() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    ULobbyJoinInfo* GetFoundLobbySessionByIndex(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWirelessSequenceState GetCurrentWirelessSequenceState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchingLobbyType GetCurrentLobbyType();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EntryWirelessLobbyInternal(int32 LobbyIndex);
    
    UFUNCTION(BlueprintCallable)
    void BindMenuInputReceive();
    
    UFUNCTION(BlueprintCallable)
    void BindMenuButtonsPanel();
    
    UFUNCTION(BlueprintCallable)
    void BindFoundLobbyButtonsPanel();
    

    // Fix for true pure virtual functions not being implemented
};

