#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDriverId.h"
#include "EPerformRivalOutcome.h"
#include "EPerformRivalInteractionType.h"
#include "OnVoiceFinishedPerformRivalFinalDelegateDelegate.h"
#include "PerformRivalFinal.generated.h"

class UAtomComponent;
class UCommonRivalLevelWidget;

UCLASS(Blueprintable)
class UNION_API APerformRivalFinal : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRivalLevelWidget* RivalLevelWidget;
    
    APerformRivalFinal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayRivalVoice(const EDriverId RivalDriverId, const EPerformRivalOutcome RivalOutcome, bool UseRivalSkin, FOnVoiceFinishedPerformRivalFinalDelegate OnVoiceFinished) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPerformRivalInteractionType GetRivalInteractionType(const EDriverId PlayerDriverId, const EDriverId RivalDriverId, const EPerformRivalOutcome Outcome) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPerformRivalOutcome GetCurrentRivalOutcome(const int32 RivalRacerIndex);
    
};

