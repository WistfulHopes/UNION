#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "HierarchicalStateMachine.h"
#include "EDriverId.h"
#include "EPrivateMatchGroupSettingState.h"
#include "GroupSettingNoParamDelegate.h"
#include "MenuSequenceUIInterface.h"
#include "PrivateMatchGroupSettingSequence.generated.h"

class UCommonLineMessageWidget;

UCLASS(Blueprintable)
class UNION_API APrivateMatchGroupSettingSequence : public AHierarchicalStateMachine, public IMenuSequenceUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupSettingNoParam OnFixedGroupSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupSettingNoParam OnFinishGroupSettingSequence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPrivateMatchGroupSettingState PrevSquenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPrivateMatchGroupSettingState SelectedMainState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonLineMessageWidget> FixInfoWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLineMessageWidget* FixInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GroupIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnLobbyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle GroupFixTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixGroupInfoTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixGroupDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDriverId> LobbyRacersDriverId;
    
public:
    APrivateMatchGroupSettingSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateGroupIndexArray(const TArray<int32>& InGroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnLobbyIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNextGroupSettingSequenceState(EPrivateMatchGroupSettingState InState, EPrivateMatchGroupSettingState PrevState);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyRacersDriverId(TArray<EDriverId> inArray);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyMemberCount(int32 LobbyMemberCount);
    
    UFUNCTION(BlueprintCallable)
    void SetIsHost(bool bIsHostFlag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateSettingCompleteState(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitSettingCompleteState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitIdleState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitExitState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExirSettingCompleteState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GroupSettingCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<int32> GetGroupIndexArray();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceFixGroupSettings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishDisplayFixInfo();
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateGroupFixInfo(const FText InText, const float InDisplayTime);
    

    // Fix for true pure virtual functions not being implemented
};

