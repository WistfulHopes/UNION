#pragma once
#include "CoreMinimal.h"
#include "FestaFestaTopResponse.h"
#include "SoundHandle.h"
#include "EUnionUIFadeDirection.h"
#include "LobbySequenceBase.h"
#include "LobbyFestaSequence.generated.h"

class AActor;
class UBeforeRaceRuleExplanationWidget;
class UGadgetRentalInfoWindow;
class UObject;
class UOnlineFestaTeamDirectionBase;
class USoundAtomCue;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API ALobbyFestaSequence : public ALobbySequenceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOnlineFestaTeamDirectionBase> FestaTeamDirectClassPtr;
    
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
    ALobbyFestaSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnloadFinishTopMenuSubLevelEvent();
    
    UFUNCTION(BlueprintCallable)
    void UnloadFestaSubLevelEvent();
    
    UFUNCTION(BlueprintCallable)
    void ShowStageName();
    
    UFUNCTION(BlueprintCallable)
    void SetupFestRaceSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnSyncFestaRule(bool bSuccessful, const FFestaFestaTopResponse& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyFinishFadeFinished(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeFestaSublevelEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnGotoGarageFadeFinished(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnGotoCharaMachineFadeFinished(EUnionUIFadeDirection InFadeDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnFestaRentalGadgetWindowFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnBackKeyReleasedReturnedFromRaceToLobbyEvent(UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void LoadFinishFestaLevelEvent();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeamColorPlate();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeamColorCar();
    
};

