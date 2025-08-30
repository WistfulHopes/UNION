#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "Components/TimelineComponent.h"
#include "RecoveryRingExit.generated.h"

class USceneComponent;
class UTimelineComponent;
class UUnionStaticMeshComponent;

UCLASS(Blueprintable)
class UNION_API ARecoveryRingExit : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnionStaticMeshComponent* BodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* AppearTimelineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTimeReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineFloat AppearUpdateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineEvent AppearFinishedEvent;
    
    ARecoveryRingExit(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishAppearTimeline_BP();
    
    UFUNCTION(BlueprintCallable)
    void FinishAppearTimeline();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AppearTimelineUpdate_BP(float Ratio);
    
    UFUNCTION(BlueprintCallable)
    void AppearTimelineUpdate(float Ratio);
    
};

