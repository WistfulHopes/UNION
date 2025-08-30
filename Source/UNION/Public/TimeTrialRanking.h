#pragma once
#include "CoreMinimal.h"
#include "EAppSupportedPlatform.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "RankingDataTimeTrial.h"
#include "RankingLineScroller.h"
#include "TimeTrialRanking.generated.h"

class URankingLine;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UNION_API UTimeTrialRanking : public URankingLineScroller {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URankingLine* WBP_TimeTrial_Sub_RankingTable_Myself;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_0;
    
public:
    UTimeTrialRanking();

protected:
    UFUNCTION(BlueprintCallable)
    void StartUpKeyPress();
    
    UFUNCTION(BlueprintCallable)
    void StartDownKeyPress();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputEnable(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SelectRanking(EAppSupportedPlatform Platform, EStageId courseId, ESpeedClassId speedType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReleaseUpKey();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReleaseDownKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpKeyPressLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownKeyPressLoop() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void InitDateTime();
    
    UFUNCTION(BlueprintCallable)
    FRankingDataTimeTrial GetRankingTimeTrialData(const int32 InIndex, bool& OutIsValid);
    
    UFUNCTION(BlueprintCallable)
    void DisplayRanking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayNoRankingMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayNetworkErrorMessage();
    
    UFUNCTION(BlueprintCallable)
    void DisplayLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayCrossplayOffMessage();
    
};

