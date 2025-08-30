#pragma once
#include "CoreMinimal.h"
#include "FestaFestaTopResponse.h"
#include "SoundHandle.h"
#include "LobbySequenceBase2.h"
#include "LobbyFestaSequence2.generated.h"

class AActor;
class UBeforeRaceRuleExplanationWidget;
class UFestaRuleInfoWidgetBase;
class UGadgetRentalInfoWindow;
class UObject;
class UOnlineFestaTeamDirectionBase;
class USoundAtomCue;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API ALobbyFestaSequence2 : public ALobbySequenceBase2 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineFestaTeamDirectionBase* FestaTeamDirectUIScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MyTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBeforeRaceRuleExplanationWidget> FestaRuleInfoClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBeforeRaceRuleExplanationWidget* FestaRuleInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* RuleExplanationLoopCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundHandle RuleExplanationLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGadgetRentalInfoWindow> FestaGadgetRentalInfoClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGadgetRentalInfoWindow* FestaGadgetRentalInfoUIScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFestaRuleInfoWidgetBase> FestaFixedRuleInfoClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFestaRuleInfoWidgetBase* FestaFixedRuleInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LobbySearchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LobbySearchCancelLimitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> FestaVoltageActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> GroupPlateStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableTeamColor;
    
public:
    ALobbyFestaSequence2(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetupFestRaceSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnSyncFestaRule(bool bSuccessful, const FFestaFestaTopResponse& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnFestaRuleInfoWidgetAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnFestaRentalGadgetWindowAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnBackKeyReleasedReturnedFromRaceToLobbyEvent(UObject* InObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void FixedRuleInfoWidgetClose();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeTeamColorPlate();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeamColorCar();
    
};

