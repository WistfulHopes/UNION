#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuInputRecieveInterface.h"
#include "TimeTrialLapTimes.h"
#include "EUnionRaceUIResultSceneState.h"
#include "OnUnionRunResultSceneFinishedDelegate.h"
#include "UnionRaceUIResultScene.generated.h"

class UUnionRaceUIResultPanel;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceUIResultScene : public UUserWidget, public IMenuInputRecieveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRaceUIResultPanel* ResultLinesPanel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionRunResultSceneFinished OnResultFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResultAnimationMoving;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnionRaceUIResultSceneState _State;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsEnableGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeTrialLapTimes m_GhostTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeTrialLapTimes m_RecordTime;
    
public:
    UUnionRaceUIResultScene();

    UFUNCTION(BlueprintCallable)
    void SetupLapTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLinesPanelRacerCount(int32 RacerCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLinesPanelTotalInAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLinesPanelOutAnimByRacerCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLinesPanelInAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLinesPanelAddMoveAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViewDiffLapTime(int32 LapNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableGhost() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetTotalLapTimeText();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalLapTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUnionRaceUIResultPanel* GetResultLinesPanel();
    
    UFUNCTION(BlueprintCallable)
    FText GetLapTimeText(int32 LapNo);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLapTime(int32 LapNo);
    
    UFUNCTION(BlueprintCallable)
    FText GetGhostDiffTotalLapTime(bool& OutIsUpTime, bool& OutIsSameTime);
    
    UFUNCTION(BlueprintCallable)
    FText GetGhostDiffLapTime(int32 LapNo, bool& OutIsUpTime, bool& OutIsSameTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcLinesPanelVisibleByRacerCount();
    

    // Fix for true pure virtual functions not being implemented
};

