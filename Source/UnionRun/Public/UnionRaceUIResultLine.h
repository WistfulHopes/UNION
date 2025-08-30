#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EDriverId.h"
#include "PlayerNameInterface.h"
#include "UnionRaceUIResultLine.generated.h"

class UUnionRacers;

UCLASS(Blueprintable, EditInlineNew)
class UNIONRUN_API UUnionRaceUIResultLine : public UUserWidget, public IPlayerNameInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RacerNameString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RacerRankIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoadingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacers* RacersRef;
    
    UUnionRaceUIResultLine();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTotalPointValue(int32 TotalPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRankMatchMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRankIndex(int32 RankIndex, bool bIsCheckCrown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRacerName(const FText& RacerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRacerIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerIndex(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLapTimePlus(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLapTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEarnPointValue(int32 EarnPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterId(EDriverId CharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBeforeTotalPointValue(int32 BeforeTotalPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetArrowIndex(int32 ArrowIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTotalPoint_Loop_After2nd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPlayerEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLoop1st();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCheckMatchPoint(int32 TotalPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBonusPointClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBonusPoint(const FText& BonusName, const FText& BonusNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAddBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyWaitingAddPoint();
    

    // Fix for true pure virtual functions not being implemented
};

