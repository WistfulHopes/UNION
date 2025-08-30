#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESoundPan.h"
#include "DroppedRingLandJumpParameter.h"
#include "DroppedRingPlacementInfo.h"
#include "DroppedRingSkyJumpParameter.h"
#include "DroppedRingFactory.generated.h"

UCLASS(Blueprintable)
class UNIONRUN_API ADroppedRingFactory : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingPlacementInfo m_landHighRanker_RingHold_01_50;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingPlacementInfo m_landHighRanker_RingHold_51_100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingPlacementInfo m_landLowRanker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingPlacementInfo m_flyHighRanker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingPlacementInfo m_flyLowRanker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingPlacementInfo m_placementInfoGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingLandJumpParameter m_landJumpHighRanker_RingHold_01_50;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingLandJumpParameter m_landJumpHighRanker_RingHold_51_100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingLandJumpParameter m_landJumpLowRanker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingSkyJumpParameter m_flyJumpHighRanker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingSkyJumpParameter m_flyJumpLowRanker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDroppedRingLandJumpParameter m_jumpParamGimmick;
    
    ADroppedRingFactory(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayDroppedRingSound_Small(ESoundPan SoundPan);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayDroppedRingSound_Medium(ESoundPan SoundPan);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayDroppedRingSound_Large(ESoundPan SoundPan);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayDroppedRingSound_HIT_01(const FVector& Position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayDroppedRingSound_DAMAGE_01(ESoundPan SoundPan);
    
};

