#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EGroupBonusType.h"
#include "EGroupRaceRule.h"
#include "ERaceSettingGrouping.h"
#include "MenuInputRecieveInterface.h"
#include "FestaResultInfo.h"
#include "OnUnionRunResultUIAnimationFinishedDelegate.h"
#include "UnionRaceUIGroupResultScene.generated.h"

class UUnionRaceUIGroupTotalTable;
class UUnionRaceUIResultPanel;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceUIGroupResultScene : public UUserWidget, public IMenuInputRecieveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionRaceUIGroupTotalTable*> GroupTotalTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionRaceUIResultPanel*> ResultLinesPanel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionRunResultUIAnimationFinished OnResultAnimationFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResultAnimationMoving;
    
    UUnionRaceUIGroupResultScene();

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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UUnionRaceUIResultPanel*> GetResultLinesPanel();
    
    UFUNCTION(BlueprintCallable)
    EGroupRaceRule GetGroupRaceRule();
    
    UFUNCTION(BlueprintCallable)
    static void GetFestaResultInfo(const TArray<int32>& TeamPointList, FFestaResultInfo& OutInfo, int32 InPlayerRacerIndex, ERaceSettingGrouping RaceSettingGrouping);
    
    UFUNCTION(BlueprintCallable)
    static EGroupBonusType GetFestaBonusType();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFestaBonusByTeamIndex(int32 TeamIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFestaBonusByRacerIndex(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcLinesPanelVisibleByRacerCount();
    

    // Fix for true pure virtual functions not being implemented
};

