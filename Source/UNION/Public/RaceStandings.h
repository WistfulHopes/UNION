#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESpeedClassId.h"
#include "EStageId.h"
#include "RaceStandings.generated.h"

class UAppSystemSubsystem;
class UUnionRaceUIResultScene;

UCLASS(Blueprintable)
class UNION_API ARaceStandings : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionRaceUIResultScene* ResultHUD;
    
public:
    ARaceStandings(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ViewEndLoadInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowLoadInfo();
    
    UFUNCTION(BlueprintCallable)
    void SaveTimeTrialRecordData(ESpeedClassId InSpeedClass, EStageId InStageId);
    
    UFUNCTION(BlueprintCallable)
    bool ResultAsyncLoadMenuResidentAsset(UAppSystemSubsystem* Subsystem);
    
    UFUNCTION(BlueprintCallable)
    void InitDisplay(bool UseTotalStandings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Destroy();
    
};

