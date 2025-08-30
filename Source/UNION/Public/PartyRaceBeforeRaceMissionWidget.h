#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "PartyRaceMissionData.h"
#include "PartyRaceBeforeRaceMissionWidget.generated.h"

class UPartyRaceResultMissionTableWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNION_API UPartyRaceBeforeRaceMissionWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPartyRaceBeforeRaceMissionWidgetOnFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceBeforeRaceMissionWidgetOnFinished OnInAnimationFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyRaceBeforeRaceMissionWidgetOnFinished OnOutAnimationFinishedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPartyRaceResultMissionTableWidget* _MissionTableWidget;
    
public:
    UPartyRaceBeforeRaceMissionWidget();

    UFUNCTION(BlueprintCallable)
    void SetMissionDataBP(const TArray<FPartyRaceMissionData>& MissionData);
    
    UFUNCTION(BlueprintCallable)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayInAnimation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOutAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnInAnimationFinished();
    
};

