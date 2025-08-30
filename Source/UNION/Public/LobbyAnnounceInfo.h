#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "ERaceSettingCourseSelecting.h"
#include "ELobbySequenceState.h"
#include "ELobbyTimerType.h"
#include "EMatchingLobbyType.h"
#include "LobbyAnnounceInfo.generated.h"

class UOnlineTimer;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API ULobbyAnnounceInfo : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineTimer* TimerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MatchingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* InfoTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CurrentAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableTimeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableUpdateState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLobbyHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchingLobbyType LobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyTimerType CurrentTimerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbySequenceState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERaceSettingCourseSelecting CourseSelecting;
    
public:
    ULobbyAnnounceInfo();

    UFUNCTION(BlueprintCallable)
    void UpdateState(ELobbyTimerType InTimerType, ELobbySequenceState InState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TimerOnly();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityMatchingWidget(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityInfoTextWidget(ESlateVisibility InVisibility);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMatchingTimeCount(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLobbyHost(bool bIsHost);
    
    UFUNCTION(BlueprintCallable)
    void SetCourseSelectRule(ERaceSettingCourseSelecting InCourseSelectRule);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationWaitingJoinMembers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationWaitingInTheLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationWaitingHostDecideRule();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationSelectCourseWait();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationSelectCourseHostWait();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationSelectCourse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationReturnedFromRaceToLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationPleaseWait();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationMatchingNow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationLobbySearch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationGroupSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationEnterPrivateLobbyCanceling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationCommunicating();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationCheckMembers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationCanceling();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize(EMatchingLobbyType InLobbyType);
    
    UFUNCTION(BlueprintCallable)
    void MatchingNow();
    
    UFUNCTION(BlueprintCallable)
    void MatchCanceling();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOnlineTimer* GetTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERaceSettingCourseSelecting GetCourseSelectRule() const;
    
    UFUNCTION(BlueprintCallable)
    void EnterPrivateLobbyCanceling();
    
    UFUNCTION(BlueprintCallable)
    void AddToViewPortWidget();
    
};

