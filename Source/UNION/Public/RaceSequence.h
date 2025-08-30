#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HierarchicalStateMachine.h"
#include "UnionPlatformEventInfo.h"
#include "ERaceSequenceExitCode.h"
#include "ERaceSequenceState.h"
#include "RaceCourseMapInfo.h"
#include "RaceCourseSubMapInfo.h"
#include "RaceSequence.generated.h"

class APlayerController;
class UCommonMenuFooterMenu;
class UObject;
class URaceSituationManager;
class UTextureRenderTarget2D;
class UUnionRaceInfoNotifier;
class UUnionRaceUI;
class UUnionRacers;
class UUserWidget;

UCLASS(Blueprintable)
class UNION_API ARaceSequence : public AHierarchicalStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> LocalPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstPlayerGoaled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> TaggedInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RivalRenderTarget2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonMenuFooterMenu* FooterMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* LoadingWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RaceBeforeRuleInfoUIRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRacers* Racers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URaceSituationManager* RaceSituationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRaceUI* RaceHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnionRaceInfoNotifier* RaceInfoNotifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPromoteMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckQuitPublicLobbyMemberElapsedTime;
    
public:
    ARaceSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterRaceInfoListener(UObject* InListenerObject);
    
    UFUNCTION(BlueprintCallable)
    void StopUpdateRace();
    
    UFUNCTION(BlueprintCallable)
    int32 SetReservedRaceSequenceExitCode();
    
    UFUNCTION(BlueprintCallable)
    void SetRaceSequenceExitCode(ERaceSequenceExitCode InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRaceHUDRef(UUnionRaceUI* InRaceHUDRef);
    
    UFUNCTION(BlueprintCallable)
    void SetNextRaceSequenceState(ERaceSequenceState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCourseSubMapSetting(int32 DomainIndex, const FRaceCourseSubMapInfo& MapInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCourseMapSetting(int32 DomainIndex, const FRaceCourseMapInfo& MapInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetAfterCeremonyFlag(bool bAfter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectCourseSetting(TSoftObjectPtr<UObject>& Texture, float& OrthoRate, float& Angle, FVector& Offset);
    
    UFUNCTION(BlueprintCallable)
    void ReserveRaceSequenceExitCode(ERaceSequenceExitCode InExitCode);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRaceInfoListener(UObject* InListenerObject);
    
    UFUNCTION(BlueprintCallable)
    void OnStatusObjectEvent(const int32& InEventId, const int32& InRacerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPlatformEvent(const FUnionPlatformEventInfo& EventInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitStateExit();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeviceDisconnectedEvent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdateRace();
    
    UFUNCTION(BlueprintCallable)
    void InitializeRaceResultData();
    
    UFUNCTION(BlueprintCallable)
    bool HasFatalError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReservedExitCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionRacers* GetRacersRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUnionRaceInfoNotifier* GetRaceInfoNotifier();
    
    UFUNCTION(BlueprintCallable)
    UUnionRaceUI* GetRaceHUDRef();
    
    UFUNCTION(BlueprintCallable)
    UCommonMenuFooterMenu* GetFooterMenu();
    
    UFUNCTION(BlueprintCallable)
    int32 GetErrorLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAfterCeremonyFlag();
    
    UFUNCTION(BlueprintCallable)
    void BtsOnErrorSend();
    
    UFUNCTION(BlueprintCallable)
    void ApplyRaceOptionSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyParamIF();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AfterReadyStatusObject();
    
};

