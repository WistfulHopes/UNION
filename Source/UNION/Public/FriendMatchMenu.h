#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LobbySequenceEventDelegate.h"
#include "SequenceEventDelegate.h"
#include "FriendMatchMenu.generated.h"

class UPrivateMatchPopup;
class UUnionUIButtonBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API UFriendMatchMenu : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceEvent OnDecideEnterLobbyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceEvent OnCancelFriendMatchMenuEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbySequenceEvent OnLobbyRuleFixedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceEvent OnFinishedResultAnimationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceEvent OnFinishedOutAnimationEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPrivateMatchPopup> MenuWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorPopupTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ErrorPopupMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSquadMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrivateMatchPopup* MenuWidget;
    
public:
    UFriendMatchMenu(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SwitchDecisionEvent(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenWaitingLobbyPopupWindowFromSquad(bool bJoin);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenWaitingLobbyPopupWindow(bool bJoin);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenSelectLobbyTypeWindow();
    
    UFUNCTION(BlueprintCallable)
    void OpenLobbyResultWindow(bool bSuccess, bool bJoin);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenLobbyCompletedWindow(bool bJoin);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitFriendMatchMenu(bool bHasSquad);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishedOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void FinishedLobbyCompletedAnimation(bool bJoin);
    
public:
    UFUNCTION(BlueprintCallable)
    void ExitFriendMatchMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DecisionCreateOrJoinEvent(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void DecidedLobbyTypeEvent(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void CancelDownEvent(UUnionUIButtonBase* Button, int32 PanelIndex, int32 ButtonIndex);
    
};

