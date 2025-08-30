#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EDriverId.h"
#include "MCEventBonusData.h"
#include "MCEventData.h"
#include "MenuInputRecieveInterface.h"
#include "OnUnionRunResultUIAnimationFinishedDelegate.h"
#include "PlayerRaceResultData.h"
#include "PlayerTotalResultData.h"
#include "UnionRaceUIResultPanel.generated.h"

class UUnionRaceUIResultLine;
class UUnionRacers;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceUIResultPanel : public UUserWidget, public IMenuInputRecieveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUnionRaceUIResultLine*> RankIndexLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> RacerIndex_RankIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPlayerRaceResultData> RaceResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPlayerTotalResultData> TotalResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMCEventBonusData MCEventBonusData;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnionRunResultUIAnimationFinished OnResultAnimationFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResultAnimationMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacers* RacersRef;
    
    UUnionRaceUIResultPanel();

    UFUNCTION(BlueprintCallable)
    bool UpdateTotalRank();
    
    UFUNCTION(BlueprintCallable)
    void SetResultMode();
    
    UFUNCTION(BlueprintCallable)
    void SetRankIndex(int32 RacerIndex, int32 RaceRankIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetRacersRef(UUnionRacers* InRacers);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerName(int32 RacerIndex, const FText& RacerName);
    
    UFUNCTION(BlueprintCallable)
    void SetRacerCount(int32 RacerCount);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerIndex(int32 RacerIndex, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingMode();
    
    UFUNCTION(BlueprintCallable)
    void SetEarnPointValue(int32 RacerIndex, int32 EarnPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterId(int32 RacerIndex, EDriverId CharaId);
    
    UFUNCTION(BlueprintCallable)
    void SetArrowIndex(int32 RacerIndex, int32 ArrowIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayTotalPoint_Loop_After2nd(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayPlayerEffect(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayGetAnimation(int32 RacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTotalPoints();
    
    UFUNCTION(BlueprintCallable)
    void InitializeResultData(bool bIsTotalDisp);
    
    UFUNCTION(BlueprintCallable)
    void InitializeRaceResult(bool bIsRankMatch, bool bIsRaceCountOne);
    
    UFUNCTION(BlueprintCallable)
    FMCEventBonusData InitializeBonusPoints(FMCEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    TArray<UUnionRaceUIResultLine*> GetRankIndexLine();
    
    UFUNCTION(BlueprintCallable)
    void CloseBonusPoints();
    
    UFUNCTION(BlueprintCallable)
    void ApplyWaitingAddPoint(int32 RacerIndex);
    

    // Fix for true pure virtual functions not being implemented
};

