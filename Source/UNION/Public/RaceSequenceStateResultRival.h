#pragma once
#include "CoreMinimal.h"
#include "UnionRaceInfoInterface.h"
#include "EDriverId.h"
#include "EPerformRivalOutcome.h"
#include "ERivalType.h"
#include "RaceSequenceStateBase.h"
#include "RaceSequenceStateResultRival.generated.h"

class ADriver;
class AVehicleInRacePawn;
class UCommonRivalLevelWidget;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNION_API URaceSequenceStateResultRival : public URaceSequenceStateBase, public IUnionRaceInfoInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVehicleInRacePawn* RivalVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADriver* RivalDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerIsTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRivalIsTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPerformRivalOutcome RivalOutcome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriverId RivalDriverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RivalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalType RivalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SpeedClassRivalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRivalLevelWidget* RivalLevelWidget;
    
public:
    URaceSequenceStateResultRival(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float PlayRivalVoice(const EDriverId NewRivalDriverId, const EPerformRivalOutcome NewRivalOutcome, const bool bFinalRace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowerRival();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBonusUpChallenge();
    

    // Fix for true pure virtual functions not being implemented
};

