#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "PartyRaceMissionData.h"
#include "PartyRaceResultMissionTableWidget.generated.h"

class UPartyRaceResultMissionTableRowWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UPartyRaceResultMissionTableWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartyRaceResultMissionTableWidgetOnFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceResultMissionTableWidgetOnFinished OnScoreAnimationFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceResultMissionTableWidgetOnFinished OnInAnimationFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceResultMissionTableWidgetOnFinished OnOutAnimationFinishedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPartyRaceResultMissionTableRowWidget*> _TableRowWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Mission_InLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Mission_Out;
    
public:
    UPartyRaceResultMissionTableWidget();

    UFUNCTION(BlueprintCallable)
    void SkipScoreAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetMissionDataBP(const TArray<FPartyRaceMissionData>& MissionData, const TArray<int32>& Scores, const TArray<bool>& Completeds);
    
    UFUNCTION(BlueprintCallable)
    void PlayScoreAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayInAnimation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRowScoreAnimationFinished();
    
};

